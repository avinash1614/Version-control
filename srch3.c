
#include<stdio.h>
void main()
{
int a[10],s=0,n;
printf("enter the array size");
scanf("%d",&s);

printf("array elemnts");
for(int j=0;j<s;j++)
{
	scanf("%d",&a[j]);

}
search1();

printf("enter the ele to searcgh");
scanf("%d",&n);
search2(a,s,n);
}
