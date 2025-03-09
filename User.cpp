#include "User.h"
#include <iostream>
using namespace std;

User::User() : name("") {}

User::User(string n) : name(n) {}

User::~User() {
    cout << "User '" << name << "' destroyed." << endl;
}

double User::displayBudget() {
    return budget.getBalance();
}

void User::addBudget(Transaction transaction) {
    budget.addBalance(transaction.getAmount());
}