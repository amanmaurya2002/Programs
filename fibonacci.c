#include<stdio.h>

void fibonacci(int i1, int i2, int n);

int main(void){
	printf("This programs prints fibonacci sequence up to a given index.\n\n);
printf("Hello, World!\n");
int n;
do{
	printf("Enter the number( > 2) of numbers in the fibonacci sequence you want: ");
	scanf("%i", &n);
}while(n < 3);
printf("0 1 ");
fibonacci(0, 1, n - 2);
printf("\n");
}

//a recursive function for fibonacci sequence
void fibonacci(int i1, int i2, int n){
int i = i1 + i2;
i1 = i2;
i2 = i;
printf("%i ", i);
if(n > 1){
	fibonacci(i1, i2, n-1);
	}
}
