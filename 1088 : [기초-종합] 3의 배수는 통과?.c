#include<stdio.h>

int main(void)
{
    unsigned int num;
    scanf("%u",&num);

    for(int i = 1;i<num+1;i++)
    {
        if((i%3)==0)
        {continue;}
        printf("%d ",i);
    }
    return 0;
}
