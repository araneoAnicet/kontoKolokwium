#include <iostream>
#include "account.h"

using namespace std;

int main() {
    account sergiejAccount("Sergiej", "Krupiak", 961.2, 6564);
    sergiejAccount.printData();
    sergiejAccount.acceptTransaction(6.78);
    
    float oldPin;
    float newPin;

    std::cout << "Write old pin to change it: ";
    std::cin >> oldPin;

    std::cout << "Write your new pin: ";
    std::cin >> newPin;

    if (sergiejAccount.changePin(oldPin, newPin)) {
        std::cout << "Your pin has been changed!" << std::endl;
    } else {
        std::cout << "Wrong old pin, your pin has not been changed" << std::endl;
    }

    sergiejAccount.printData();
    return 0;
}