#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Initial message
    cout << "Press Enter 3 times to reveal your future." << endl;

    // Wait for the user to press Enter 3 times
    cin.get();
    cin.get();
    cin.get();

    // Seed the random number generator
    srand(time(0));

    // List of possible grades
    const char* grades[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};

    // Display the fortune
    cout << "You will get " << grades[rand() % 9] << " in this 261102." << endl;

    return 0;
}
