#include <stdio.h>

int main(){
    float radius,area;
    printf("Enter radius of the circle:");
    scanf("%f",&radius);
    area=2*3.14*radius*radius;
    printf("Area of Circle : %f",area);

    return 0;
}