#include <stdio.h>
int main()
{
float r, P;
printf("Uneti poluprecnik kruga:");
scanf_s("%f", &r);
P = r * r*3.14;
printf("Povrsina kruga je %.3f.", P);
}