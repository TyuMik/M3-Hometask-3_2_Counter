
#include <iostream>
#include <string>

class Counter
{
private:
    int count;
   
public:
    Counter() : count(1)
    { }

    Counter(int custom_count) : count(custom_count)
    { }
  
    void increment() {
        count++;
    }
    void decrement() {
        count--;
    }
    int getCounter() const {
        return count;
    }
};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");

    const char incr = '+';
    const char dcr = '-';
    const char gt = '=';
    const char hlt = 'x';

    int custom_count;
    const std::string yes = "yes";
    std::string init_count_choice;
    char command;

    std::cout << "Вы хотите указать начальное значение счётчика? Введите 'yes' или 'no': ";
    std::cin >> init_count_choice;
    if (init_count_choice == yes) {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> custom_count;
        Counter C1(custom_count);
        do {
            std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
            std::cin >> command;
            
            switch (command) {
            case(incr):
                C1.increment();
                break;
            case(dcr):
                C1.decrement();
                break;
            case(gt):
                std::cout << C1.getCounter() << std::endl;
                break;
            default:
                break;
            }
        } while (command != hlt);

    }
    else {
        Counter C2; 
        do {
            std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
            std::cin >> command;

            switch (command) {
            case(incr):
                C2.increment();
                break;
            case(dcr):
                C2.decrement();
                break;
            case(gt):
                std::cout << C2.getCounter() << std::endl;
                break;
            default:
                break;
            }
        } while (command != hlt);

    };

    std::cout << "До свидания!" << std::endl;

    return 0;
}