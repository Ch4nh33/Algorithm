#include <stdio.h>
 
int main(void) 
{
    signed int a1;
    scanf("%d",&a1);
    
    if (a1<0) // minus even 
    {
        printf("minus\n");
        if(a1%2 == 0 )
            printf("even\n");
        else
        {
            printf("odd\n");
        }
        
    }// minus odd

    if(a1>0) // plus even
    {
        printf("plus\n");
        if(a1%2==0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd");
        }
        
    }
    
    return 0;
    
}
