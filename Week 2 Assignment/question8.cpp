#include<iostream>
#include<string>
using namespace std;

int main(){
    char str[52];
    int vowels=0,consonants=0;
    cout<<"Enter the string : ";
    gets(str);
    for(int i=0; i<str[i]; i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
           vowels++;
    } else if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'){
            consonants++;
    }
    }
cout<<"Total number of vowels in the string : "<<vowels<<endl;
cout<<"Total number of consonants in the string : "<<consonants<<endl;
return 0;
}