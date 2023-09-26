#include <iostream>

using namespace std;

// Public Variables
int operatorChosen;
int seriesChosen;

// Prompt Components
string operatorChosenPrompt = "Choose a Number \n \n (1) Addition \n (2) Subtraction \n (3) Multiplication \n (4) Division \n \n";
string seriesChosenPrompt = "How many series of numbers? ";
string input = "Input: ";
string totalPrompt = "Total: ";
string invalid = "Invalid inputs \n \n";
string divisionPrompt = "Cannot be divided by 0 \n \n";


// Function to calculate the Input of the user
void calculator(int operate, int series) {

    // Private variable
    double userInput;
    double total = 0;

    // Calculating the user Input base on Chosen Operator and Series
    for (int i = 1; i <= series; i++) {

        cout << "(" << i << ") ";
        cin >> userInput;

        switch(operate) {
        case 1:
            total += userInput;
            break;
        case 2:
            if (i == 1) {
                total = userInput;
            }
            else {
                total -= userInput;
            }
            break;
        case 3:
            if (i == 1) {
                total = userInput;
            }
            else {
                total *= userInput;
            }
            break;
        case 4:
            if (i == 1) {
                total = userInput;
            }
            else {
                if (userInput != 0) {
                    total /= userInput;
                }
                else {
                    cout << divisionPrompt;
                    return;
                }
            }
            break;
        default:
            cout << invalid;
            return;
        }

        cout << totalPrompt << total;
        cout << "\n \n";

    }
}

int main()
{
    // Looping the Statement
    while(true) {

        // To get the operator
        cout << operatorChosenPrompt;
        cout << input;
        cin >> operatorChosen;

        // To get the series of number
        cout << seriesChosenPrompt;
        cin >> seriesChosen;
        cout << "\n";

        calculator(operatorChosen, seriesChosen);

    }


    return 0;
}
