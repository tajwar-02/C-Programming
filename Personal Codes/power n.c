#include <stdio.h>
#include <math.h>
#include <conio.h>
int main () {
printf("This is a program to find the nth power of a number \n \n");
float a,b;
printf("Enter base: ");
scanf("%f",&a);
printf("Enter exponent: ");
scanf("%f",&b);

float ans= pow(a,b);
printf("%.2f",ans);


getch ();
return 0;


}


