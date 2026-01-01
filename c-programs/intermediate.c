#include <stdio.h>


int add(int a, int b){
return a + b;
}

int main(){

int num;
// Part 1: Conditinals 
printf("Input a number: ");
scanf("%d", &num);
if (num > 0) {

printf("Positive\n");
}
else {
printf("Zero or negative\n");
}

// Part 2: Loops

for(int i = 1; i <= 5; i++){
	printf("%d\n", i);
}

// Part 3: Functions
printf("%d\n", add(10,4));

}
