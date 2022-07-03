#include <iostream>

enum class months {
    januray = 1,
    february,
    march,
    april,
    may,
    june,
    july,
    august,
    september,
    october,
    november,
    december
};

int main(int argc, char** argv) {

    setlocale(LC_ALL, "ru");

    unsigned int numberMonth = 0;
    months month;
    
    do {

        std::cout << "Введите номер месяца: ";

        std::cin >> numberMonth;

        if (numberMonth < 0) {
            std::cout << "Номер месяца не может быть отрицательным..." << std::endl;
        }
        else {
            month = static_cast<months>(numberMonth);

            switch (month) {
            case months::januray: 
                std::cout << "Январь" << std::endl; 
                break;
            case months::february: 
                std::cout << "Февраль" << std::endl; 
                break;
            case months::march:
                std::cout << "Март" << std::endl;
                break;
            case months::april:
                std::cout << "Апрель" << std::endl;
                break;
            case months::may:
                std::cout << "Май" << std::endl;
                break;
            case months::june:
                std::cout << "Июнь" << std::endl;
                break;
            case months::july:
                std::cout << "Июль" << std::endl;
                break;
            case months::august:
                std::cout << "Август" << std::endl;
                break;
            case months::september:
                std::cout << "Сентябрь" << std::endl;
                break;
            case months::october:
                std::cout << "Октябрь" << std::endl;
                break;
            case months::november:
                std::cout << "Ноябрь" << std::endl;
                break;
            case months::december:
                std::cout << "Декабрь" << std::endl;
                break;
            case static_cast<months>(0):
                std::cout << "До свидания" << std::endl;
                break;
            default:
                std::cout << "Неправильный номер!" << std::endl;
                break;
            }
        }

    } while (numberMonth);

    return 0;
}
