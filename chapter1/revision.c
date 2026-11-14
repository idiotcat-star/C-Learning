#include <stdio.h>
int main(){
    float p,t,r;
     
    printf("enter principal\n");
    scanf("%f",&p);

    printf("enter time\n");
    scanf("%f",&t);
    
    printf("enter rate\n");
    scanf("%f",&r);

    printf("the simple interest of principal %f with time %f and rate %f is %f",p,t,r,(p*t*r/100));

    return 0;
}