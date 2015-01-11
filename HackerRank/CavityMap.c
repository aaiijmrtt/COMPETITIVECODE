#include<stdio.h>
int main() {
	int n,i,j;
	scanf("%d%*c",&n);
	char m[n][n];
	for(i=0;i<n;++i) {
		for(j=0;j<n;++j)
			m[i][j]=getchar();
		getchar();
	}
	for(i=0;i<n;++i) {
			for(j=0;j<n;++j)
				if(i&&(i-n+1)&&j&&(j-n+1)&&(m[i][j]>m[i-1][j])&&(m[i][j]>m[i+1][j])&&(m[i][j]>m[i][j-1])&&(m[i][j]>m[i][j+1]))
					putchar('X');
				else
					putchar(m[i][j]);
		putchar('\n');
	}
	return 0;
}
