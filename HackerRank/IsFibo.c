#include<stdio.h>
int main() {
	long long int f[50],n;
	int t,i;
	scanf("%d",&t);
	for(i=2,f[0]=0,f[1]=1;i<50;++i)
		f[i]=f[i-1]+f[i-2];
	while(t--) {
		scanf("%lld",&n);
		for(i=0;i<50;++i)
			if(f[i]==n)
				break;
		if(i<50)
			printf("IsFibo\n");
		else
			printf("IsNotFibo\n");
	}
	return 0;
}
