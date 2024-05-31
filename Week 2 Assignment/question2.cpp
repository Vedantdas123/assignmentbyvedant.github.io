#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter the size of the first array: ";
    cin>>n1;
    int arr1[n1];
    cout<<"Enter the elements of the first array: ";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the size of the second array: ";
    cin>>n2;
    int arr2[n2];
    cout<<"Enter the elements of the second array: ";
    for (int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    int sum=n1+n2;
    int mergedarray[sum];
    for (int i=0;i<n1;i++){
        mergedarray[i]=arr1[i];
    }
    for (int i=0;i<n2;i++){
        mergedarray[i]=arr2[i];
    }
    cout<<"Merged array in reverse order: ";
    for(int i=sum-1;i>=0;i--){
        cout<< mergedarray[i] << " ";
    }
    cout<<endl;
    return 0;
}