#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {


 // ============================================================
// VARIABLE DECLARATIONS
// Each variable is a storage box with a specific data type.
// ============================================================


string studentName; // Text - stores the student's name
string course; // Text - stores the course (BBIT/BCS)

int score1, score2, score3, score4;; // Whole numbers - test scores
int totalScore; // Whole number - sum of scores

double average; // Decimal number - average score
double percentage; // Decimal number - percentage


// ============================================================
// CONSTANT DECLARATION
// A constant cannot be changed during program execution.
// ============================================================

const int MAX_SCORE = 100; // Maximum possible score per test


// ============================================================
// WELCOME BANNER
// cout displays text on the screen.
// endl moves to a new line.
// ============================================================

cout << "========================================" << endl;
cout << " STUDENT SCORE CALCULATOR" << endl;
cout << "========================================" << endl;
cout << endl;


// ============================================================
// QUESTION 1: STUDENT NAME
// ============================================================

cout << "Enter student name: ";
getline(cin, studentName); // Reads the full line (including spaces)


// ============================================================
// QUESTION 2: COURSE
// ============================================================

cout << "Enter course (BBIT/BCS): ";
getline(cin, course);


// ============================================================
// QUESTION 3: TEST SCORES
// cin >> reads numbers and stores them in int variables.
// ============================================================

cout << "Enter score for Test 1: ";
cin >> score1;


cout << "Enter score for Test 2: ";
cin >> score2;


cout << "Enter score for Test 3: ";
cin >> score3;


cout << "Enter score for Test 4: ";
cin >> score4;


// Calculate average
average = (score1 + score2 + score3 + score4) / 4.0;

// Calculate letter grade
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

cout << "Average: " << average << endl;
cout << "Grade: " << grade << endl;



// ============================================================
// CALCULATION 1: TOTAL SCORE
// The + operator adds the four scores.
// The = operator assigns the result to totalScore.
// ============================================================


totalScore = score1 + score2 + score3 + score4;


// ============================================================
// CALCULATION 2: AVERAGE
// The / operator divides totalScore by 4.
// We use 4.0 (double) to get decimal division.
// If we used 4 (int), the result would be truncated.
// ============================================================

average = totalScore / 4.0;


// ============================================================
// CALCULATION 3: PERCENTAGE
// Formula: (totalScore / maximumPossible) * 100
// maximumPossible = 4 tests × 100 marks = 400
// ============================================================


percentage = (totalScore / 400.0) * 100;


// ============================================================
// DISPLAY REPORT CARD
// fixed << setprecision(2) formats decimals to 2 places.
// ============================================================


cout << endl;
cout << "========================================" << endl;
cout << " REPORT CARD"            << endl;
cout << "========================================" << endl;
cout << endl;

cout << "Student:      " << studentName << endl;
cout << "Course:       " << course << endl;
cout << endl;
cout << "Test 1:       " << score1 << "/" << MAX_SCORE << endl;
cout << "Test 2:       " << score2 << "/" << MAX_SCORE << endl;
cout << "Test 3:       " << score3 << "/" << MAX_SCORE << endl;
cout << "Test 4:       " << score4 << "/" << MAX_SCORE << endl;
cout << "Total:       " << totalScore << "/400" << endl;
cout << "Average:      " << fixed << setprecision(2) << average << endl;
cout << "Grade:     " << fixed << setprecision(2) << grade << endl;

cout << "=============================================" << endl;
cout << endl;

cout << "=============================================" << endl;
cout << "STUDENT SCORE REPORT" << endl;
cout << "=============================================" << endl;

// Determine pass or fail
if (percentage >= 50) {
    cout << "Result: PASS" << endl;
} else {
    cout << "Result: FAIL" << endl;
}
    cout << "========================================" << endl;

return 0;
}