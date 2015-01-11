#include<stdio.h>
int n,m;
int dfs(char dp[n][m],char x,char y,char tb) {
	char c=0;
	int t=-1;
	if(dp[x][y]==-1) {
		if(x&&dp[x-1][y])
			c++;
		if((x-n+1)&&dp[x+1][y])
			c++;
		if(y&&dp[x][y-1])
			c++;
		if((y-m+1)&&dp[x][y+1])
			c++;
		return (c>1);
	}
	if(x&&dp[x-1][y]&&(tb!=1)) {
		c++;
		if(t==-1)
			t=dfs(dp,x-1,y,2);
	}
	if((x-n+1)&&dp[x+1][y]&&(tb!=2)) {
		c++;
		if(t==-1)
			t=dfs(dp,x+1,y,1);
	}
	if(y&&dp[x][y-1]&&(tb!=-1)) {
		c++;
		if(t==-1)
			t=dfs(dp,x,y-1,-2);
	}
	if((y-m+1)&&dp[x][y+1]&&(tb!=-2)) {
		c++;
		if(t==-1)
			t=dfs(dp,x,y+1,-1);
	}
	if(t!=-1)
		return (tb&&(c>1))+t;
	return -1;
}
int main() {
	int t,k,i,j,x,y;
	scanf("%d",&t);
	while(t--) {
		scanf("%d%d",&n,&m);
		char dp[n][m];
		for(i=0;i<n;++i) {
			getchar();
			for(j=0;j<m;++j)
				switch(getchar()) {
					case '.': dp[i][j]=1; break;
					case '*': dp[i][j]=1; x=i; y=j; break;
					case 'X': dp[i][j]=0; break;
					case 'M': dp[i][j]=-1; break;
				}
		}
		scanf("%d",&k);
		if(dfs(dp,x,y,0)==k)
			printf("Impressed\n");
		else
			printf("Oops!\n");
	}
	return 0;
}
