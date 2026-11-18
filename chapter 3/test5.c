#include <stdio.h>

int main(){
    char a;
    scanf("%c",&a);  

    if(a>='A' && a<='Z')
{
    printf("it is an uppercase letter\n");
}
else if(a>='a' && a<='z')
{
    printf("it is an lowercase letter\n");
}
else
{
    printf("neither an uppercase or lowercase letter\n");
}
    return 0;
}