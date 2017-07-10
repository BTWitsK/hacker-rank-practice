//
//  Strings.cpp
//  Hacker Rank Practice
//
//  Input Format
//  You are given two strings, a and b, separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').
//
//  Output Format
//
// In the first line print two space-separated integers, representing the length of a and b respectively.
//
// In the second line print the string produced by concatenating a and b (a+b).
//
// In the third line print two strings separated by a space,a'  and b'. a' and b' are the same as a and b, respectively, except that their first characters are swapped.
//
//  Created by BTWitsK on 6/25/17.
//  Copyright © 2017 K. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string FirstString, SecondString;
    
//get strings from input
    
    cin >> FirstString >> SecondString;
    
//get string size and concatenate strings
    auto FirstStringSize = FirstString.size();
    auto SecondStringSize = SecondString.size();
    string ComboString = FirstString + SecondString;
    
//display string size and concatenated strings
    cout << FirstStringSize << " " << SecondStringSize;
    cout << endl << ComboString << endl;
    
//swap first character from each string
    char SwapOne = FirstString[0];
    char SwapTwo = SecondString[0];
    
    FirstString[0] = SwapTwo;
    SecondString[0] = SwapOne;
    
//display strings after first character has been swapped
    cout << FirstString << " " << SecondString;
    return 0;
}

