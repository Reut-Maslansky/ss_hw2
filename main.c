#include <stdio.h>
#include "myBank.c"
void messege(){
    printf("\nPlease choose a transaction type:\n");
    printf(" O-Open Account\n");
    printf(" B-Balance Inquiry\n");
    printf(" D-Deposit\n");
    printf(" W-Withdrawal\n");
    printf(" C-Close Account\n");
    printf(" I-Interest\n");
    printf(" P-Print\n");
    printf(" E-Exit\n");
}

int main() {
    messege();
    char c;
    scanf("%c", &c);
    while(c!='E'){
        printf("\n");
        switch(c){
            case 'O':
                myO();
                break;
            case 'B':
                myB();
                break;
            case 'D':
                myD();
                break;
            case 'W':
                myW();
                break;
            case 'C':
                myC();
                break;
            case 'I':
                myI();
                break;
            case 'P':
                myP();
                break;
            default:
                printf("Invalid transaction type\n");
        }
        messege();
        scanf(" %c", &c);
    }
    printf("\n");
    myE();
    return 0;
}