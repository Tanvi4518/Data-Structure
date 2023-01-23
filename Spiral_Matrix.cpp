#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int m=0,n=0,i=0,j=0;
int mat[20][20];
void spiralprint(int m,int n,int mat[m][n])
 {
 
    int i,k=0,l=0;
  	int last_row=m-1;
  	int last_col=n-1;
  	while(k<=last_row&&l<=last_col)
  	{
  		for(i=l;i<=last_col;i++)
  		{
  			cout<<mat[k][i]<<endl;
  		}
  		 k++;
		
		for(i=k;k<=last_row;i++)
		{
			cout<<mat[i][last_col]<<endl;
		}
		last_col--;
		
		if(k<=last_row)
		{
			for(i=last_col;i>=l;i--)
			{
				cout<<mat[last_row][i]<<endl;
			}
			last_row--;
		}
		if(l<=last_col)
		{
			for(i=last_row;i>=k;i--)
			{
				cout<<mat[i][l]<<endl;
			}
			l++;
		}
		
	} 
}
	
int main() {
	
  int m1,n1,x;
  cout<<"Enter no. of rows :"<<endl;
  cin>>m1;
  cout<<"Enter no. of columns :"<<endl;
  cin>>n1;
  int mat1[m1][n1];
  for(int i=0;i<m1;i++)
   {
  	for(int j=0;j<n1;j++)
  	{
  		cin>>x;
  		mat1[i][j]=x;
	}
  }
  spiralprint(m1,n1,mat1[m1][n1]);
  
 
	return 0;
}
