#include <stdio.h>

int main(){
    float principal,interest,time;

    printf("enter principal\n");
    scanf("%f",&principal);

    printf("enter time\n");
    scanf("%f",&time);

    printf("enter interest\n");
    scanf("%f",&interest);

    printf("the simple interest of principal %f with time %f and interest %f is %f",principal,time,interest, (principal*time*interest)/100);
 
    return 0;
}