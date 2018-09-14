/* 
  This program will order 3 numbers in ascending values
  
  Author: Victor Manuel Gastelum Huitzil
  Date:13/09/2018
  e-mail: A01411985@itesm.mx
*/
#include <stdio.h>

void sequence(double *a, double *b) {
    double order;

    if(*a>*b) {
        order=*a;
        *a=*b;
        *b=order;
    }
}

int main() {
    //Declare the variables
    double num1;
    double num2;
    double num3;

    printf("Give me 3 numbers:  \n");
    scanf("%lf %lf %lf", &num1, &num2, &num3);
    
    //I ordered the values
    sequence(&num1, &num2);
    sequence(&num1, &num3);
    sequence(&num2, &num3);
    
    //Print the results
    printf("\nThe lowest value is: %lf", num1);
    printf("\nThe intermediate value is: %lf", num2);
    printf("\nThe highest value is: %lf", num3);
    
return 0;
}
