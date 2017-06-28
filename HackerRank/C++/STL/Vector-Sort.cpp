//
//  Vector-Sort.cpp
//  HackerRank
//
//  Created by BTWitsK on 6/28/17.
//
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector <int> ints;
    int digits{0}, loop{0};
    
    cin >> loop;
    
    for (int i = 0; i < loop; i++){
        
        cin >> digits;
        ints.push_back(digits);
    }
    
    sort(ints.begin(),ints.end());
    
    for (int i = 0; i < ints.size(); i ++){
        
        cout << ints[i] << " ";
    }
    
    return 0;
}

