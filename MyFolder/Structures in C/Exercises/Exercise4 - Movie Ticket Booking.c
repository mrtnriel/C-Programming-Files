/* manage movie ticket info
title = char
seat number = int
ticket price = int
*/


#include <stdio.h>


struct movie {
	
	char title[50];
	int seat;
	int price;
	
};

int main (){
	
	struct movie movie;
	
	printf ("Good Evening! Welcome to SM Cinemas!\n");
	printf ("What Movie Are You Interested in Watching Today?\n");
	printf ("\n");
	
	printf ("Enter the Title of The Movie: ");
	fgets (movie.title, sizeof(movie.title), stdin);
	
	printf ("Enter the Seat Number: ");
	scanf ("%d", &movie.seat);
	
	printf ("Ticket Price: ");
	scanf ("%d", &movie.price);
	
	
//displaying the details

	printf ("\n");
	printf ("Here are the Details of your Purchase:\n");
	printf ("\n");
	
	printf ("Movie Title: %s", movie.title);
	printf ("Seat Number: %d\n", movie.seat);
	printf ("Price: P%d\n", movie.price);
	
	printf ("\n Thank You for Purchasing! Please Enjoy the Show!");
	
	return 0;
	
}