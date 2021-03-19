#include<stdio.h>

int main(void)
{
    int count = 0;
    int sum = 0;
    scanf("%d",&count);

    for(unsigned int i = 0;; i++)
    {
        sum += i;
        if(sum>=count)
        {break;}
    }
    printf("%d",sum);
    return 0;
}
