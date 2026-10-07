#include <iostream>
#include <limits>
using namespace std;

// Function to check leap year
bool isLeapYear(int year)
{
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

// Function to get number of days in a month
int daysInMonth(int month, int year)
{
    switch(month)
    {
        case 1: case 3: case 5: case 7:
        case 8: case 10: case 12:
            return 31;

        case 4: case 6: case 9: case 11:
            return 30;

        case 2:
            return isLeapYear(year) ? 29 : 28;
    }
    return 0;
}

// Function to find day of week
string dayOfWeek(int d, int m, int y)
{
    if(m == 1)
    {
        m = 13;
        y--;
    }
    else if(m == 2)
    {
        m = 14;
        y--;
    }

    int k = y % 100;
    int j = y / 100;

    int h = (d + (13 * (m + 1)) / 5 + k + (k / 4) + (j / 4) + (5 * j)) % 7;

    switch(h)
    {
        case 0: return "Saturday";
        case 1: return "Sunday";
        case 2: return "Monday";
        case 3: return "Tuesday";
        case 4: return "Wednesday";
        case 5: return "Thursday";
        case 6: return "Friday";
    }

    return "";
}

int main()
{
    int day, month, year;

    // Input Day
    while(true)
    {
        cout << "Enter Date: ";
        cin >> day;

        if(cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! Enter numbers only.\n";
        }
        else
            break;
    }

    // Input Month
    while(true)
    {
        cout << "Enter Month: ";
        cin >> month;

        if(cin.fail() || month < 1 || month > 12)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid Month! Enter between 1 and 12.\n";
        }
        else
            break;
    }

    // Input Year
    while(true)
    {
        cout << "Enter Year: ";
        cin >> year;

        if(cin.fail() || year <= 0)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid Year! Enter a positive number.\n";
        }
        else
            break;
    }

    // Validate Day
    int maxDays = daysInMonth(month, year);

    while(day < 1 || day > maxDays)
    {
        cout << "Invalid Day! This month has only "
             << maxDays << " days.\n";

        cout << "Enter Date Again: ";
        cin >> day;

        if(cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            day = -1;
        }
    }

    // Calculate Next Date
    int nd = day;
    int nm = month;
    int ny = year;

    nd++;

    if(nd > maxDays)
    {
        nd = 1;
        nm++;

        if(nm > 12)
        {
            nm = 1;
            ny++;
        }
    }

    cout << "\nCurrent Date : "
         << day << "/" << month << "/" << year;

    cout << "\nDay          : "
         << dayOfWeek(day, month, year);

    cout << "\nNext Date    : "
         << nd << "/" << nm << "/" << ny;

    cout << "\nNext Day     : "
         << dayOfWeek(nd, nm, ny);

    return 0;
}