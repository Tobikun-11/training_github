#include <stdio.h>
#include <conio.h>
void nhap(int a[][100], int m, int n)
  {
  	int i,j;
  	for (i=0;i<m;i++)
  	for (j=0;j<n;j++)
  	  {
  	  	printf("a[%d][%d]=",i,j);
  	  	scanf("%d",&a[i][j]);
		}
  }
void xuat(int a[][100], int m, int n)
  {
	
  	int i,j;
  	printf("\nMa tran A la:");
	for (i=0;i<m;i++)
  	  {
  	    printf("\n");
  	  	for (j=0;j<n;j++) printf("%5d",a[i][j]);
		}
  }
int main()
  {
  	int a[100][100],m,n;
  	printf("\nNhap so hang va so cot:");
  	scanf("%d%d",&m,&n);
  	nhap(a,m,n);
  	xuat(a,m,n);
  	getch();
  	return 0;
  }
