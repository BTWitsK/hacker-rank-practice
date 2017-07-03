//
//  Inheritance Introduction.cpp
//  HackerRank
//
//  Created by BTWitsK on 7/2/17.
//
//

#include <iostream>

using namespace std;

class Rectangle{
public:
    int width,height;
public:
    void display(){
        cout << width << " " << height << endl;
    }
};
class RectangleArea:public Rectangle {
private:
    int area = 0;
public:
    void read_input(){
        cin >> width >> height;
    }
    void display(){
        area = width * height;
        
        cout << area;
        
        
    }
};


int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}
