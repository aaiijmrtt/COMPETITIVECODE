#include <stdio.h>
int main()	{
	int t,n,s[100][100],i,j;
	scanf("%d",&t);
	while(t--)	{
		scanf("%d",&n);
		for(i=0;i<n;++i)
			for(j=0;j<=i;++j)
				scanf("%d",&s[i][j]);
		for(i=n-2;i>=0;--i)
			for(j=0;j<n-1;++j)
				if(s[i+1][j]>s[i+1][j+1])
					s[i][j]+=s[i+1][j];
				else
					s[i][j]+=s[i+1][j+1];
		printf("%d\n",s[0][0]);
	}
	return 0;
}