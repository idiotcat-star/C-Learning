#include <stdio.h>

int main(){
    int a,largest;
    
    scanf("%d",&a);
    largest=a;
    for(int i=1; i<=4; i++)
    {
        scanf("%d",&a);
        if(a>largest)
        {
        largest=a;
    }
}
    printf("the largest number is %d\n", largest);
    return 0;
}