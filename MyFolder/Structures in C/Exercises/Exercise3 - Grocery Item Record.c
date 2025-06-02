/* 
item name = char
quantity = int
price per piece = int
total cost = quantity x price 
*/

#include <stdio.h>

struct groceryitem {
	
	char name [50];
	int quantity;
	int price;
	

};


int main () {
	
	struct groceryitem groceryitem;
	
	printf ("Welcome to Robinon's Supermarket!\n");
	
	printf ("Enter Item Name: ");
	fgets (groceryitem.name, sizeof (groceryitem.name), stdin);
	
	printf ("Quantity: ");
	scanf ("%d", &groceryitem.quantity);
	
	printf ("Price: ");
	scanf ("%d", &groceryitem.price);
	
//displaying the total cost of the item
	
	int total;

	total = groceryitem.quantity * groceryitem.price;
	
	printf ("\n");
	
	printf ("The Total Cost of %d %s is %d", groceryitem.quantity, groceryitem.name, total);
	
	return 0;
	
}