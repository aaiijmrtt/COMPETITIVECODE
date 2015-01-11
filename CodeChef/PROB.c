#include<stdio.h>
int main() {
 int n,t1,t2,t3,t4;
 scanf("%d",&n);
 while(n--) {
  scanf("%d%d%d%d",&t1,&t2,&t3,&t4);
  printf("%g\n",(double)t1/((double)(t1+t2)));
 }
 return 0;
}