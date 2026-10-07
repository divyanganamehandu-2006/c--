#include<iostream>
using namespace std;
int main()
{
    int day, month, year;
    int daysInMonth;

    cout<<"Enter Day: ";
    cin>>day;

    cout<<"Enter Month: ";
    cin>>month;

    cout<<"Enter Year: ";
    cin>>year;

    // Check Leap Year
    if((year%400==0) || (year%4==0 && year%100!=0))
        daysInMonth=29;
    else
        daysInMonth=28;

    // Find number of days in month
    if(month==1 || month==3 || month==5 || month==7 ||
       month==8 || month==10 || month==12)
        daysInMonth=31;
    else if(month==4 || month==6 || month==9 || month==11)
        daysInMonth=30;

    // Validate Date
    if(month<1 || month>12 || day<1 || day>daysInMonth)
    {
        cout<<"Invalid Date!";
        
        return 0;
    }

    // Calculate Next Date
    day++;

    if(day>daysInMonth)
    {
        day=1;
        month++;

        if(month>12)
        {
            month=1;
            year++;
        }
    }

    cout<<"\nNext Date is: "<<day<<"/"<<month<<"/"<<year;

    
    return 0;
}