#include <stdio.h>
 
int main(void) 
{
    signed char a1;
    scanf("%c",&a1);

    switch (a1)
    {
    case 'A':
        printf("best!!!\n");
        break;
    case 'B':
        printf("good!!\n");
        break;
    case 'C':
        printf("run!\n");
        break;
    case 'D':
        printf("slowly~");
        break;
    default:
        printf("what?\n");
        break;
    }
    return 0;
}
