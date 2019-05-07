#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
void Circle(float koordx, float koordy, float radius)
{
    float P, S;
    P = 2 * 3.14 * radius;
    S = 3.14 * radius * radius;
    printf("Perimeter=%f \nArea=%f\n", P, S);
}
void Triangle(float length1, float length2, float length3)
{
	float P, S;
	P = length1+length2+length3;
	float p = P/2;
	S = sqrt(p*(p-length1)*(p-length2)*(p-length3));
	printf("Perimeter=%f \nArea=%f\n", P, S);
}
int main()
{
    char figure[16];
    printf("Input figure:");
    scanf("%s",figure);
    if (strcmp (figure, "circle")==0)
    
    Circle(1.2,2,4.3);
    	
    else if (strcmp (figure, "triangle")==0)
    	
    Triangle(2.05,1.5,3);
	      
	else printf("No such figure");
	
	
    return 0;
}
