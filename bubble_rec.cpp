
#include<iostream>
using namespace std;

void bubble(int a[],int size){
                                bool s=false;
                                                 if(size==1 || size==0){
          return;
      }
    for(int i=0;i<size;i++){
      
        if(a[i]>a[i+1] ){
            // swap(a[i],swap[i+1]);
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
           s=true;
        }
        
    }
    if(!s){
        return;
    }

  bubble(a,size--);   }
  
int main(){
    int arr[]={1,222,4,55,55,5,5515,15,151,515,1};
    int size=sizeof(arr)/sizeof(arr[0]);
     for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
    }
  
    cout<<"\n";
    bubble(arr,11);
    for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
    }
    return 0;
}


