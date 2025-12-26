// Author: Bismah Farooq
// Description: Demonstrates recursion, user input, and basic control flow

#include <iostream>
#include <string>
using namespace std;
int fibo(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else
        return fibo(n-1) + fibo(n-2);
}
int main()
{
    string name;
    int number;
    
    cout << "what is your name? ";
    cin >> name;
    
    cout << "What is your favorite number? ";
    cin >> number;
    
    if (number % 2 == 0)
        cout << "Your number is even" << endl;
    else
        cout << "Your number is odd" << endl;
    
    cout << "Welcome to class " << name << endl;
    for (int i = 0; i <= 20; i++)
        cout << i << ":" << fibo(i) << endl;
    return 0;
}
