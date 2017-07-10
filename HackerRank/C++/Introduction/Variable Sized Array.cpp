//
//  Variable Size Array
//
//  Consider an n-element array, a , where each index i in the array contains a reference to an array of k integers (where the value of k varies from array to array). See the Explanation section below for a diagram.
//
//  Given a, you must answer q queries. Each query is in the format i j, where  denotes an index in array a and j denotes an index in the array located at a[i]. For each query, find and print the value of element j in the array at location a[i] on a new line.
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
    int NumberOfVectors,NumberOfQuery;
    
//Get the size of the main vector and the number of queries
    cin >> NumberOfVectors;
    cin >> NumberOfQuery;
    
    vector <int> main[NumberOfVectors];
    vector <int> sub, test;
  
    
    
    int SizeOfVector,VectorDigit;

//determine the size of each sub vector within main vector
    for (int i = 0; i < NumberOfVectors; i++) {
        
        cin >> SizeOfVector;

//Fill a sub vector and use it to fill the main vector
        for (int j = 0; j < SizeOfVector; j++) {
            cin >> VectorDigit;
            sub.push_back(VectorDigit);
        }
        
        main[i] = sub;
        sub.clear();
    }
 
    int ArrayLocation,VectorLocation;
    
    for (int i = 0; i < NumberOfQuery; i++){

//get query infomartion
        cin >> ArrayLocation >> VectorLocation;
 
//vector test becomes the vector chosen by input
        test = main[ArrayLocation];
        
//display location of test vector chosen by input
        cout << test[VectorLocation] << endl;
        
    }
    
    
    return 0;
}
