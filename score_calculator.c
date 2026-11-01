//============================================
//STUDENT SCORE CALCULATOR -C VERSION
// This program asks for a student's name,course,and four
// test scores, then calculates and displays a report card.
//=============================================
#include<stdio.h>

// Include the standard input/output library. 
// This gives us access to printf (output) and fgets/scanf (input) #include <stdio.h>


// Include the string library.
// This gives us access to string functions like strcspn
#include <string.h>


// Define a constant for the maximum length of text strings
// In C, we cannot use 'string' like in C++, so we use char arrays.
#define MAX_LEN 100


// Define a constant for the maximum score. 
#define MAX_SCORE 100


// The main function-where the program starts running.
int main() {


//____________________________________________________________
// VARIABLE DECLARATIONS
// In C, text is stored in char arrays, not a 'string' type.
//____________________________________________________________


 char studentName[MAX_LEN];
 char course [MAX_LEN];
// Character array for name  char course[MAX_LEN];
// Character array for course   
 int score1, score2, score3, score4;
 int totalScore;
  
 double average;
 double percentage;
// Whole numbers - test scores  int totalScore;
// Whole number - sum of scores double average;
// Decimal number - average  double percentage;
// Decimal number - percentage  
//____________________________________________________________


//WELCOME BANNER
//printf displays text on the screen.
//\n means"new line" (like pressing Enter).
//____________________________________________________________


printf("============================================\n");
printf(" STUDENT SCORE CALCULATOR \n");
printf("============================================\n\n");

//____________________________________________________________
//INPUT: STUDENT NAME
//fgets reads a full line of text including spaces.
//It stores the result in the studentName array.
//MAX_LEN tells fgets the maximum characters to read.
//stdin means "standard input" (the keyboard).
//____________________________________________________________

printf("Enter student name: ");
fgets(studentName, MAX_LEN, stdin);


 // fgets includes the newline character at the end.  
 // We remove it by finding its position and replacing with '\0'.  
 // strcspn returns the index of the first '\n' in the string. 
 studentName[strcspn(studentName, "\n")] = '\0';
 
 
//____________________________________________________________
//INPUT: COURSE
//____________________________________________________________


 printf("Enter course (BBIT/BCS): "); 
 fgets(course, MAX_LEN, stdin); 
 course[strcspn(course, "\n")] = '\0'; 


 //____________________________________________________________
 //INPUT: TEST SCORES
 // scanf reads numbers. The & symbol gives the address of  
 // the variable so scanf knows where to store the value.  
 // %d is the format specifier for integers.

 //____________________________________________________________
 printf("Enter score for Test 1: "); 
 scanf("%d", &score1); 
  
 printf("Enter score for Test 2: "); 
 scanf("%d", &score2); 
  
 printf("Enter score for Test 3: "); 
 scanf("%d", &score3); 

 printf("Enter score for Test 4: ");
 scanf("%d", &score4);


 //____________________________________________________________
 //CALCULATIONS
 //____________________________________________________________

  totalScore = score1 + score2 + score3 + score4;
  // Add scores  average = totalScore / 4.0; 
  // Decimal division  percentage = (totalScore / 400.0) * 100; 
  // Percentage 

  // Calculate letter grade
  average = totalScore/4.0;         //Decimal division
  percentage = (totalScore/400.0) *100;   //Percentage

  char grade;

if (average >= 90) {
    grade = 'A';
}
else if (average >= 80) {
    grade = 'B';
}
else if (average >= 70) {
    grade = 'C';
}
else if (average >= 60) {
    grade = 'D';
}
else {
    grade = 'F';
}
  


  //____________________________________________________________
  //OUTPUT: REPORT CARD

   // %.2f formats a decimal number to 2 places. 
 // %s formats a string (char array). 
 // %d formats an integer. 
//_____________________________________________________________


 printf("\n"); 

 printf("===============================================\n");
 printf(" REPORT CARD\n"); 


printf("===============================================\n\n");

 printf("Student:      %s\n", studentName); 
 printf("Course:       %s\n", course); 
 printf("\n"); 
 printf("Test 1:       %d/%d\n", score1, MAX_SCORE); 
 printf("Test 2:       %d/%d\n", score2, MAX_SCORE); 
 printf("Test 3:       %d/%d\n", score3, MAX_SCORE);
 printf("Test 4:       %d/%d\n", score4, MAX_SCORE); 
 printf("Total:        %d/400\n", totalScore); 
 printf("Average:      %.2f\n", average); 
 printf("Percentage:   %.2f%%\n", percentage);
 printf("Grade:        %c\n", grade);
 printf("\n");


  // Determine pass or fail using an if statement. 
 if (percentage >= 50) { 
 printf("Result: PASS\n"); 
 } else {
printf("Result: FAIL\n"); 
 } 

 printf("====================================\n");

 // Return 0 to signal successful completion. 
 return 0; 
} 


 




