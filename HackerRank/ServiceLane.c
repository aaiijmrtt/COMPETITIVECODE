#include<stdio.h>
int main() {
	int n,t,i,j,m;
	scanf("%d%d",&n,&t);
	int w[n];
	for(i=0;i<n;++i)
		scanf("%d",&w[i]);
	while(t--) {
		scanf("%d%d",&i,&j);
		for(m=3;i<j;++i)
			if(w[i]<m)
				m=w[i];
		printf("%d\n",m);
	}
	return 0;
}
