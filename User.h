#ifndef USER_H
#define USER_H

#include <string>
#include "Budget.h"
#include "Transaction.h"
using namespace std;

class User {
private:
    string name;  
    Budget budget;

public:
    User(); 
    User(string n); 
    ~User(); 

    
    double displayBudget();

    
    void addBudget(Transaction transaction);
};

#endif 