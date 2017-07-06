//
//  Preprocessor Solution.cpp
//  HackerRank
//
//  Created by BTWitsK on 7/5/17.
//
//



#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif


#define toStr(x) #x
#define foreach(x,i) for(int i = 0; i < x.size(); i++)
#define INF = 80000
#define -INF = -80000
  
#define io(a)[i] int x = 0; cin >> x; a[i] = x;


#define FUNCTION(minimum, <) void minimum(int v, int &mn){(for int i = 0; i < v.size(); i++){ if (mn > v[i]) mn = v[i]; }}
#define FUNCTION(maximum, >) void maximum(int v, int &mx){(for int i = 0; i < v.size(); i++){ if (mx < v[i]) mx = v[i]; }}
#define minimum(mn, v[i]) minimum(v,mx)
#define maximum(mx, v[i]) maximum

FUNCTION(minimum, <) //macro for function definition (done)
FUNCTION(maximum, >) //macro for function definition (done)

int main(){
    int n; cin >> n;
    vector<int> v(n);
    foreach(v, i) { //for(int i = 0; i < v.size(); i++)
        io(v)[i]; // int x; cin >> x; a[i] = x;
                
    }
    int mn = INF; // macro for INF & -INF
    int mx = -INF;
    foreach(v, i) { //for(int i = 0; i < v.size(); i++)
        minimum(mn, v[i]); // macro for function call
        maximum(mx, v[i]); // macro for function call 
    }
    int ans = mx - mn;
  
    cout << toStr(Result =) <<' '<< ans; // toStr(x) #x
    return 0;
    
}
