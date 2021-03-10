#include <stdio.h>
 
int main(void) 
{
    signed int a1, a2, a3;
    scanf("%d %d %d",&a1,&a2,&a3);

    if(a1%2 == 0 )
        printf("even\n");
    else
        printf("odd\n");
    if(a2%2==0)
        printf("even\n");
    else
        printf("odd\n");
    if(a3%2==0)
        printf("even\n");
    else
        printf("odd\n");
    return 0;
}
