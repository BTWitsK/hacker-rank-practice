//
//  Box It.cpp
//  
//
//  Created by BTWitsK on 6/26/17.
//
//
#include<bits/stdc++.h>

using namespace std;

class Box{
private:
    int l, b, h;
    
public:
    Box(){ l = 0; b = 0; h = 0; }
    
    Box(int length, int breadth, int height){
        l = length; b = breadth; h = height;
    }
    Box(const Box& B){
        length = B.length;
        breadth = B.breadth;
        height = B.height;
    }
    
    int getLength(){return length;}
    int getBreadth(){return breadth;}
    int getHeight(){return height;}
    long long CalculateVolume(){
        long long volume{0};
        
        volume = length * breadth * height;
        
        return volume;
    }
    
    
    
   
    
};

bool operator<(Box& b);

ostream& operator<<(ostream& out, Box& B);


// The class should have the following functions :

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

void check2()
{
    int n;
    cin>>n;
    Box temp;
    for(int i=0;i<n;i++)
    {
        int type;
        cin>>type;
        if(type ==1)
        {
            cout<<temp<<endl;
        }
        if(type == 2)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            temp=NewBox;
            cout<<temp<<endl;
        }
        if(type==3)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            if(NewBox<temp)
            {
                cout<<"Lesser\n";
            }
            else
            {
                cout<<"Greater\n";
            }
        }
        if(type==4)
        {
            cout<<temp.CalculateVolume()<<endl;
        }
        if(type==5)
        {
            Box NewBox(temp);
            cout<<NewBox<<endl;
        }
        
    }
}

int main()
{
    check2();
}
