#include<stdio.h>
void ms(int *a,int l) {
	if(l==1)
		return;
	ms(a,l/2),ms(&a[l/2],l-l/2);
	int i=0,j=l/2,k=0,A[l];
	while((i<l/2)&&(j<l))
		A[k++]=a[i]<a[j]?a[i++]:a[j++];
	while(i<l/2)
		A[k++]=a[i++];
	while(j<l)
		A[k++]=a[j++];
	for(k=0;k<l;++k)
		a[k]=A[k];
}
int main() {
	int t,n,i;
	long long int p,c;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;++i)
			scanf("%d",&a[i]);
		ms(a,n);
		for(i=p=0;i<n-1;++i) {
			for(c=1;(i<n-1)&&(a[i]==a[i+1]);++i)
				c++;
			p+=(c-1)*c;
		}
	printf("%lld\n",p);
	}
	return 0;
}
