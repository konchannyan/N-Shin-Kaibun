
#include <stdio.h>

int check(char *p)
{
	char * l = p;
	while(*l) l++;
	l--;

	while(p <= l)
	{
		if(*p != *l)
			return 0;
		p++;
		l--;
	}

	return 1;

}

int check_a(int x, int b)
{

	int i;
	char s[256] = { 0 };
	while(x){
		int a = x % b;
		x /= b;
		for(i = 255; i > 0; i--)
			s[i] = s[i-1];
		s[0] = a + '0';
	}

	return check(s);
}

int main()
{

	int x = 10;
	while(1){
		if(
			check_a(x, 2)
		 && check_a(x, 8)
		 && check_a(x, 10)
		 )
		 	break;
		x++;
	}

	printf("%d\n", x);

	return 0;

}
