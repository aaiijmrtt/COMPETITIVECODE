#include<stdio.h>
int gcd(int a,int b) {
	int r;
	if(a<b) {
		r=a;
		a=b;
		b=r;
	}
	while((r=a%b)!=0) {
		a=b;
		b=r;
	}
	return b;
}
int main() {
	int t,n,a,i,g;
	scanf("%d",&t);
	while(t--) {
		scanf("%d%d",&n,&g);
		for(i=1;i<n;++i) {
			scanf("%d",&a);
			g=gcd(a,g);
		}
		if(g==1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
