#include "Budget.h"
#include <iostream>
using namespace std;

Budget::Budget() : balance(0.0) {}

Budget::Budget(double bal) : balance(bal) {}

Budget::~Budget() {
    cout << "Budget with balance '" << balance << "' destroyed." << endl;
}

double Budget::getBalance() {
    return balance;
}

void Budget::addBalance(double bablo) {
    balance += bablo;
}