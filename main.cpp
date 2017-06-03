#include <iostream>

using namespace std;

int main()
{
    cout << "Welcome to my calculator \n";

/* What I want to create is an instruction-prompted, explanation-giving, multilingual calculator.
This will most likely be a learning aid for children/students.
This learning aid will enable the user to understand "why" the calculator gives them the answers to particular calculations.
E.g. 9 x 4 = 36 --> the code would be programmed to write something like: "The product of these numbers is 36 because
9 lots of 4 pieces equals 36 pieces in total". */

    cout << "Please choose a language \n"; //NB: Use array [Eng, Esp] to select

/* I want the user to have two options to click on, English and Spanish (Espanol).
If they click on English, I want the computer to use the code that I have assigned to/written in English (and vice versa).
E.g. if it's in English --> "Insert a number". If in Spanish --> "Introduzca un numero".
Must I create separate functions for the separate languages?
Is there an in-built translator that I could implement? */

// This part would be "cin", right? As the user would need to enter/click on English or Espanol.

    cout << "Select an operation (add, subtract, multiply, divide)" << endl;

// This part would be "cin", right? As the user would need to enter/click on their option.
// How would one implement physical calculator buttons?

    return 0;
}

// I've created 4 different functions for the 4 different mathematical operations, but is there an easier/better way to code this?


int add()
{
    int a;
    int b;
    int sum;

/* I want the user to not be restricted to just two numbers, but however many they want.
Just like on a calculator, if I want to I can type in 8+4+7+3+2. How can I program this?
(The same goes for the functions below)*/

    cout << "Enter a number \n";
    cin >> a;

    cout << "Enter another number \n";
    cin >> b;

    sum = a + b;
    cout << "The SUM of these numbers is " << sum << endl;

    return 0;
}

int subtr()
{
    int x;
    int y;
    int diff;

    cout << "Enter a number \n";
    cin >> x;

    cout << "Enter another number \n";
    cin >> y;

    diff = x - y;
    cout << "The answer is " << diff << endl;


    return 0;
}

int mult()
{
    int c;
    int d;
    int prod;

    cout << "Enter a number \n";
    cin >> c;

    cout << "Enter another number \n";
    cin >> d;

    prod = c * d;
    cout << "The answer is " << prod << endl;


    return 0;
}

int div()
{
    int s;
    int t;
    int slash;

    cout << "Enter a number \n";
    cin >> s;

    cout << "Enter another number \n";
    cin >> t;

    slash = s / t;
    cout << "The answer is " << slash << endl;


    return 0;
}
