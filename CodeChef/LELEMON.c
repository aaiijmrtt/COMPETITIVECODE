#include<stdio.h>
int main() {
 int t,n,m,i,j,k,p,v;
 scanf("%d",&t);
 while(t--) {
  scanf("%d%d",&n,&m);
  int P[m],C[n],V[n][101];
  for(i=0;i<m;++i)
   scanf("%d",&P[i]);
  for(i=0;i<n;++i) {
   scanf("%d",&C[i]);
   for(j=0;j<C[i];++j) {
    scanf("%d",&p);
    for(k=j;k>0&&V[i][k-1]>p;--k)
     V[i][k]=V[i][k-1];
    V[i][k]=p;
   }
  }
  for(i=v=0;i<m;++i)
   v+=C[P[i]]>0?V[P[i]][--C[P[i]]]:0;
  printf("%d\n",v);
 }
 return 0;
}