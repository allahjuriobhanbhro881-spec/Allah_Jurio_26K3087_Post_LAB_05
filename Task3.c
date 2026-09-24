#include <stdio.h>

int main(){

    int appointment, doctorAvailable, registrationCompleted;
    printf("have appointment? 1 for YES, 0 for NO:");
    scanf("%d", &appointment);
    printf("Is doctor available?");
    scanf("%d", &doctorAvailable);
    printf("Have you completed registration? ");
    scanf("%d", &registrationCompleted);

    if(appointment == 1){
        if(doctorAvailable == 1){
            if(registrationCompleted == 1){
                printf("patient can meet the Doctor.");
            }
        }
    }
    return 0;
}