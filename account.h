#include <string>
#include <iomanip>
#include <iostream>

class account {
private:
    float cash;
    float pin;
    std::string name;
    std::string surname;

public:
    account(std::string name, std::string surname, float cash, float pin);
    std::string getName();
    std::string getSuranme();
    float getBalance();
    void acceptTransaction(float transactionPrice);
    bool changePin(float oldPin, float newPin);
    void printData();
};