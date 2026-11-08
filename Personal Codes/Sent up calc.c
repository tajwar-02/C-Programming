#include <stdio.h>
#include <conio.h>

int main () {
printf("This is a program to calculate NDC Sent Up II marks \n \n");
int a,b,c;
printf("Enter Round 1 quiz marks: ");
scanf("%d",&a);
printf("Enter Round 2 quiz marks: ");
scanf("%d",&b);
printf("Enter Round 3 quiz marks: ");
scanf("%d",&c);

float quiz=(float)(a+b+c)*33/300;

int d,e;
printf("Enter Sent up II marks (out of 75): ");
scanf("%d",&d);
printf("Enter practical marks (out of 25): ");
scanf("%d",&e);

float s_up=(float)(d+e)*67/100;

float total_marks= s_up+quiz;

printf("Total Marks is %.2f \n \n",total_marks);

if (total_marks>=80){
    printf("Congratulations! You got A+");
}
else if (total_marks>=70){
    printf("You got A");
}
else if (total_marks>=60){
    printf("You got A-");
}
else if (total_marks>=50){
    printf("You got B");
}
else if (total_marks>=40){
    printf("You got C");
}
else if (total_marks>=33){
    printf("You barely passed and got D");
}
else {
    printf("You failed mf");
}
getch();
return 0;
}
