#include <stdio.h>
int main()	{
	int t,a[10][9],i,j,m,n;
	for(i=1;i<11;++i)	{
		a[i%10][0]=i;
		for(j=1;j<9;++j)
			a[i%10][j]=a[i%10][j-1]*10+i%10;
	}
	scanf("%d",&t);
	while(t--)	{
		n=1000000000;
		for(i=0;i<10;++i)	{
			scanf("%d",&m);
			if(a[i][m]<n)
				n=a[i][m];
		}
		printf("%d\n",n);
	}
	return 0;
}