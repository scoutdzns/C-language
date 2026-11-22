#include <stdio.h>
// Volume of Hemisphere

// Formula V = (2/3)πr³

// Using scanf

/*int main () {
    int r ;
    float k= (2.0/3.0);
    printf("The radius of Hemisphere : ");
    scanf("%d", &r );

    printf("The volume of Hemisphere %d is %f\n",r, k*3.14*r*r*r);
    return 0;
}*/

// Find the Toal Surface Area of Right Circular Cylinder

// The formula (TSA) = 2πr(h + r)
int main()
{
    int h;
    float r;
    float pie = 3.14;
    printf("The Radius of Right Circular Cylinder : ");
    scanf("%f", &r);

    printf("The Height of Right Circular Cylinder : ");
    scanf("%d", &h);

    //printf("the Toal Surface Area for radius %2f and height %d is %f\n", r, h, 2 * pie * r * (h + r));
    printf("the Toal Surface Area is : %f\n", 2* pie * r *(h+ r));
    return 0;
}