#include<stdio.h>
int main(void)
{
    int num1 , num2;
    scanf("%d %d",&num1,&num2);
    
    if (num1 <= num2)
    {
        printf("%d",1);
    }
    else
    {
        printf("%d",0);
    }
    return 0;
}
