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
	int n,k,i,j,s;
	scanf("%d%d",&n,&k);
	int c[n];
	for(i=0;i<n;++i)
		scanf("%d",&c[i]);
	ms(c,n);
	for(i=n-1,j=1,s=0;i>=0;--i) {
		s+=j*c[i];
		if((n-i)%k==0)
			j++;
	}
	printf("%d\n",s);
	return 0;
}
