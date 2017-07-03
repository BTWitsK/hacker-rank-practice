//
//  Maps-STL.cpp
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
#include <map>
#include <algorithm>
using namespace std;



int main() {
    map <string, int> myMap;
    map <string, int>::iterator it;
    int Q, type, marks;
    string name;
    
    cin >> Q;
    
    for (int i = 0; i < Q; i++) {
        cin >> type;
        if (type == 1){
            cin >> name >> marks;
            
            // Add the marks Y(second int)
            //to Student X(first string)
            
            it = myMap.find(name);
            
            if (it == myMap.end()){
                myMap.insert({name,marks});
            }
            else {
                int add = myMap.find(name) -> second + marks;
                
                  myMap.erase(name);
                  myMap.insert(make_pair(name, add));
                
                
            }
        }
        if (type == 2){
            cin >> name;
            
            myMap.erase(name);
            
            // Erase the marks Y (second int)
            // from student (x) frist string)
        }
        if (type == 3){
            cin >> name;
            
            it = myMap.find(name); //looks for name in
                                   //myMap if found
                                   //returns else
                                   //returns .end()
            
            it!=myMap.end()? cout<< myMap[name] << endl:cout<< 0 << endl;
            
            // Print the marks from student X
            // print 0 if no marks
        }
    }
    return 0;
}

