#include<iostream>
using namespace std;

int main() {
    int age = 25;
    cout << "Age: " << age << endl;

    char grade = 'A';
    cout << "Grade: " << grade << endl;

    float pieValue = 3.14f; // f shows it's a float variable.
    cout << "Pie value: " << pieValue << endl;

    bool isSafe = true; // prints 1 for true, 0 for false.
    cout << "Is Safe: " << isSafe << endl;
   
    double price = 100.99; // Any numbers default data-type is double.
    cout << "Price: " << price << endl;


    cout << "\n";

    // sizeof func: Prints the size of any value in bytes.
    cout << "Size of int variable in bytes is " << sizeof(age) << endl;
    cout << "Size of char variable in byte is " << sizeof(grade) << endl;
    cout << "Size of float variable in byte is " << sizeof(pieValue) << endl;
    cout << "Size of bool variable in byte is " << sizeof(isSafe) << endl;
    cout << "Size of double variable in byte is " << sizeof(price) << endl;


    return 0;
}