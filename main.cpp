#include <iostream>
#include <string>
using namespace std;

class Transaction {
private:
    string description; 
    double amount;      
   

public:
    Transaction() : description(""), amount(0.0){}

    Transaction(string desc, double amt) : description(desc), amount(amt){}

    ~Transaction() {cout << "Transaction '" << description << "' destroyed." << endl;}

    string getDescription() const {
        return description;
    }

    double getAmount() const {
        return amount;
    }

    void display() const {cout << "Transaction: " << description << ", Amount: " << amount << endl;}
};


class Budget  {
    private:
        double balance ;

    
    public:
        Budget() : balance(0.0){}
    
        Budget(double bal) : balance(bal){}
    
        ~Budget() {cout << "Budget '" << balance << "' destroyed." << endl;}
    
        double getBalance() {
            return balance;
        }
        
        void addBalance(double bablo){
            balance += bablo;
        }
    };

    class User   {
        private:
            string name ;
            Budget budget;
        
        public:
            User() : name(""){}
        
            User(string n) : name(n){}
        
            ~User() {cout << "User '" << name << "' destroyed." << endl;}
        
            double displayBudget() {
                return budget.getBalance();
            }
            
            void addBudget(Transaction transaction){
                budget.addBalance(transaction.getAmount());
            }
        };


int main(){
    User user("Vitalii");

    Transaction stupendia("stupendia",2000);
    user.addBudget(stupendia);
    
    user.displayBudget();
}