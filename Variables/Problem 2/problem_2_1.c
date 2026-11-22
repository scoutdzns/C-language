#include <stdio.h>
// Find the area of circle

// The formula is (A) = πr²

/*int main()
{
    int radius = 7;
    printf("The area of radius %d is %f\n", radius, 3.14*radius*radius );
    return 0;
}*/

// Find the volume of Cylinder

// Formula (V) = πr²h

/*int main()
{
    int r, h;
    r = 10;
    h = 12;
    printf("The volume of Cylinder with radius %d and height %d is %f\n", r, h, 3.14 * r * r * h);
    return 0;
}*/

//Find the Total Surface Area of Hemisphere

// Formula (TITS) = 3r²
/*int main ()
{
    int r;
    r = 30;
    printf("The TSA of Hemisphere %d is %f\n",r,3*3.14*r*r);
    return 0;
}*/

//Volume of Hemisphere

//Formula V = (2/3)πr³

//Using scanf

int main () {
    int r ;
    float k= (2.0/3.0);
    printf("The radius of Hemisphere : ");
    scanf("%d", &r );

    printf("The volume of Hemisphere %d is %f\n",r, k*3.14*r*r*r);
    return 0;
}