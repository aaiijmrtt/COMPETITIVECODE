#include<stdio.h>
#define mod 1000000007
long long int ft(int n) {
	long long int f;
	int i;
	for(i=f=1;i<=n;++i)
		f=(f*i)%mod;
	return f;
}
long long int pw(int a,int b) {
	if(b==0)
		return 1ll;
	if(b==1)
		return (long long int)a;
	long long int p=pw(a,b/2)%mod;
	if(b&0x1)
		return (p*p)%mod;
	return (((p*p)%mod)*a)%mod;
}
long long int iv(int n) {
	return pw(n,mod-2);
}
int main() {
	int a[26],s,i;
	long long int ap=1;
	char c;
	for(i=0;i<26;++i)
		a[i]=0;
	while(((c=getchar())!='\n')&&(c!=EOF))
		a[c-'a']++;
	for(i=s=0;i<26;++i)
		if(a[i]/2) {
			s+=a[i]/2;
			ap=(ap*iv(a[i]/2))%mod;
		}
	ap=(ap*ft(s))%mod;
	printf("%lld\n",ap);
	return 0;
}
