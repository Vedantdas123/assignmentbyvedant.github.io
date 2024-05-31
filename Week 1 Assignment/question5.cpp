#include<iostream>
using namespace std;
int main(){
    double n;
    cout<<"Enter the radius of circle:";
    cin>>n;
    {
        double diameter= 2*n;
        double circumference= 2*3.14*n;
        double area=3.14*n*n;
        cout<<"Diameter:"<< diameter<<endl;
        cout<<"Circumference:"<< circumference<<endl;
        cout<<"Area:"<< area<<endl;
    }
    return 0;
}
