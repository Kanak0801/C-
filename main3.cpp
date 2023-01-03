#include <iostream>
using namespace std;
int main () {
    double weight, height;
    cout<<"enter your weight ";
    cin>>weight;
    cout<<"enter your height ";
    cin>>height;
    double BMI= weight/ (height*height);
    cout<<"your BMI is: "<<BMI;
    return 0;
}