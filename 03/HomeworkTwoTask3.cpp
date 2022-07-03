#include <iostream>
#include <string>

struct address {
    std::string country;
    std::string town;
    std::string street;
    unsigned int homeNumber;
    unsigned int flatNumber;
    unsigned int index;
};

void printStruct(address* instance) {
    std::cout << "Страна: " << instance->country << std::endl;
    std::cout << "Город: " << instance->town << std::endl;
    std::cout << "Улица: " << instance->street << std::endl;
    std::cout << "Номер дома: " << instance->homeNumber << std::endl;
    std::cout << "Номер квартиры: " << instance->flatNumber << std::endl;
    std::cout << "Индекс: " << instance->index << std::endl;
}

int main() {

    setlocale(LC_ALL, "RUS");

    address currentAddress = {"Россия", "Москва", "Панфилова", 17, 45, 45678};

    printStruct(&currentAddress);

    std::cout << std::endl;

    currentAddress = { "Россия", "Москва", "Арбат", 12, 8, 123455 };
    printStruct(&currentAddress);

    return 0;
}
