#include <stdio.h>
void Circle(float koordx, float koordy, float radius)
{
    float P, S;
    P = 2 * 3.14 * radius;
    S = 3.14 * radius * radius;
    printf("Perimeter=%f \nArea=%f\n", P, S);
}
int main()
{
    float x, y, R;
    printf("Input x, y, radius:");
    scanf("%f %f %f", &x, &y, &R);
    Circle(x, y, R);
    return 0;
}
