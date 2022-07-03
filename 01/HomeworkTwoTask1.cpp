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

        month = static_cast<months>(numberMonth);

        if (numberMonth < 13) {
            if (month == months::januray) {
                std::cout << "Январь" << std::endl;
            }
            if (month == months::february) {
                std::cout << "Февраль" << std::endl;
            }
            if (month == months::march) {
                std::cout << "Март" << std::endl;
            }
            if (month == months::april) {
                std::cout << "Апрель" << std::endl;
            }
            if (month == months::may) {
                std::cout << "Май" << std::endl;
            }
            if (month == months::june) {
                std::cout << "Июнь" << std::endl;
            }
            if (month == months::july) {
                std::cout << "Июль" << std::endl;
            }
            if (month == months::august) {
                std::cout << "Август" << std::endl;
            }
            if (month == months::september) {
                std::cout << "Сентябрь" << std::endl;
            }
            if (month == months::october) {
                std::cout << "Октябрь" << std::endl;
            }
            if (month == months::november) {
                std::cout << "Ноябрь" << std::endl;
            }
            if (month == months::december) {
                std::cout << "Декабрь" << std::endl;
            }
        }
        else {
            std::cout << "Неправильный номер!" << std::endl;
        }

        if (!numberMonth) {
            std::cout << "До свидания" << std::endl;
        }

    } while (numberMonth);

    return 0;
}
