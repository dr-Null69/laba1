#include "User.h"
#include <iostream>
using namespace std;

int User::count = 0;

User::User() : name("") {
    User::count++;
}

User::User(string n) : name(n) {
    User::count++;
}

User::~User() {
    User::count--;
    cout << "User '" << name << "' destroyed." << endl;
}

double User::displayBudget() {
    return budget.getBalance();
}

void User::addBudget(Transaction transaction) {
    budget.addBalance(transaction.getAmount());
}
int User::getCount() {
    return User::count;  
}
string User::getName(){
    return name;
}

ostream& operator<<(ostream& os, const User& user) {
    os  << user.getCount(); 
    return os;
}