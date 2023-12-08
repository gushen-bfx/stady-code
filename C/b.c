#include <stdio.h>
//extern char x;
int main()
{
	extern char txt[];
	printf("%s\n",txt);
	return 0;
}
