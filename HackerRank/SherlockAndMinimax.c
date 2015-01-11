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
	int n,p,q,d,m,i,j,k;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;++i)
		scanf("%d",&a[i]);
	scanf("%d%d",&p,&q);
	ms(a,n);
	if(p>q) {
		i=p;
		p=q;
		q=i;
	}
	if(p>=a[n-1]) {
		printf("%d\n",q);
		return 0;
	}
	if(q<=a[0]) {
		printf("%d\n",p);
		return 0;
	}
	d=0;
	for(j=0;j<n;++j)
		if(a[j]>=p)
			break;
	if(j==0) {
		if(a[j]-p>d) {
			d=a[j]-p;
			m=p;
		}
	}
	else {
		if((p<=(a[j-1]+a[j])/2)&&((a[j]-a[j-1])/2>d)) {
			d=(a[j]-a[j-1])/2;
			m=(a[j]+a[j-1])/2;
		}
		else if(a[j]-p>d) {
			d=a[j]-p;
			m=p;
		}
	}
	for(k=n-1;k>=0;--k)
		if(a[k]<=q)
			break;
	for(;j<k;++j)
		if((a[j+1]-a[j])/2>d) {
			d=(a[j+1]-a[j])/2;
			m=(a[j+1]+a[j])/2;
		}
	if(k==n-1) {
		if(q-a[k]>d) {
			d=q-a[k];
			m=q;
		}
	}
	else {
		if((q>=(a[k+1]+a[k])/2)&&((a[k+1]-a[k])/2>d)) {
			d=(a[k+1]-a[k])/2;
			m=(a[k+1]+a[k])/2;
		}
		else if(q-a[k]>d) {
			d=q-a[k];
			m=q;
		}
	}
	printf("%d\n",m);
	return 0;
}
