#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

int main() {
    string operation;                                                                                                   // initialization
    string n1="";
    string n2="";
    double out;
    double num1;
    double num2;
    int nu1=0;
    int nu2=0;
    int i=0;
    int j=0;
    stringstream ss;

    string numbers[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    cout << "Enter an operation (+,-,*,/,plus,minus,mul,div) followed by two digits separated by a space: " << endl;
    cin >> operation >> n1 >> n2;

    transform(operation.begin(),operation.end(),operation.begin(), ::tolower);                                          // put inputs to lowercase
    transform(n1.begin(),n1.end(),n1.begin(), ::tolower);
    transform(n2.begin(),n2.end(),n2.begin(), ::tolower);

    while(i<10)                                                                                                         // converts strings to numbers
    {
        if(numbers[i]==n1)
        {
            nu1=i;
            num1 = (double) nu1;
            i=823;
        }else
        {
            i++;
        }
    }

    while(j<10)
    {
        if(numbers[j]==n2)
        {
            nu2=j;
            num2 = (double) nu2;
            j=823;
        }else
        {
            j++;
        }
    }

    if(i!=823)                                                                                                          // If the number isnt written out, turns the string itself into an integer
    {
        ss << n1;
        ss >> nu1;
        num1 = (double) nu1;
    }

    ss.str("");
    ss.clear();

    if(j!=823)
    {
        ss << n2;
        ss >> nu2;
        num2 = (double) nu2;
    }

    if(operation=="plus" || operation=="+")
    {
        out=num1+num2;
        operation = " sum of ";
    }
    else if(operation=="minus" || operation=="-")
    {
        out=num1-num2;
        operation = " difference between ";
    }
    else if(operation=="mul" || operation=="*")
    {
        out=num1*num2;
        operation = " product of ";
    }
    else if(operation=="div" || operation=="/")
    {
        out=num1/num2;
        operation = " quotient of ";
    }
    cout << "The" << operation << nu1 << " and " << nu2 << " is " << out << "." << endl;

    return 0;
}
