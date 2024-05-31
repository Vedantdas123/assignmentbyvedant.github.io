#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    {
        if(n>0){
            cout<<"This Number is Positive."<<endl;
        }
        else if(n<0){
            cout<<"This Number is Negative."<<endl;
        }
        else if(n==0){
            cout<<"This number is zero."<<endl;
        }
    }
    return 0;
}