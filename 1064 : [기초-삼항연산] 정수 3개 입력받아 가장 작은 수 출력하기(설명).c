#include <stdio.h>
 
int main(void) 
{
 
    long long int i, j ,k;
 
    scanf("%lld %lld %lld", &i , &j , &k);
    printf("%lld", (i<j ? i : j)<k ? (i<j ? i : j) : k);
    return 0;
}
