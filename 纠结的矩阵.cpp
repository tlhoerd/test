#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int ary[101][101]={0};
	ary[1][1]=1;
	int val=1;
	int i=2,j,k;
	while(i<=n)
	{
		if(i%2==0)
		{
			for(j=1;j<=i;j++)
			{
				val++;
				ary[j][i]=val;
			}
			val--;
			for(k=i;k>=1;k--)
			{
				val++;
				ary[i][k]=val;
			}
		}
		if(i%2!=0)
		{
			for(k=1;k<=i;k++)
			{
				val++;
				ary[i][k]=val;
			}
			val=val-2;
			for(j=k;j>=1;j--)
			{
				val++;
				ary[j][i]=val;
			}
		}
		i++;	
	}	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d ",ary[i][j]);
		}
		printf("\n");
	}
}
