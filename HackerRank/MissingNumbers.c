#include<stdio.h>
int main() {
	int n,m,t,p,i,x[201];
	for(i=0;i<=200;++i)
		x[i]=0;
	scanf("%d%d",&n,&p);
	x[100]=-1;
	for(i=1;i<n;++i) {
		scanf("%d",&t);
		x[t-p+100]--;
	}
	scanf("%d",&m);
	for(i=0;i<m;++i) {
		scanf("%d",&t);
		x[t-p+100]++;
	}
	for(i=0;i<=200;++i)
		if(x[i])
			printf("%d ",i+p-100);
	printf("\n");
	return 0;
}
