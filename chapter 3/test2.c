#include <stdio.h>

int main(){
    int a,b,c;
    float total,percentage;
    printf("enter marks of three subjects:\n");
    scanf("%d %d %d",&a,&b,&c);

    total=a+b+c;
    percentage=total/300 * 100;

    if (percentage>=40 || (a>=33 && b>=33 && c>=33))
    {
        printf("pass");
    }
    else 
   {
    printf("fail");
   }

    return 0;
}