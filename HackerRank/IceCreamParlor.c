#include<stdio.h>
int main() {
	int t,m,n,i,j,f;
	scanf("%d",&t);
	while(t--) {
		scanf("%d%d",&m,&n);
		int c[n];
		for(i=0;i<n;++i)
			scanf("%d",&c[i]);
		for(i=f=0;(!f)&&(i<n);++i)
			for(j=i+1;j<n;++j)
				if(c[i]+c[j]==m) {
					printf("%d %d\n",i+1,j+1);
					f=1;
					break;
				}
	}
	return 0;
}
