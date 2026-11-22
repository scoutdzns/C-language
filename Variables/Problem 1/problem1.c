#include <stdio.h>
// find the area of rectangle

// holy formula is (A) = (L) * (B)

/*int main () {
    int length = 10;
    int breadth = 5;
    printf("The area of rectangle is %d", length*breadth);
    return 0;
}*/

// now do it with scanf()

int main()
{
    int length, breadth;

    printf("The length is : ");
    scanf("%d", &length);

    printf("The breadth is : ");
    scanf("%d", &breadth);

    printf("The area of a rectangle is %d\n", length * breadth);
    return 0;
}
