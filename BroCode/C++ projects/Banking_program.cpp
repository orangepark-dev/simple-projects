#include <iostream>
#include <iomanip>
#include <limits>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{

    double balance = 0.0;
    int choice = 0;

    do
    {
        std::cout << "******************\n";
        std::cout << "Enter your choice:\n";
        std::cout << "******************\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit\n";
        std::cout << "3. Withdraw\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;

        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the input buffer to avoid issues with invalid input

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            showBalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showBalance(balance);
            break;
        case 4:
            std::cout << "Exiting the program.\n";
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
            break;
        }

    } while (choice != 4);

    return 0;
}

void showBalance(double balance)
{
    std::cout << "Your current balance is: $" << std::setprecision(2) << std::fixed << balance << "\n";
}

double deposit()
{
    double amount = 0;

    std::cout << "Enter the amount to deposit: $";
    std::cin >> amount;

    if (amount > 0)
    {
        return amount;
    }
    else
    {
        std::cout << "Invalid deposit amount. Please enter a positive value.\n";
        return 0; // Return 0 if the deposit amount is invalid
    }
}
double withdraw(double balance)
{
    double amount = 0;

    std::cout << "Enter the amount to withdraw: $";
    std::cin >> amount;

    if (amount > balance)
    {
        std::cout << "Insufficient funds. You can only withdraw up to $" << balance << ".\n";
        return 0; // Return 0 if the withdrawal amount exceeds the balance
    }
    else if (amount < 0)
    {
        std::cout << "Invalid withdrawal amount. Please enter a positive value.\n";
        return 0; // Return 0 if the withdrawal amount is invalid
    }
    else
    {
        return amount;
    }
}