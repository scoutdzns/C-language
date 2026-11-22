#include<stdio.h>
//Building Simple Intrest Calculator using scanf()

int main(){
    float r , t;
    int p;
    printf("The Principal Amount is : ");
    scanf("%d", &p);

     printf("The Rate of Interest is : ");
    scanf("%f", &r);

     printf("The Time period is : ");
    scanf("%f", &t);

    printf("The Simple intrest is : %f\n", (p*r*t)/100);
    return 0;
}