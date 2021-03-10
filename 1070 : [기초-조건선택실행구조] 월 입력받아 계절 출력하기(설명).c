#include <stdio.h>
 
int main(void) 
{
    signed int a1;
    scanf("%d",&a1);

    switch (a1)
    {
    case 12:
    case 1:
    case 2:
        printf("winter\n");
        break;
    case 3:
    case 4:
    case 5:
        printf("spring\n");
        break;
    case 6:
    case 7:
    case 8:
        printf("summer\n");
        break;
    case 9:
    case 10:
    case 11:
        printf("fall");
        break;
    }
    return 0;
}
