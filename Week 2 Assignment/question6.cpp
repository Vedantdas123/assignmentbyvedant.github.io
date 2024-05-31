#include<iostream>
#include<unordered_map>
using namespace std;
int max(int arr[],int n){
     unordered_map<int,int>freq;
      for(int i=0;i<n;i++){
    freq[arr[i]]++;
 }
 int maxcount=0;
 int maxelement=arr[0];
 for(auto& elem : freq){
     if(elem.second>maxcount){
         maxcount=elem.second;
         maxelement=elem.first;
     }
 }
return maxelement;
}
int main(){
    int n;
    cout<<"Enter the number of elements in array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxoccurringelement=max(arr,n);
    cout<<"The maximum occuring element is: "<<maxoccurringelement<<endl;
    return 0;
}
