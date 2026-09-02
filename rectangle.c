#include <stdio.h>
int main()
{
    float length, breadth, area;
    printf("enter the length breadth of the rectangle: ");
    scanf("%f %f", &length, &breadth);
    area = 3.14 * length * breadth;
    printf("area of the rectangle: %.2f\n", area);
    return 0;
}
