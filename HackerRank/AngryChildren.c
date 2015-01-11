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
	int n,k,i,m;
	scanf("%d%d",&n,&k);
	int x[n];
	for(i=0;i<n;++i)
		scanf("%d",&x[i]);
	ms(x,n);
	for(i=k-1,m=x[n-1];i<n;++i)
		if(x[i]<x[i-k+1]+m)
			m=x[i]-x[i-k+1];
	printf("%d\n",m);
	return 0;
}
