/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int issum(int arr[],int size){
  if(size==0){
      return 0;
      
  }
  if(size==1){
      return arr[0];
  }
  int rm=issum(arr+1,size-1);
  int sum=arr[0]+rm;
  return sum;
  
}
  

int main()
{
  int arr[]={1,2,1,12,2};
  cout<<issum(arr,5);
  return 0;
}
