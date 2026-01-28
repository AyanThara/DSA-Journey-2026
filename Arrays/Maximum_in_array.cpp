#include<iostream>
#include <climits>
using namespace std;
int getmax(int array[],int size){
    int maxi=INT_MIN;
    for(int i=0;i<size;i++){
        if(array[i]>maxi){
            maxi=array[i];
        }
    }
    return maxi;
}
int main(){
    int size;
    cout<<"Enter the size of the array ";
    cin>>size;
    int array[100];
    cout<<"Enter the value of the array ";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
   int ans= getmax(array,size);
   cout<<"Maximum of the array is "<<ans;
}
