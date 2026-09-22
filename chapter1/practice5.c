#include <stdio.h>

int main(){
    float celsius,fehreneit;

    printf("enter celsius\n");
    scanf("%f", &celsius);

    printf("the value of celsius %f into fehreneit  is %f", celsius, 1.8 * celsius + 32);
    return 0;
}