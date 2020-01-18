#include "account.h"

account::account(std::string name, std::string surname, float cash, float pin) {
    this->name = name;
    this->surname = surname;
    this->cash = cash;
    this->pin = pin;
}

void account::acceptTransaction(float transactionPrice) {
    if (this->cash >= transactionPrice) {
        this->cash -= transactionPrice;
        std::cout << "Transaction accepted, price: " << transactionPrice << std::endl;
    }
}

float account::getBalance() {
    return this->cash;
}

std::string account::getName() {
    return this->name;
} 

std::string account::getSuranme() {
    return this->surname;
}

bool account::changePin(float oldPin, float newPin) {
    if (this->pin == oldPin) {
        this->pin = newPin;
        return true;
    }
    return false;
}

void account::printData() {
    std::cout << std::endl;
    std::cout << std::setfill(' ');
    std::cout << std::setw(16) << "Name";
    std::cout << std::setw(16) << "Surname";
    std::cout << std::setw(16) << "Balance";
    std::cout << std::endl;

    std::cout << std::setw(16) << this->name;
    std::cout << std::setw(16) << this->surname;
    std::cout << std::setw(16) << this->cash;
    std::cout << std::endl << std::endl;
}