#include <stdio.h>
int main ()
{
	char c;
	printf ("\nNhap ki tu c: ", &c); scanf ("%c", &c);
	printf ("\ngia tri cua c la: %c", c);
	printf ("\ngia tri cua c la: %d", c);
	printf ("\ngia tri cua c la: %o", c);
	printf ("\nc co la ki tu a khong? %d", (c==97));
}
