#include<iostream>
using namespace std;
int linearseach(int array[],int size,int key){
    for(int i=0;i<size;i++){
        if(array[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    int key;
    cout<<"Enter the key you want to search ";
    cin>>key;
    int ans=linearseach(array,10,key);
    if(ans!=-1){
        cout<<"Key present at the index "<<ans;
    }else{
        cout<<"Key is not present ";
    }
    
}
