#include "myBank.h"
#include <stdio.h>

#define N 50
#define M 2

double bank[M][N] = {0};

void myO() {
    int acount = -1;
    for (int i = 0; i < N; i++) {
        if (bank[1][i] == 0) {
            acount = i + 901;
            bank[1][i] = 1;
            i = N;
        }
    }
    if (acount == -1) {
        printf("No place! The bank is full\n");
    } else {
        printf("Please enter amount for deposit: \n");
        double deposit = -1;
        scanf("%lf", &deposit);

        /* while (deposit <= 0)
         {
             printf("Failed to read the amount\n");
             scanf("%lf", &deposit);
         }*/
        if (deposit < 0) {
            printf("Failed to read the amount\n");
            bank[1][acount-901] = 0;
        }
        else {
            bank[0][acount - 901] = deposit;
            bank[1][acount - 901] = 1;
            printf("New account number is: %d\n", acount);
        }
    }
}

void myB() {
    printf("Please enter amount for deposit: \n");
    int acount = -1;
    scanf("%d", &acount);
    if (acount < 901 || acount > 950) {
        printf("Failed to read the account number\n");
    }
    else if (bank[1][acount - 901] == 0) {
        printf("This account is closed\n");
    }
    else {
        printf("The balance of account number %d is: %.2lf\n", acount, bank[0][acount - 901]);
    }
}

void myD() {
    printf("Please enter your account number\n");
    int acount = -1;
    scanf("%d", &acount);
    if (acount < 901 || acount > 950) {
        printf("Failed to read the account number\n");
    }
    else if (bank[1][acount - 901] == 0) {
        printf("the account is closed\n");
    }
    else {
        printf("Please enter the amount to deposit\n");
        double deposit = -1;
        scanf("%lf", &deposit);
        if (deposit <= 0) {
            printf("Cannot deposit a negative amount\n");
        }
        else{bank[0][acount - 901] += deposit;

        printf("The new balance is %.2lf\n", bank[0][acount - 901]);}
    }
}

void myW() {
    printf("Please enter your account number\n");
    int acount = -1;
    scanf("%d", &acount);

    if (acount < 901 || acount > 950) {
        printf("Invalid account number\n");
    }
    else if (bank[1][acount - 901] == 0) {
        printf("This account is closed\n");
    } else {
        printf("Please enter the amount to withdraw\n");
        double withdrwal = -1;
        scanf("%lf", &withdrwal);
        if (withdrwal <= 0) {
           printf("Cannot withdraw negative amount the balance\n");
        }
        else if (bank[0][acount - 901] - withdrwal >= 0) {
            bank[0][acount - 901] -= withdrwal;
            printf("The new balance is %.2lf\n", bank[0][acount - 901]);
        }
        else {
            printf("Cannot withdraw more than the balance\n");
        }

    }
}

void myC() {
    printf("Please enter your account number\n");
    int acount = -1;
    scanf("%d", &acount);

    if (acount < 901 || acount > 950) {
        printf("Invalid account number\n");
    }
    else if (bank[1][acount - 901] == 0) {
        printf("This account is already closed\n");
    }
    else {
        bank[0][acount - 901] = 0;
        bank[1][acount - 901] = 0;
        printf("Closed account number %d\n", acount);
    }
}

void myI() {
    printf("Please enter interest rate\n");
    double rate = -1;
    scanf("%lf", &rate);
    if (rate < 0) {
        printf("Invalid interest rate\n");
    }
    else{rate /= 100;
    rate += 1;
    for (int i = 0; i < N; i++) {

        if (bank[1][i] == 1)
            bank[0][i] *= rate;
    }
    }
}

void myP() {
    for (int i = 0; i < N; i++) {
        if (bank[1][i] == 1) {
            printf("The balance of account number %d is: %.2lf\n", (i + 901), bank[0][i]);
        }
    }
}

void myE() {
    for (int i = 0; i < N; i++) {
        bank[0][i] = 0;
        bank[1][i] = 0;
    }
}