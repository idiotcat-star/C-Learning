#include <stdio.h>

int main(){
    float a;
    float tax,total_income;

    scanf("%f",&a);
    total_income=a;
   

    if(a>=250000 && a<=500000)
    { 
        printf("the tax to be paid is 5%% of total income\n:%f",5.0/100*a );
    }
    else if((a>500000 && a<=1000000))
    {
       printf("the tax to be paid is 20%% of total income\n:%f",20.0/100*a);
    }
     else if(a>1000000)
     {
       printf("the tax to be paid is 30%% of total income\n:%f",30.0/100*a);
     }
     else
     {
        printf("no tax to be paid");
     }
    return 0;
}