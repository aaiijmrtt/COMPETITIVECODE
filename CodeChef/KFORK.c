#include<stdio.h>
int main()	{
	int t,m,n,x,y,i,j,k,M[8][2]={{1,2},{1,-2},{-1,2},{-1,-2},{2,1},{2,-1},{-2,1},{-2,-1}};
	scanf("%d",&t);
	while(t--)	{
		scanf("%d%d",&n,&m);
		int b[n][n];
		for(i=0;i<n;++i)
			for(j=0;j<n;++j)
				b[i][j]=b[i][j]=0;
		for(i=0;i<m;++i)	{
			scanf("%d%d",&x,&y);
			for(j=0;j<n;++j)
				b[x-1][j]=b[j][y-1]|=1<<31;
			for(j=x-1,k=y-1;j<n&&k<n;++j,++k)
				b[j][k]|=1<<31;
			for(j=x-1,k=y-1;j>=0&&k<n;--j,++k)
				b[j][k]|=1<<31;
			for(j=x-1,k=y-1;j<n&&k>=0;++j,--k)
				b[j][k]|=1<<31;
			for(j=x-1,k=y-1;j>=0&&k>=0;--j,--k)
				b[j][k]|=1<<31;
			for(j=0;j<8;++j)
				if(x-1+M[j][0]>=0&&x-1+M[j][0]<n&&y-1+M[j][1]>=0&&y-1+M[j][1]<n)
					b[x-1+M[j][0]][y-1+M[j][1]]++;
		}
		for(i=k=0;i<n;++i)
			for(j=0;j<n;++j)
				if((!(b[i][j]&(1<<31)))&&((b[i][j]&0XFFFFF)>1))
					k++;
		printf("%d\n",k);
	}
	return 0;
}