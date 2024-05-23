#include<stdio.h>
 int main(){
 	 int n,i;
 	 scanf("%d",&n);
 	 if(n==2||n==3){	 	
 	 	printf("n la so nguyen to !");
	  }else{
	  	for(int i=2;i<n;i++){
	  		if (n%i==0){
	  			printf("n khong la so nguyen to");
	  			return 0;
			  }
	  		}
	  }
	  printf("n la so nguyen to !");
	  
 	 return 0;
 	
 }
