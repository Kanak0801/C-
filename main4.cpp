#include <iostream>
using namespace std;
int main (){
    double length, breadth;
    cout<<"enter length of the rectangle ";
    cin>>length;
    cout<<"enter breadth of the rectangle ";
    cin>>breadth;
    double Area, Perimeter;
    Area= length*breadth;
    Perimeter = 2*(length+breadth);
    cout<<"the area is "<<Area<<" the perimeter is "<<Perimeter<<endl;
    return 0;

}