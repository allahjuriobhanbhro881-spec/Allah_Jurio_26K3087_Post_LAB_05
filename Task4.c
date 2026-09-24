#include <stdio.h>

int main(){

    int restaurantOpen, itemAvailable, balanceSufficient;
    printf("is restaurant opened?");
    scanf("%d", &restaurantOpen);
    printf("Is item available?");
    scanf("%d", &itemAvailable);
    printf("Have sufficient balance");
    scanf("%d", &balanceSufficient);

    if(restaurantOpen == 1){
        if(itemAvailable == 1){
            if(balanceSufficient == 1){
                printf("order Accepted");
            }
        }
    }
    
    return 0;
}