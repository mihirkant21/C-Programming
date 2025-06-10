#include <stdio.h>
void main(){
    float base,height,area;
    printf("Enter base of Triangle :");
    scanf("%f",&base);
    printf("Enter height of the Triangle:");
    scanf("%f",&height);
    area=0.5*base*height;
    printf("The area of the Triangle is: %f\n", area);
    return 0;
}