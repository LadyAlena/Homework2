#include <iostream>
#include <string>
#include <windows.h>


struct bankAccount {
    int accountNumber;
    std::string owner;
    float balance;
};

bankAccount changeBalanceAccount(bankAccount &BankAcc, float &newBalance) {

    BankAcc.balance = newBalance;

    return BankAcc;
}

int main(int argc, char** argv) {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    bankAccount BankAcc;
    float newbalance = 0.0;

    std::cout << "Введите номер счета: ";
    std::cin >> BankAcc.accountNumber;
    std::cout << "Введите имя владельца: ";
    std::cin >> BankAcc.owner;
    std::cout << "Введите баланс: ";
    std::cin >> BankAcc.balance;

    std::cout << "Введите новый баланс: ";
    std::cin >> newbalance;

    changeBalanceAccount(BankAcc, newbalance);

    std::cout << "Ваш счет: " << BankAcc.owner << ", " << BankAcc.accountNumber << ", " << BankAcc.balance << std::endl;

    return 0;
}