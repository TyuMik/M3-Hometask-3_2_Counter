
#include <iostream>
#include <string>

class Counter
{
private:
    int count;
    const std::string yes = "yes";
    std::string init_count_choice;
public:
    Counter() : count(1)
    { }
    void setCounter() {
        std::cout << "Вы хотите указать начальное значение счётчика? Введите 'yes' или 'no': ";
        std::cin >> init_count_choice;
        if (init_count_choice == yes) {
            std::cout << "Введите начальное значение счётчика: ";
            int count_0;
            std::cin >> count_0;
            count = count_0;
        };
    }
    void increment() {
        count++;
    }
    void decrement() {
        count--;
    }
    int getCounter() const {
        std::cout << count << std::endl;
        return count;
    }
    int halt() const {
        std::cout << "До свидания!" << std::endl;
        return 0;
    }
    char incr() const {
        char incr = '+';
        return incr;
    }
    char dcr() const  {
        char dcr = '-';
        return dcr;
    }
     char gt() const {
        char gt = '=';
        return gt;
    }
     char hlt() const {
        char hlt = 'x';
        return hlt;
    }
};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");

    Counter counter;
    counter.setCounter();
    char command;

    do {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;

        if (command == counter.incr()) {
            counter.increment();
        }
        else
            if (command == counter.dcr()) {
                counter.decrement();
            }
            else
                if (command == counter.gt()) {
                    counter.getCounter();
                };
    } while (command != counter.hlt());

    counter.halt();

    return 0;
}