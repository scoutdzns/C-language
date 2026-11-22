#include<stdio.h>
//The formula to Convert Celsius to Fahrenheit

// Formula F = (C * 9/5) + 32

int main()
{
    float C = 56 , F;
    F = (9.0/5.0);
    printf("The answer is %f\n", (C * F)+32);
    return 0;
}

//This is what logic i used

//But
int main2 (){
 float C = 56 , F;
    F = ( C*9.0/5.0);
    printf("The answer is %f\n", F);
    return 0;
}