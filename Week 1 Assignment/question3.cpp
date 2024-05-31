#include<iostream>
using namespace std;
int main(){
    int n,digit,sum=0;
    cout<<"Enter a number:";
    cin>>n;

    do{
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }while(n>0);
    cout<<"Sum of digits of the number:"<<sum<<endl;

    return 0;
    }