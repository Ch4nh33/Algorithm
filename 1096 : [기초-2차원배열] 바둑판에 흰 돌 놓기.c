#include<stdio.h>

int main(void)
{
    int N;
    int min = 24;
    int arr[10000] ={0, };
    scanf("%d",&N);
    
    for (size_t i = 1; i <= N; i++)
     {
             scanf("%d",&arr[i]);
             if (min>arr[i])
             {
                min = arr[i];
             }
     }
     printf("%d",min);
    return 0;
}
