#include<iostream>
using namespace std;

int countoccurrences(int arr[],int size,int number){
    int count=0;
    for (int i=0;i<size;i++){
        if(arr[i] == number){
            count++;
        }
    }
    return count;
}
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    int arr[size];
    cout<<"Enter "<<size<<" elements of the array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int number;
    cout<<"Enter the number to count: ";
    cin>>number;
    int occurences = countoccurrences(arr,size,number);
    cout<<"The number "<<number<<" occurs "<<occurences<<" times in the array."<<endl;

    return 0;
}