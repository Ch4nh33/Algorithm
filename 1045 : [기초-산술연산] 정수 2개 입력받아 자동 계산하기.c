#include<stdio.h>
int main(void)
{
    int num1 , num2;
    scanf("%d %d", &num1, &num2);
    
    printf("%d",num1 + num2);
    printf("\n%d",num1 - num2);
    printf("\n%d",num1 * num2);
    printf("\n%d",num1 / num2);
    printf("\n%d",(int)num1 % (int)num2);
    printf("\n%.2f",(float)num1 / (float)num2);
    return 0;
}
