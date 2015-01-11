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
	int n,k,i,p;
	scanf("%d%d",&n,&k);
	int a[n];
	for(i=0;i<n;++i)
		scanf("%d",&a[i]);
	ms(a,n);
	for(i=p=0;(i<n)&&(p+a[i]<=k);++i)
		p+=a[i];
	printf("%d\n",i);
	return 0;
}
