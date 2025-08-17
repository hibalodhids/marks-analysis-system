#include <iostream>
using namespace std;

int main() {
    const int SUBJECTS = 5;
    int marks[SUBJECTS];
    int sum = 0, highest = 0, lowest = 100;
    float average;
    char grade;

    // Input marks
    cout << "--- STUDENT GRADE ANALYZER ---\n";
    for (int i = 0; i < SUBJECTS; i++) {
        do {
            cout << "Enter marks for subject " << i + 1 << " (0-100): ";
            cin >> marks[i];
            if (marks[i] < 0 || marks[i] > 100)
                cout << "Invalid input! Please enter marks between 0 and 100.\n";
        } while (marks[i] < 0 || marks[i] > 100);

        sum += marks[i];

        if (marks[i] > highest)
            highest = marks[i];
        if (marks[i] < lowest)
            lowest = marks[i];
    }

    average = static_cast<float>(sum) / SUBJECTS;

    
    if (average >= 90)
        grade = 'A';
    else if (average >= 80)
        grade = 'B';
    else if (average >= 70)
        grade = 'C';
    else if (average >= 60)
        grade = 'D';
    else
        grade = 'F';

    // Display results
    cout << "\n--- RESULT ---\n";
    cout << "Average Marks: " << average << endl;
    cout << "Highest Marks: " << highest << endl;
    cout << "Lowest Marks: " << lowest << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
