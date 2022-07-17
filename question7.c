#include<stdio.h>
int main()
{
    int a,b=1,pos=1;
    printf("Enter number:");
    scanf("%d",&a);
    while(!(a&b))
    {
        b=b<<1;
        pos++;
    }
    printf("The position of first 1 in LSB is %d",pos);
    return 0;
}