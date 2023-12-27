#include<stdio.h>
int factoril(int f)
{
	if(f==1)
	{
		return 1;
	}
	return f*factoril(f-1);
	

}
main()
{
	printf("%d",factoril(5));
}
