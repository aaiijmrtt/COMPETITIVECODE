#include<stdio.h>
int main() {
	int t,i,j,k;
	char w[100],c;
	scanf("%d%*c",&t);
	while(t--) {
		for(i=0;(((c=getchar())!='\n')&&(c!=EOF));++i)
			w[i]=c;
		for(j=i-1;j>0;--j)
			if(w[j-1]<w[j])
				break;
		if(j>0) {
			for(k=j;k<i;++k)
				if(w[k]<=w[j-1])
					break;
			c=w[j-1];
			w[j-1]=w[k-1];
			w[k-1]=c;
			for(k=0;k<(i-j)/2;++k) {
				c=w[j+k];
				w[j+k]=w[i-k-1];
				w[i-k-1]=c;
			}
			for(k=0;k<i;++k)
				putchar(w[k]);
			putchar('\n');
		}
		else
			printf("no answer\n");
	}
	return 0;
}
