#include <stdio.h>

int main(){

    int balance;
    printf("Enter your balance: ");
    scanf("%d", &balance);

    if(balance < 500){
     printf("Low balance");
    }
    else if(balance > 500 && balance < 2000){
     printf("Sufficient balance");
    }
    else{
        printf("premium balance");
    }

    return 0;
}