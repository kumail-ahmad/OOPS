#include <iostream>
#include <vector>
using namespace std;

class Expense {
    string category;
    double amount;
public:
    Expense(string c, double a) {
        category = c;
        amount = a;
    }
    double getAmount() { return amount; }
    string getCategory() { return category; }
};

class ExpenseTracker {
    vector<Expense> expenses;
public:
    void addExpense(string category, double amount) {
        expenses.push_back(Expense(category, amount));
    }
    void showExpenses() {
        cout << "\n--- Expense Report ---\n";
        double total = 0;
        for (auto &e : expenses) {
            cout << e.getCategory() << " : Rs. " << e.getAmount() << endl;
            total += e.getAmount();
        }
        cout << "Total Spent = Rs. " << total << endl;
    }
};

int main() {
    ExpenseTracker tracker;
    tracker.addExpense("Food", 250);
    tracker.addExpense("Transport", 100);
    tracker.addExpense("Shopping", 500);
    
    tracker.showExpenses();
    return 0;
}
