/* pet record system
name
type of pet
age 
*/

#include <stdio.h>

struct pet {
	
	char name [50];
	char type [50];
	int age;
	
};


int main(){
	
	struct pet pet;
	
	printf ("Hello! Welcome to Hungry Paws!\n");
	printf ("Please Enter the Details of your Pet\n");
	
	printf ("Name: ");
	fgets (pet.name, sizeof (pet.name), stdin);
	
	printf ("Type (Dog, Cat, Etc.): ");
	fgets (pet.type, sizeof (pet.type), stdin);
	
	printf ("Age: ");
	scanf ("%d", &pet.age);
	
//displaying the details

	printf ("\n");
	
	printf ("Here are the Details of your Pet:\n");
	
	printf ("Name: %s", pet.name);
	printf ("Type: %s", pet.type);
	printf ("Age: %d years old", pet.age);
	
	return 0;
	
} 