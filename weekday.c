#include<stdio.h>
int main(){
    int wday;
    printf("Enter the number 0-6:");
    scanf("%d",&wday);
    switch(wday){
        case 0:
        printf("Friday");
        break;
        case 1:
        printf("Saturday");
        break;
        case 2:
        printf("Sunday");
        break;
        case 3:
        printf("Monday");
        break;
        case 4:
        printf("Tuesday");
        break;
        case 5:
        printf("Wednesday");
        break;
        case 6:
        printf("Thursday");
        break;
        default:
        printf("Invalid Weekday Number");
    }
    printf("\n");
    return 0;
}