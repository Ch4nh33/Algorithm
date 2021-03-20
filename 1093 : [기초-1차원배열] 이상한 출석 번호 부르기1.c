#include <stdio.h>

int main(void)
{
	int number[24]={0, };
    int num;
    int list;
    scanf("%d",&num);
    for (size_t i = 1; i <= num; i++)
    {
        scanf("%d",&list);
        number[list] +=1 ;
    }
    for (int i = 1; i <= 23; i++)
    {
        printf("%d ",number[i]);
    }
    return 0;
}
