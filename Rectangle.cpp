#include <iostream>
#include <locale>

class Account {
private:
    double balance;

public:
    Account(double initialBalance) : balance(initialBalance) {}

    double getBalance() const {
        return balance;
    }

    // Дружественный класс Bank
    friend class Bank;
};

class Bank {
public:
    void deposit(Account& account, double amount) {
        account.balance += amount;
        std::cout << "Пополнено: " << amount << ", Новый баланс: " << account.getBalance() << std::endl;
    }

    void withdraw(Account& account, double amount) {
        if (amount <= account.balance) {
            account.balance -= amount;
            std::cout << "Снято: " << amount << ", Новый баланс: " << account.getBalance() << std::endl;
        } else {
            std::cout << "Недостаточно средств для снятия." << std::endl;
        }
    }
};

int main() {
    sts::setlocale(LC_ALL, "RU");
    Account myAccount(1000);
    Bank myBank;

    myBank.deposit(myAccount, 200);
    myBank.withdraw(myAccount, 150);
    myBank.withdraw(myAccount, 1200); // Попытка снять больше, чем есть на счете

    return 0;
}
