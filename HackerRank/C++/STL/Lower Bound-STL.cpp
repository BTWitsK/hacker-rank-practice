//
//  Lower Bound-STL.cpp
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
    vector<int>MainVector;
    vector<int>::iterator MainIt; //defines iterator
    vector<int>::iterator First;
    int VectorInts, NumInts, NumQueries, Query;
   
//get number of ints used to fill vector from input
    cin >> NumInts;
    
// initializes main vector with ints input
    for (int i = 0; i < NumInts; i++) {
        
        cin >> VectorInts;
        MainVector.push_back(VectorInts);
    }
    
// input number of queries
    cin >> NumQueries;
    
    for (int i = 0; i < NumQueries; i++) {
        
        cin >> Query;
        
        MainIt = lower_bound(MainVector.begin(), MainVector.end(), Query);
        
        if (Query == *MainIt) {
            cout << "Yes " << (MainIt - MainVector.begin() + 1) << endl;
        }
        else cout << "No " << (MainIt - MainVector.begin() + 1) << endl;
        
        
    }
    
    return 0;
}


