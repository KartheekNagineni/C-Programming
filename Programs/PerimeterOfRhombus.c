#include <stdio.h>
float rhombusPerimeter(float side)
{
    return 4*side;
}
int main()
{
    float rmside,rmperimeter;
    printf("Enter the Rhombus Side=");
    scanf("%f",&rmside);
    rmperimeter=rhombusPerimeter(rmside);
    printf("The Perimeter of a Rhombus=%.3f\n",rmperimeter);
    return 0;
}