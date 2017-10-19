#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,c,p,q,r,s,t,u,max;
	scanf("%d%d%d",&a,&b,&c);
	p = a+b*c;
	max = p;
	q = a*(b+c);
	if(max<q)
		max = q;
	r = a*b*c;
	if(max<r)
		max = r;
	s = (a+b)*c;
	if(max<s)
		max = s;
	t = a+b+c;
	if(max<t)
		max = t;
	u = a*b+c;
	if(max<u)
		max = u;


	printf("%d",max);


	//getch();
	return 0;
}