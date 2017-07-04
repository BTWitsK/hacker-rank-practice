//
//  2D Array.cpp
//  HackerRank
//
//  Created by BTWitsK on 7/4/17.
//
//

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    vector< vector<int> > box(6,vector<int>(6));
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            cin >> box[i][j];
        }
    }
    
    vector <int> total;
    
        
        for (int i = 0; i < 4; i++){
            for (int j = 0; i < 4; j++){
                
                total.push_back(box[0+i][0+j] + box[0+i][1+j] + box[0+i][2+j]+ box[i+1][j+1] + box[i+2][j+0] + box[i+2][j+1] + box[i+2][j+2]);
               
                
            }
            
        }
    
        sort(total.begin(), total.end());
    
    cout << total[total.size() - 1];
    
    
    
    return 0;
}



