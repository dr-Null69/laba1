#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
using namespace std;

class Transaction {
private:
    string description;
    double amount;    

public:
    Transaction(); 
    Transaction(string desc, double amt); 
    ~Transaction(); 

   
    string getDescription() const;
    double getAmount() const;

    void display() const;
};

#endif 