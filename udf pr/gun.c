#include<stdio.h>
int pass1()
{
	int gp1=20;
	return gp1;
}
int pass2()
{
	int gp2=20;
	return gp2;
}
int pass3()
{
	int gp3=20;
	return gp3;
}
int delear(int gp1,int gp2,int gp3)
{
	 int x=30+gp1+gp2+gp3;
	 return x;
}
int rocky()
{
	int y=10+delear(pass1(),pass2(),pass3());
	return y;
}
main()
{
	printf("%d",rocky());
	
}

