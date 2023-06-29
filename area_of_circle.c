#include <stdio.h>
#include <stdio.h>

float pi = 3.142;

int main() {

    float radius;

    /*print the and input the value of your radius of circle*/
    printf("Welcome to calculate the value of area of circle\n");
    /*Input the radius of the circle*/
    printf("Kindly enter the radius of the circle here:");
    scanf("%f", &radius);
     float area_of_circle;
     area_of_circle = pi * (radius * radius);    
     /*now print the result*/
     printf("The value of the area of the circle is: %.2f", area_of_circle);
    return 0;       
}     
    
