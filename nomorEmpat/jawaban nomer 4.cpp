#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string pemilik;
    double saldo;

public:
    BankAccount(string pemilik, double saldo) : pemilik(pemilik), saldo(saldo) {}

    void deposit(double amount) {
        saldo += amount;
        cout << "Deposit " << amount << " sukses." << endl;
    }

    void withdraw(double amount) {
        if (amount <= saldo) {
            saldo -= amount;
            cout << "Ditarik " << amount << " sukses." << endl;
        } else {
            cout << "saldo tidak cukup." << endl;
        }
    }

    void displayBalance() {
        cout << "saldo saat ini " << pemilik << ": " << saldo << endl;
    }
};

int main() {
    BankAccount account("Syauqi", 2000);

    account.deposit(500);
    account.withdraw(200);
    account.withdraw(1500);

    account.displayBalance();

    return 0;
}
