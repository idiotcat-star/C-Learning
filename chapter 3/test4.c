#include <stdio.h>

int main(){
    
    int year;
    scanf("%d",&year);

    if(year%400==0)
      {
        printf("it is also a leap year\n");
    }
    else if(year%100==0)
      {
        printf("it is also not a leap year\n");
    }
    else if(year%4==0)
    {
        printf("it is a leap year\n");
    }
    else
    {
        printf("it is not a leap year\n");
    }
        return 0;
}