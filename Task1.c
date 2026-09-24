#include <stdio.h>

int main(){

    float temp;
    printf("enter temperature: ");
    scanf("%f", &temp);

    if(temp < 15){
     printf("Cold");
    }
    else if(temp > 15 && temp < 30){
     printf("normal");   
    }
    else{
     printf("Hot");    
    }

    return 0;
}