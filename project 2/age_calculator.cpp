#include <iostream>
using namespace std;

int main(){
    int birthyear, birthmonth, birthdate;
    int currentyear, currentmonth, currentdate;

    // Input Date of birth
    cout<< "Enter your Date-Of-Birth(Year Month Date): ";
    cin>> birthyear >> birthmonth >> birthdate;
    
    // Input Current date
    cout<< "Enter Current date(Year Month Date): ";
    cin>> currentyear >> currentmonth >> currentdate;

    // Calculation
    int Year = currentyear - birthyear;
    int Month = currentmonth - birthmonth;
    int Day = currentdate - birthdate;

    // IF date are negative, borrow from the previous month
    if (Day < 0){
        Month--;
        Day += 30;
    }
    
    // IF month are negative, borrow from the previous month
    if (Month < 0){
        Year--;
        Month += 12;
    }

    cout<< "Age: " << Year << " Years, " << Month << " Months, " << Day << " Days, " << endl;
    return 0 ;

}