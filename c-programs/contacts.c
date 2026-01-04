#include <stdio.h>
#include <stdbool.h>
struct Contact {
	char name[30];
	char phone_number[12];
};

void add_contact(struct Contact *contacts, struct Contact new_contact){

//loop through contacts until empty slot is found and replace with "new_contact" struct

for(int i = 0; i < 10; i++){
	if(contacts[i].name[0] == '\0' && contacts[i].phone_number[0] == '\0'){
		contacts[i] = new_contact;
		printf("contact added!");
		return;
	}
}

printf("contact list full, cannot added more contacts");

}

void print_contacts(struct Contact *contacts, int contact_list_size){

	for(int i = 0; i < contact_list_size; i++){
		printf("Name: %s\n Phone_Number: %s\n", contacts[i].name, contacts[i].phone_number);
	} 
}



int main(){

struct Contact contacts[10] = {0};

bool quit_menu = false;
int menu_selection;

while (!quit_menu) {

printf("Choose from the menu below:\n 1) Add contact \n 2) delete contact \n 3) print contact list \n 4) quit menu");
printf("\n select a number: ");
scanf("%d", &menu_selection);

switch(menu_selection){
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		printf("Program has ended");
		quit_menu = true;
		break;
}


}

}


