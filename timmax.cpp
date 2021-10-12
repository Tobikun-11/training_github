#include <stdio.h>
int main ()
  {
	//chung ta cua hien tai
  	long long a,b,c,max;
  	printf("Nhap a,b,c");
  	scanf("%lli%lli%lli",&a,&b,&c);
  	max=a;
  	if (max<b) max=b;
  	if (max<c) max=c;
	printf("Max=%lli",max);
	return 0;
	    }
