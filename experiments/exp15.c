#include <stdio.h>
void circle(float, float *, float *);
void main()
{
    float r, a, p;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    circle(r, &a, &p);
    printf("Area of the circle: %.2f square units\n", a);
    printf("Perimeter of the circle: %.2f units\n", p);
}


void circle(float radius, float *area, float *perimeter)
{
    *area = 3.14 * radius * radius;
    *perimeter = 2 * 3.14 * radius;
}