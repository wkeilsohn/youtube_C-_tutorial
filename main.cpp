#include <iostream>

using namespace std;

int main()
{
    int numDay;
    cout<< "Please enter a weekday number: ";
    cin >> numDay;
    string dayName;

    switch(numDay) {
    case 0:
        dayName = "Sunday";
        break;
    case 1:
        dayName = "Monday";
        break;
    case 2:
        dayName = "Tuesday";
        break;
    case 3:
        dayName = "Wednesday";
        break;
    case 4:
        dayName = "Thursday";
        break;
    case 5:
        dayName = "Friday";
        break;
    case 6:
        dayName = "Saturday";
        break;
    case 7:
        dayName = "Caturday!";
        break;
    default:
        dayName = "Invalid day of the week.";
    }
    cout << "The day of the week is: "<< dayName;

    return 0;
}
