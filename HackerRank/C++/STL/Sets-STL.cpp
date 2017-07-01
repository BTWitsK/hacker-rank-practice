//
//  Sets-STL.cpp
//  HackerRank
//
//  Created by BTWitsK on 6/30/17.
//
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
set <long double> S;
set <long double>::iterator it;



int main() {
    long double Q{0}, q{0}, x{0};
    
    cin >> Q; //number of iterations for the queries
    
    for (int i = 0; i < Q; i++){
        cin >> q >> x; // takes in type of query and and int
        
        if (q == 1) {S.insert(x);}
        else if (q == 2) {S.erase(x);}
        else if (q == 3){
            it = S.find(x);
            (*it == x) ? cout << "Yes\n" : cout << "No\n";
        }
        
    }
    
    return 0;
}


