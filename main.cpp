#include <iostream>
using namespace std;

void menu(){
    cout<< "Welcome to the temperature converter. To where would you like to convert to?"<<endl;
    cout<< "\n1. Celsius to Fahrenheit \n2. Fahrenheit to Celsius"<<endl;
}

void menu2(){
    cout<< "\nEnter your temperature in Fahrenheit here"<<endl;
}

void menu3() {
    cout<< "\nEnter your temperature in Celsius here."<<endl;
}

double celsius(double number){
    double result = (number - 32) / 1.8;
    return result;
}

double fahrenheit(double number){
    double result = (number * 1.8) + 32;
    return result;
}

int main() {
    int choice, input;

    menu();
    cout<< "Option: ";
    cin>>choice;

    if (choice == 1){
        menu3();
        cout<< "Temp: ";
        cin>>input;
        cout<< "\nThe temperature is "<< fahrenheit(input)<< " degrees F"<<endl;
    } else if (choice == 2){
        menu2();
        cout<< "Temp: ";
        cin>>input;
        cout<< "\nThe temperature is "<< celsius(input)<< " degrees Celsius"<<endl;
    } else {
        cout<< "\nOption is invalid. Please try running this again."<<endl;
    }

    return 0;
}
