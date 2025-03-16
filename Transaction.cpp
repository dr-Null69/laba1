#include "Transaction.h"
#include <iostream>
using namespace std;

Transaction::Transaction() : description(""), amount(0.0) {}

Transaction::Transaction(string desc, double amt) : description(desc), amount(amt) {}

Transaction::Transaction(const Transaction& other) {
    description = other.description;
    amount = other.amount;
    cout << "Copy for: " << description << endl;
}
Transaction::~Transaction() {
    cout << "Transaction '" << description << "' destroyed." << endl;
}

string Transaction::getDescription() const {
    return description;
}

double Transaction::getAmount() const {
    return amount;
}

void Transaction::display() const {
    cout << "Transaction: " << description << ", Amount: " << amount << endl;
}