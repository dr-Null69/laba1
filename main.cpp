#include <iostream>
#include "Transaction.h"
#include "Budget.h"
#include "User.h"
using namespace std;

int main() {
    User user1("Pasha");
    User user2("Vova");

    Transaction stupendia("stupendia", 2000);

    user1.addBudget(stupendia);

    cout << "Current budget: " << user1.displayBudget() << endl;
    cout << "number users: "<< user1 << endl;
    return 0;
}