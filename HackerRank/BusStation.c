#include<stdio.h>
#include<math.h>
int main() {
	int n,s,sq,f,c,i,j;
	scanf("%d",&n);
	int a[n];
	for(i=s=0;i<n;++i) {
		scanf("%d",&a[i]);
		s+=a[i];
	}
	for(i=1,sq=floor(sqrt(s));i<=sq;++i) {
		if(s%i==0) {
			for(j=c=0;(j<n)&&(c<i);++j) {
				c+=a[j];
				if(c==i)
					c=0;
			}
			if(j<n)
				continue;
			else if(!c)
				printf("%d ",i);
		}
	}
	for(i=ceil(sqrt(s))-1;i>0;--i) {
		if(s%i==0) {
			f=s/i;
			for(j=c=0;(j<n)&&(c<f);++j) {
				c+=a[j];
				if(c==f)
					c=0;
			}
			if(j<n)
				continue;
			else if(!c)
				printf("%d ",f);
		}
	}
	printf("\n");
	return 0;
}
