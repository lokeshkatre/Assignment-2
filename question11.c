#include<stdio.h>
int main()
{
    int num,dig;
    printf("Enter number:");
    scanf("%d",&num);
    printf("Enter digit: ");
    scanf("%d",&dig);
    num=num*10+dig;
    printf("resulting number is %d",num);
    return 0;
}