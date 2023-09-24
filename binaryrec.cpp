#include<iostream>
using namespace std;
void binarysearch(int arr[],int start,int end,int key){
    
    int mid=start+(end-start)/2;
    if(arr[mid]==key){
        cout<<"Success jj  jj ";
    }
    else if(arr[mid]>key){
        binarysearch(arr,start,mid-1,key);
        
    }
    else{
        binarysearch(arr,mid+1,end,key);
    }
}
int main(){
    int arr[]={1,22,22,112,11321};
    binarysearch(arr,0,5,11321);
    return 0;
}
