//
//  Virtual Functions.cpp
//  HackerRank
//
//  Created by BTWitsK on 7/4/17.
//
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person {
public:
    string name;
    int age;
    
    virtual void getdata(){}
    virtual void putdata(){}
    
};
class Professor: public Person {
public:
    int publications, id;
    static int cur_id;

        void getdata(){
        string get_name;
        int get_age, get_publications;
        
        cin >> get_name >> get_age >> get_publications;
    
        name = get_name;
        age = get_age;
        publications = get_publications;
        cur_id ++;
        id = cur_id;
    }
        void putdata(){
        cout << name << " " << age << " " << publications << " "  << id << endl;
    }


}; int Professor::cur_id = 0;
class Student: public Person{
public:
    int marks[6], id;
    static int cur_id;
    
    void getdata(){
        string get_name;
        int get_age, get_marks;
        
        cin >> get_name >> get_age;
        cur_id ++;
        
        for(int i = 0; i < 6; i++){
            cin >> get_marks;
            marks[i] = get_marks;
        }
        name = get_name;
        age = get_age;
        id = cur_id;
    }
    void putdata(){
        int sum{0};
        
        for (int i = 0; i < 6; i++){
            sum += marks[i];
        }
        
        cout << name << " " << age << " " << sum << " " << id << endl;
    }
    
}; int Student::cur_id = 0;

int main(){
    
    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];
    
    for(int i = 0;i < n;i++){
        
        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;
            
        }
        else per[i] = new Student; // Else the current object is of type Student
        
        per[i]->getdata(); // Get the data from the user.
        
    }
    
    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.
    
    return 0;
    
}
