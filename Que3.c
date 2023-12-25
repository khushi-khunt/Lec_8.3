#include<stdio.h>
/* 
Input:
Enter the array's row & column size: 3

Enter array's elements:
a[0][0] = 2
a[0][1] = 4
a[0][2] = 1
a[1][0] = 3
a[1][1] = 5
a[1][2] = 4
a[2][0] = 8
a[2][1] = 2
a[2][2] = 6

Output:
The sum of diagonal elements of an Array: 13
*/

void main(){
  int i,j,n,m;
  float a[10][10],sum=0.0;

  printf("Enter row size:");
  scanf("%d",&m);
  
  printf("Enter Column size:");
  scanf("%d",&n);
  
  printf("Enter elements:\n");

  for(i=0;i<m;i++){
  	for(j=0;j<n;j++){
  		printf("Enter a[%d][%d]:",i,j);
  		scanf("%f",&a[i][j]);
	  }
  }
  
  for(i=0;i<m;i++){
  	for(j=0;j<n;j++){
  		if(i==j){
  	    sum=sum+a[i][j];
      	}
	  }
  }
    
 	printf("The sum of diagnoal elements of an array:%.2f",sum);
 }

 
