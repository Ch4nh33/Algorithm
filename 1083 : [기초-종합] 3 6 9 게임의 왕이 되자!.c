#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        
        if (i%3==0||i%6==0||i%9==0)
            printf("X ");
        else
            printf("%d ",i);
    }
    return 0;    
}
