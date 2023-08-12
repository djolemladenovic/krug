#include <stdio.h>
int main()
{
float r, P, O;
printf("Uneti poluprecnik kruga:");
scanf_s("%f", &r);
P = r * r*3.14;
O = 2 * r*3.14;  
printf("Povrsina kruga je %.3f.", P);
printf("Obim kruga je %.3f.", O);
}
