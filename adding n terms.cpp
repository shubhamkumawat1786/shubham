 #include <stdio.h>
 int addnumber(int n){
 	if(n!=0)
 	 return n + addnumber(n-1);
 	 else 
 	 	return n;
 	
 }
 int main(){
 	
 	int n1=3;
 	int sum;
 
 	sum=addnumber(n1);
 	printf("%d",sum);
 	return 0;
	 }
		
