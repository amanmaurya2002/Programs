#include<stdio.h>

int main(void){
    printf("\nHello, World!\n\n");
    int a, b;
    printf("This is a program to add two integers.\n\n");
    printf("Enter first number: ");
    scanf("%i",&a);
    printf("Enter second number: ");
    scanf("%i",&b);
    printf("%i\n",a+b);
    return 0;
}