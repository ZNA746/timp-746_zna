#include <stdio.h> int main (void){ int a=0; int b=0; int x=0; scanf ("%d",&x); if (x>0) scanf ("%d",&a); x=x-1; for (int i=1;i<=x;i++){ scanf ("%d",&b); if (b<a) a=b; }; printf ("%d",a); }