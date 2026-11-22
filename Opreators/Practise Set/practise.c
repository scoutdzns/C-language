#include <stdio.h>
// int and int = int

/*int main (){
    int a = 15;
    int b = 2;
    float c = a/b;
    printf("The value of a/b is : %f\n", c);
    return 0;
}

//int and float = float

int main (){
    float a = 15.0;
    int b = 2;
    float c = a/b;
    printf("The value of a/b is : %f\n", c);
    return 0;
}*/

// Ofc float and float = float

// Doubt

/*int main (){
    int k = 3.0/9;
    printf("%d", k);
    return 0;
}*/

// Where is the actual value 0.33 ???

// OPERATOR PRECEDENCE

/* Priority    Opreators
   1            * - / - %
   2            +-
   3            =
*/

// Opreators of higher priority are evaluated first in the absence of parenthesis

// OPREATOR ASSOCIATIVITY

/* When opreators of equal priority are present in an expression, the tie is taken care of by associativity

x*y/z -> (x*y)/z
x/y*z -> (x/y)*z

*,/ follows left to right associativity

PRO TIP FOR NIGGAS : Always use parenthesis in case of confusion.whoever still dont have any idea,
                     what are parenthesis is -> ()

*/

//NEED SOME STICHES ?? I CAN HELP 

//EXAMPLE

int main (){
    int a = 3;
    int b= 6;
    int c = 9;
    //printf("The Answer of this equation is : %d\n", a*b/c);
    printf("The Answer of this equation is : %d\n", 5*c/4*a + 10*b);
    return 0;
}

//In second Equation
//5*c/4*a + 10*b
//45/12 + 60
//3.75 + 60
//63.5
