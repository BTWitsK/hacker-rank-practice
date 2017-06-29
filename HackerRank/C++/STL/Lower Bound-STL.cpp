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
    vector <int> N;
    vector<int>::iterator low;
    int n, loop, counter, q;
   
    
    cin >> loop;
    
// initializes venctor with ints input
    for (int i = 0; i < loop; i++) {
        cin >> n;
        N.push_back(n);
    }
    
    cin >> counter;
    
    for (int i = 0; i < counter; i++) {
        cin >> q;
        
        low = lower_bound(N.begin(), N.end(), q);
        
        if (q == *low) {
            cout << "Yes " << (low - N.begin() + 1) << endl;
        } else cout << "No " << (low - N.begin() + 1) << endl;
        
        
    }
    
    return 0;
}


