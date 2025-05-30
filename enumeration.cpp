#include <iostream>
using namespace std;

enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    int dayInput;

    cout << "Enter a number (0 for Sunday, 1 for Monday, ..., 6 for Saturday): ";
    cin >> dayInput;

    if (dayInput < 0 || dayInput > 6) {
        cout << "Invalid day number. Please enter a number between 0 and 6." << endl;
        return 1;
    }

    Day today = static_cast<Day>(dayInput);

    switch (today) {
        case SUNDAY:
            cout << "It's Sunday!" << endl;
            break;
        case MONDAY:
            cout << "It's Monday!" << endl;
            break;
        case TUESDAY:
            cout << "It's Tuesday!" << endl;
            break;
        case WEDNESDAY:
            cout << "It's Wednesday!" << endl;
            break;
        case THURSDAY:
            cout << "It's Thursday!" << endl;
            break;
        case FRIDAY:
            cout << "It's Friday!" << endl;
            break;
        case SATURDAY:
            cout << "It's Saturday!" << endl;
            break;
    }

    return 0;
}

