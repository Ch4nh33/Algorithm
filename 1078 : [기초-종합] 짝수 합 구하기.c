#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i < n+1; i++)
    {
        if (i%2==0)
            sum = sum +i;
    }
    printf("%d",sum);
    
    return 0;    
}
