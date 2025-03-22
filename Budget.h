#ifndef BUDGET_H
#define BUDGET_H

class Budget {
private:
    double money; 

public:
    Budget(); 
    Budget(double bal); 
    Budget(Budget&& other) noexcept;
    ~Budget(); 

    double getBalance() const;
    void display() const;
    void addBalance(double amount);
};

#endif 