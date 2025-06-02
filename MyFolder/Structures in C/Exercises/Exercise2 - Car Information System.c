//brand = char 
//model = char
//year = int
//price = int

#include <stdio.h>

struct car {
	
	char brand [50];
	char model [50];
	int year;
	int price;
	
};

int main (){
	
	struct car car;
	
	printf ("Welcome to the Dealership! What Kind of Car are you Looking for?\n");

	printf ("Brand: ");
	fgets (car.brand, sizeof (car.brand), stdin);
	
	printf ("Model: ");
	fgets (car.model, sizeof (car.model), stdin);
		
	printf ("Year: ");
	scanf ("%d", &car.year);
	
	printf ("Price: ");
	scanf ("%d", &car.price);
	
	
//displaying the details

	printf ("\n");
	printf ("Is this the car that you're looking for?\n");
	
	printf ("Brand: %s", car.brand);
	printf ("Model: %s", car.model);
	printf ("Year: %d\n", car.year);
	printf ("Price: P%d\n", car.price);
	
	printf ("\n");
	printf ("Sit Tight! We'll look for one Right away just for you!");
	
	
	return 0;
	
	
}