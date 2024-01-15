
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

    Counter count;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите 'yes' или 'no': ";
    std::cin >> init_count_choice;
    if (init_count_choice == yes) {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> custom_count;
        count = Counter(custom_count);
    }
    do {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;
            
        switch (command) {
            case(incr):
                count.increment();
                break;
            case(dcr):
                count.decrement();
                break;
            case(gt):
                std::cout << count.getCounter() << std::endl;
                break;
            default:
                break;
            }
        } while (command != hlt);
    
    std::cout << "До свидания!" << std::endl;

    return 0;
}