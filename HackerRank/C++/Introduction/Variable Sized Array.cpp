//
//  Variable Size Array
//
//  Created by BTWitsK on 6/25/17.
//


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N{0},n{0},k{0},A{0},U{0},i,j,u{0};
    cin >> N;
    cin >> n;
    vector <int> main[N];
    vector <int> sub;
    vector <int> test;
    
    
    
    for (i = 0; i < N; i++) {
        cin >> k;
        
        for (j = 0; j < k; j++) {
            cin >> A;
            sub.push_back(A);
        }
        
        main[i] = sub;
        sub.clear();
    }
    
    for (i = 0; i < n; i++){
        cin >> U >> u;
        
        test = main[U];
        
        cout << test[u] << endl;
        
    }
    
    
    return 0;
}
