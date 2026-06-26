//quiz application
#include <iostream>
using namespace std;

int main() {
    int score = 0;
    char answer;

    cout << "Welcome to the Quiz!" << endl;
    cout << "Question 1: What is the capital of France?" << endl;
    cout << "A) London B) Berlin C) Paris D) Madrid" << endl;
    cout << "Enter your answer (A/B/C/D): ";
    cin >> answer;

    if (answer == 'C' || answer == 'c') {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

    cout << "Question 2: What is 2 + 2?" << endl;
    cout << "A) 3 B) 4 C) 5 D) 6" << endl;
    cout << "Enter your answer (A/B/C/D): ";
    cin >> answer;

    if (answer == 'B' || answer == 'b') {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect!" << endl;
    }

    cout << "Your final score is: " << score << "/2" << endl;
    return 0;
}