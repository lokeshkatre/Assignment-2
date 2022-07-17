#include<stdio.h>
int main()
{
    int n,a=1,pos=1;
    printf("Enter number:");
    scanf("%d",&n);
    
    if(!(n&a)==0)
    printf("The number is odd number");
    else
    printf("The number is even number");
    return 0;
}