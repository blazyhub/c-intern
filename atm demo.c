
#include <stdio.h>

double balance = 10000.0;

void checkBalance() {
    printf("Current balance is: $%.2f\n", balance);
}

void deposit() {
    double amount;
    printf("How much do you want to deposit: $");
    scanf("%lf", &amount);

    if (amount > 0) {
        balance += amount;
        printf("Deposit of $%.2f is done\n", amount);
    } else {
        printf("Invalid input\n");
    }
}

void withdraw() {
    double amount;
    printf("How much do you want to withdraw: $");
    scanf("%lf", &amount);
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        printf("The withdrawal of $%.2f is done\n", amount);
    } else if (amount > balance) {
        printf("Low balance\n");
    } else {
        printf("Invalid input\n");
    }
}

int main() {
    int choice;
    while (1) {
        printf("\nATM Menu:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                printf("Exit the ATM\n");
                return 0; // Properly exit the program when the user chooses to exit
            default:
                printf("Invalid input. Please check and enter again.\n");
        }
    }
    return 0;
}
