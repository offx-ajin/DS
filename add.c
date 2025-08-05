#include <stdio.h>
int main()
{
int a[10][10],b[10][10],i,j,k=1,m,n;
printf("Enter the rows and columns of a :");
scanf("%d%d",&m,&n);
printf("enter the first matrix :");
for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
	scanf("%d",&a[i][j]);
	}}
for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
	if(a[i][j]!=0)
	{
	b[k][0]=i;
	b[k][1]=j;
	b[k][2]=[i][j];
	k++;
	}
	else
	{
	return 0;
	}
	}
	}
b[0][2]=k-1;
for(i=0;i<k;i++)
	{
	for(j=0;j<n;j++)
	{
	scanf("%d",&b[i][j]);
	}}
	return 0;
	}
