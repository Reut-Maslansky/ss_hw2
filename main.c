#include <stdio.h>
#include "myBank.c"
void messege(){
    printf("Enter the char of operation:\n");
    printf("'O': Open an account\n");
    printf("'B': Print balance of an account\n");
    printf("'D': Deposit\n");
    printf("'W': Withdrawal\n");
    printf("'C': Close account\n");
    printf("'I': Add interest to all accounts\n");
    printf("'P': Print all opened accounts\n");
    printf("'E': Close all accounts and exit program\n");
    printf("Your choice: ");

}
int main() {

    printf("Welcome!\n");
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
                printf("Oops.. try again! \n");
        }
        printf("\n");
        messege();
        scanf(" %c", &c);
    }
    printf("\n");
    myE();
    return 0;
}