#include <iostream>
#include <string>
using namespace std;

int main(){
    string name, country, goal;
    int age;

    cout<< "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cout<< "Enter your country: ";
    cin>> country;

    cin.ignore();

    cout<< "Enter your goal: ";
    getline(cin, goal);

    cout<<"===== My Profile =====\n";
    cout<<"    Name: "<< name << endl;
    cout<<"    Age: "<< age << endl;
    cout<<"    Country: "<< country << endl;
    cout<<"    Goal: "<< goal << endl;

    return 0;
}