#include<iostream>
#include<string>
using namespace std;

int main(){
    char str[50];
    int alphabets=0,digits=0,specialcharacters=0;
    cout<<"Enter the string : ";
    gets(str);
    for(int i=0;i<str[i];i++){
        if(str[i]>='a' && str[i]<='z'||str[i]>='A' && str[i]<='Z'){
           alphabets++; 
        }else if(str[i]>='0' && str[i]<='9'){
            digits++;
        }else{
            specialcharacters++;
        }
    }
    cout<<"Total number of Alphabets : "<<alphabets<<endl;
    cout<<"Total number of Digits : "<<digits<<endl;
    cout<<"Total number of Special Chatacters : "<<specialcharacters<<endl;
    return 0;
}