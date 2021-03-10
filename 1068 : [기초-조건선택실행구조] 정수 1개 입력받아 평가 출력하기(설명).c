#include <stdio.h>
 
int main(void) 
{
    signed int a1;
    scanf("%d",&a1);

    if(a1>=90)
        printf("A\n");
    else if(a1>=70)
        printf("B\n");
    else if(a1>=40)
        printf("C\n");
    else
        printf("D\n");
    return 0;
}
