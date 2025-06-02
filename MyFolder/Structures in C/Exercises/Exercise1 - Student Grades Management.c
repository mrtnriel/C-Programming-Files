//student
//name = char
//course = char
//quiz scores = int array

#include <stdio.h>

struct Student {
	
	char name [50];
	char course [50];
	int scores [3];
	
};

int main (){
	
    struct Student student; 
    
    printf ("Enter Student Information: \n");
    printf ("\n");
	
	printf ("Enter Student's Name: ");
    fgets(student.name, sizeof(student.name), stdin);

	printf ("Enter Student's Course: ");
    fgets(student.course, sizeof(student.course), stdin);
    
    printf ("\n");
	
	printf ("Enter Student's Grades:\n");
	
	printf ("Math: ");
	scanf ("%d", &student.scores[0]);
	
	printf ("Science: ");
	scanf ("%d", &student.scores[1]);
	
	printf ("English: ");
	scanf ("%d", &student.scores[2]);
	
//displaying the input

	printf ("\n");
	printf ("Student Information: \n");
	printf ("\n");
	
    printf("Name: %s", student.name);
    printf("Course: %s", student.course);
    
        printf ("\n");
    
    printf ("Student's Grades:\n");
    

    printf ("Math: %d\n", student.scores[0]);
    printf ("Science: %d\n", student.scores[1]);
    printf ("English: %d\n", student.scores[2]);  	
    
    
//compute the average 

	int sum;
	int average;
	
	for (int i = 0; i < 3; i++){
		sum += student.scores[i];
	}
	
	average = sum / 3;
	
	printf ("The Average of %s's Grades is: %d", student.name, average);
    
	return 0;
	
} 