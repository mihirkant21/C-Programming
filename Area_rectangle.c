#include <stdio.h>

int main(){
    float length,breath,area;
    printf("Enter length of rectangle");
    scanf("%f",&length);
    printf("Enter breath of rectangle");
    scanf("%f",&breath);
    area=length*breath;
    printf("Area of Rectangle %f",area);
    return 0;
}