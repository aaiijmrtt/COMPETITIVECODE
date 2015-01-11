#include<stdio.h>
int main() {
	int t,n,a,b,i;
	scanf("%d",&t);
	while(t--) {
		scanf("%d%d%d",&n,&a,&b);
		if(a==b) {
			printf("%d\n",a);
			continue;
		}
		if(a>b) {
			i=b;
			b=a;
			a=i;
		}
		b-=a;
		a*=n-1;
		for(i=0;i<n;++i)
			printf("%d ",a+i*b);
		printf("\n");
	}
	return 0;
}
