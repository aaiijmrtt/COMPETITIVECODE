#include<stdio.h>
int min(int a,int b) {
	if(a<b)
		return a;
	return b;
}
int main() {
	int n,m,k,i,j,l,x,y,t,T=1000;
	scanf("%d%d%d",&n,&m,&k);
	char b[n][m];
	for(i=0;i<n;++i) {
		getchar();
		for(j=0;j<m;++j) {
			b[i][j]=getchar();
			if(b[i][j]=='*') {
				x=i;
				y=j;
			}
		}
	}
	int dp[k+1][n][m];
	for(l=0;l<=k;++l)
		for(i=0;i<n;++i)
			for(j=0;j<m;++j)
				dp[l][i][j]=0;
	dp[0][0][0]=1;
	for(l=0;l<k;++l)
		for(i=0;i<n;++i)
			for(j=0;j<m;++j) {
				t=T;
				if(i&&dp[l][i-1][j])
					t=min(dp[l][i-1][j]+(b[i-1][j]!='D'),t);
				if((i-n+1)&&dp[l][i+1][j])
					t=min(dp[l][i+1][j]+(b[i+1][j]!='U'),t);
				if(j&&dp[l][i][j-1])
					t=min(dp[l][i][j-1]+(b[i][j-1]!='R'),t);
				if((j-m+1)&&dp[l][i][j+1])
					t=min(dp[l][i][j+1]+(b[i][j+1]!='L'),t);
				if(t!=T)
					dp[l+1][i][j]=t;
			}
	t=T;
	for(l=1;l<=k;++l)
		if(dp[l][x][y])
			t=min(dp[l][x][y],t);
	if(t!=T)
		printf("%d\n",t-1);
	else
		printf("%d\n",-1);
	return 0;
}
