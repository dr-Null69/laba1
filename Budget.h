#ifndef BUDGET_H
#define BUDGET_H

class Budget {
private:
    double money; 

public:
    Budget(); 
    Budget(double bal); 
    ~Budget(); 

    double getBalance();

    void addBalance(double bablo);
};

#endif 