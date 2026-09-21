#include <stdio.h>

int main(){
    int radius,height;
     printf("enter radius\n");
     scanf("%d",&radius);

     printf("enter height\n");
     scanf("%d",&height);

     printf("the area of circle with radius %d is %f\n",radius,3.14*radius*radius);
     printf("the volume of cylinder with radius %d and height %d is %f\n",radius,height,3.14*radius*radius*height);
    return 0;
}