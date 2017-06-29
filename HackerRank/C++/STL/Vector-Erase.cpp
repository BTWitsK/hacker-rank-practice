//
//  Vector-Erase.cpp
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
    int n,x,a{0},b{0},loading_int{0};
    
    cin>> n; // first line of input contains an int to determine the number of iterations of the loop
    
    for (int i = 0; i < n; i++) { //loads the vector
        cin >> loading_int;       //with n ints
        N.push_back(loading_int);
    }
    cin >> x;
    x--; //fixes an off by 1 error
    N.erase(N.begin() + x); // removes int on x vector index
    
    cin >> a;
    cin >> b;
    
    a--; //
    b--;
    
    N.erase(N.begin() + a, N.begin() + b); // removes int on vector index a (inclusive) to b (exclusive)
    
    cout << N.size() << endl;
    
    // prints the contents of the vector
    for (int i = 0; i < N.size(); i++) {
        cout << N[i] << " ";
    }
    
    
    
    
    
    return 0;
}



