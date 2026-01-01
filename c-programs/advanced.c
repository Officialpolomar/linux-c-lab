#include <stdio.h>
#include <string.h>
#include <stdio.h>

int main(){

// Arrays and Pointers
	int arr[3] = {1,2,3};
	int *ptr = arr;
	for (int i = 0; i < 3; i++){
		printf("%d\n", *(ptr + i));
	}

// Strings and Files
FILE *file = fopen("output.txt", "w");
fprintf(file, "Text");
fclose(file);


// Structures
struct Person {
	char name[50];
	int age;

	
};

struct Person p;
strcpy(p.name, "Alice");
p.age = 21; 
}


