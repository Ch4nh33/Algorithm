#include <stdio.h>

int main(void)
{
	int number[1000]={0, };
    int count;
    scanf("%d",&count);

    for (size_t i = 1; i <= count; i++)
    {
        scanf("%d",&number[i]);
    }
    for (size_t i = count; i >= 1; i--)
    {
        printf("%d ",number[i]);
    }
    
    return 0;
}
