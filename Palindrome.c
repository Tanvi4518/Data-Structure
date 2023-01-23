#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int n,r,rev=0,temp;
	
	printf("Enter any number :");
	scanf("%d",&n);
	temp=n;
	
	do
	{
		r=n%10;
		rev=(rev*10)+r;
		n=n/10;
	}while(n!=0);
	
	if(temp==rev)
	{
		printf("The %d number is palindrome",temp);
	}
	else
	{
		printf("The %d number is not palindrome",temp);
	}
	return 0;
}
