#include <stdio.h>
int main () 
{
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++) {
        for (int j=1;j<n-i;j++) {
            printf(" ");

        }
        for (int k=0;k<=i;k++) {
            printf("*");
        }
        for (int f=0;f<i;f++) {
            printf("*");
        }
       /*for (int m=1;m<n-i;m++) {
            printf(" ");
       }*/
        printf("\n");
    }
    return 0;
}
