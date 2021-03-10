#include <stdio.h>
 
int main(void) 
{
    for (;;)
    {
        signed int a1;
        scanf("%d",&a1);
        
        if(a1==0)
            break;
        printf("%d\n",a1);
    }
    return 0;
}
