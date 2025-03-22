#include "Budget.h"
#include <iostream>
using namespace std;

Budget::Budget() : money(0.0) {}

Budget::Budget(double money) {
    this->money = money;  
}
Budget::Budget(Budget&& other) noexcept {
    money = other.money;
    other.money = 0.0;
}
Budget::~Budget() {
    cout << "Budget with balance '" << money << "' destroyed." << endl;
}

double Budget::getBalance() const {
    return this->money;
}

void Budget::addBalance(double amount) {
    this->money += amount;
     
}

void Budget::display() const {
    cout << "Current balance: " << this->money << endl;
}
