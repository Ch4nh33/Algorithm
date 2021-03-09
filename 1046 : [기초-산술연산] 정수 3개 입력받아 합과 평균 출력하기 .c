#include<stdio.h>
int main(void)
{
    int num1 , num2 ,num3;
    scanf("%d %d %d", &num1, &num2 , &num3);
    printf("%d",num1 + num2 + num3);
    printf("\n%.1f",((float)num1 + (float)num2 + (float)num3)/3.0);
    return 0;
}
