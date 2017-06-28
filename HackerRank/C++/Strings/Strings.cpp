//
//  Strings.cpp
//  Hacker Rank Practice
//
//  Created by BTWitsK on 6/25/17.
//  Copyright © 2017 K. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string FirstString, SecondString;
    
    
    cin >> FirstString >> SecondString;
    int FirstStringSize = FirstString.size();
    int SecondStringSize = SecondString.size();
    string ComboString = FirstString + SecondString;
    
    
    
    
    cout << FirstStringSize << " " << SecondStringSize << endl;
    cout << ComboString << endl;
    
    char SwapOne = FirstString[0];
    char SwapTwo = SecondString[0];
    
    FirstString[0] = SwapTwo;
    SecondString[0] = SwapOne;
    
    cout << FirstString << " " << SecondString;
    return 0;
}

