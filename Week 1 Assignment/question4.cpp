#include<iostream>
using namespace std;
int main(){
   int n1,n2;
   cout<<"Input two numbers: ";
   cin>>n1>>n2;

   char op;
   cout<<"Input an Operator:";
   cin>>op;

   switch (op)
   {
    case '+':
    cout<<n1+n2<<endl;
    break;
    case '-':
    cout<<n1-n2<<endl;
    break;
    case '*':
    cout<<n1*n2<<endl;
    break;
    case '/':
    cout<<n1/n2<<endl;
    break;
    case '%':
    cout<<n1%n2<<endl;
    break;

    default:
    cout<<"ERROR:Invalid operator"<<endl;
    break;
   }

   return 0;
}