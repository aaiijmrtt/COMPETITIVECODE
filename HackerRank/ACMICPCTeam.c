#include<stdio.h>
int main() {
	int m,n,i,j,k,a,b,c;
	scanf("%d%d",&n,&m);
	char t[n][m];
	for(i=0;i<n;++i) {
		getchar();
		for(j=0;j<m;++j)
			t[i][j]=getchar()-'0';
	}
	for(i=a=b=0;i<n;++i)
		for(j=i+1;j<n;++j) {
			for(k=c=0;k<m;++k)
				if(t[i][k]|t[j][k])
					c++;
			if(c>a)
				a=c,b=1;
			else if(c==a)
				b++;
		}
	printf("%d\n%d\n",a,b);
	return 0;
}
