#include<iostream>
using namespace std;
void copyarr(int source[],int destination[],int size){
    for (int i=0;i<size;i++){
        destination[i]=source[i];
    }
}
void pastearr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int first[size], second[size];
    cout<<"Enter "<<size<<" elements of the first array: ";
    for(int i=0;i<size;i++){
        cin>>first[i];
    }
    copyarr(first,second,size);
    cout<<"The second array is: ";
    pastearr(second,size);
    return 0; 
}