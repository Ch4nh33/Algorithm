#include<stdio.h>

int main(void)
{
    unsigned int r ,g ,b;
    unsigned int cnt = 0;
    scanf("%u %u %u", &r,&g,&b);

    for(int i = 0; i<r;i++)
    {
        for(int j  = 0; j<g;j++)
        {
            for(int k = 0; k<b;k++)
            {
                printf("%u %u %u\n",i,j,k);
                cnt++;
            }
        }
    }
    printf("%u",cnt);
    return 0;
}
