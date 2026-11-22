#include <stdio.h>
// Explain step by step evaluation of 3*x/y-z+k , where x = 2 , y = 3 , z = 3 , k = 1

int main()
{
    int x, y, z, k;
    x = 2;
    y = 3;
    z = 3;
    k = 1;
    printf("The evaluation of 3*x/y-z+k is : %d\n", 3 * x / y - z + k);
    return 0;
}
// 3*x/y-z+k
// 6/y-z+k
// 2-z+k
// 2-3+k
// 1-1
// 0
