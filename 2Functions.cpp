#include <bits/stdc++.h>
using namespace std;

//Functions are set of code which performs something for you
//Functions are used to modularise your code
//Functions are used to increase readability
//Functions are used to use same code multiple times


//Types of functions
//void - which doesn't return anything
//return 
//parameterised functions
//non-parameterised functions



// void function and non-parameterised function;
    // void userName(){
    //     cout << "Hello, User!" << endl;
    // } 

    // int main(){
    //     userName();
    // }




//parameterised functions
    // void displayMessage(string name){
    //     cout << "Hello, " << name << "!" << endl;
    // }

    // int main(){
    //     // displayMessage("Prince");
    //     // displayMessage("Ravi");

    //     //taking user input
    //     string user;
    //     cout << "Enter your name: ";
    //     getline(cin, user);
    //     displayMessage(user);

    //     string user2;
    //     cout << "Enter your second name: ";
    //     getline(cin, user2);
    //     displayMessage(user2);



//return functions
    // int sum(int i, int j){
    //     return i + j;
    // }

    // int main(){
    //     int a, b;
    //     cin >> a >> b;
    //     int result = sum(a, b);
    //     cout << "Sum: " << result << endl;
    //     return 0;
    // }




//inbuilt functions
    // int main(){
    //     int a, b, c, d, e;
    //     cout << "Enter five numbers: ";
    //     cin >> a >> b >> c >> d >> e;
    //     int maxNum = max(a, max(b, max(c, max(d, e))));           //Finding maximum of all numbers
    //     cout << "Maximum: " << maxNum << endl;
    // }



// Function to demonstrate pass by value
    // int doSomething(int x) {
    //     x += 5;
    //     cout << x << endl;

    //     x += 5;
    //     cout << x << endl;

    //     // Since x is a copy of the passed argument,
    //     // any changes to x do not affect the original variable.
    // }

    // int main() {
    //     int a = 10;

    //     cout << a << endl;

    //     // Call the function doSomething and pass a as an argument
    //     doSomething(a);

    //     // Print the value of a after the function call
    //     // The value remains 10 because a was passed by value.
    //     // The function received a copy of a, and changes were made
    //     // to the copy, not the original variable a.
    //     cout << a << endl;

    //     return 0;
    // }




// Function to demonstrate pass by reference(arrays are pass by reference only)
void doSomething(int &x) {
    x += 5;
    cout << x << endl;

    x += 5;
    cout << x << endl;

    // Since x is a reference to the original variable,
    // changes made to x will reflect on the original variable.
}

int main() {
        int a = 10;

    // Print the initial value of a
    cout << a << endl;

    // Call the function doSomething and pass a as an argument by reference
    doSomething(a);

    // Print the value of a after the function call
    // The value of a will be updated because it was passed by reference.
    cout << a << endl;

    return 0;
}
