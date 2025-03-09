#include <iostream>
#include "Transaction.h"
#include "Budget.h"
#include "User.h"
using namespace std;

int main() {
    User user("Vitalii");

    Transaction stupendia("stupendia", 2000);

    user.addBudget(stupendia);

    cout << "Current budget: " << user.displayBudget() << endl;

    return 0;
}