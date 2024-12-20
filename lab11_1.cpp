#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    cout << "Press Enter 3 times to reveal your future." << endl;

    cin.get();
    cin.get();
    cin.get();

    srand(time(0));

    const char* grades[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};

    cout << "You will get " << grades[rand() % 9] << " in this 261102." << endl;

    return 0;
}
