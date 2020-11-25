#include "myBank.h"
#include <stdio.h>

#define N 50
#define M 2

double bank[M][N] = {0};

void myO()
{
    printf("____________________________________________\n");
    printf("\t Option 'O:");
    int acount = -1;
    for (int i = 0; i < N; i++)
    {
        if (bank[1][i] == 0)
        {
            acount = i + 901;
            bank[1][i] = 1;
            i = N;
        }
    }
    if (acount == -1)
    {

        printf("\tNo place! The bank is full\n");
    }
    else
    {
        printf("\tYour acount number is %d\n", acount);
        printf("\tPlease enter a positive initial deposit\n");
        double deposit = -1;
        while (deposit <= 0)
        {
            scanf("%lf", &deposit);
        }
        bank[0][acount - 901] = deposit;
        bank[1][acount - 901] = 1;
    }
    printf("____________________________________________\n");

}

void myB()
{
    printf("____________________________________________\n");
    printf("\t Option 'B:");
    printf("\tPlease enter your acount number\n");
    int acount = -1;
    while (acount < 901 || acount > 950)
    {
        scanf("%d", &acount);
    }
    if (bank[1][acount - 901] == 0)
    {
        printf("\tthe acount dosen't exist!\n");
    }
    else
    {
        printf("\tYour balance is %.2lf$\n", bank[0][acount - 901]);
    }
    printf("____________________________________________\n");

}
void myD()
{
    printf("____________________________________________\n");
    printf("\t Option 'D:");
    printf("\tPlease enter your acount number\n");
    int acount = -1;

    while (acount < 901 || acount > 950)
    {
        scanf("%d", &acount);
    }
    if (bank[1][acount - 901] == 0)
    {
        printf("\tthe acount dosen't exist!\n");
    }
    else
    {
        printf("\tPlease enter a positive deposit\n");
        double deposit = -1;
        while (deposit <= 0)
        {
            scanf("%lf", &deposit);
        }
        bank[0][acount - 901] += deposit;

        printf("\tYour balance is %.2lf$\n", bank[0][acount - 901]);
    }
    printf("____________________________________________\n");

}
void myW()
{
    printf("____________________________________________\n");
    printf("\t Option 'W:");
    printf("\tPlease enter your acount number\n");
    int acount = -1;

    while (acount < 901 || acount > 950)
    {
        scanf("%d", &acount);
    }
    if (bank[1][acount - 901] == 0)
    {
        printf("\tThe acount dosen't exist!\n");
    }
    else
    {
        printf("\tPlease enter a withdrwal amount\n");
        double withdrwal = -1;
        while (withdrwal <= 0)
        {
            scanf("%lf", &withdrwal);
        }
        if (bank[0][acount - 901] - withdrwal >= 0)
        {
            bank[0][acount - 901] -= withdrwal;
        }
        else
        {
            printf("\tThe amount to be withdrwan is grather than the balance\n");
        }

        printf("\tYour balance is %.2lf$\n", bank[0][acount - 901]);
    }
    printf("____________________________________________\n");

}
void myC()
{
    printf("____________________________________________\n");
    printf("\t Option 'C:");
    printf("\tPlease enter your acount number\n");
    int acount = -1;
    while (acount < 901 || acount > 950)
    {
        scanf("%d", &acount);
    }
    if (bank[1][acount - 901] == 0)
    {
        printf("\tThe acount dosen't exist!\n");
    }
    else
    {
        bank[0][acount - 901] = 0;
        bank[1][acount - 901] = 0;
    }
    printf("____________________________________________\n");

}
void myI()
{
    printf("____________________________________________\n");
    printf("\t Option 'I:");
    printf("\tPlease insert rate\n");
    double rate = -1;
    while (rate < 0)
    {
        scanf("%lf", &rate);
    }
    rate /= 100;
    rate += 1;
    for (int i = 0; i < N; i++)
    {

        if (bank[1][i] == 1)
            bank[0][i] *= rate;
    }

    printf("____________________________________________\n");

}
void myP()
{
    printf("____________________________________________\n");
    printf("\t Option 'P:");
    for (int i = 0; i < N; i++)
    {
        if (bank[1][i] == 1)
        {
            printf("\tAcount:  %d , balance:  %.2lf$\n", (i + 901), bank[0][i]);
        }
    }
    printf("____________________________________________\n");
}
void myE()
{
    printf("____________________________________________\n");
    printf("\t Option 'E:");
    for (int i = 0; i < N; i++)
    {
        bank[0][i] = 0;
        bank[1][i] = 0;
    }
    printf("\tAll the acounts have been deleted!\n");
    printf("____________________________________________\n");
}