#include <unistd.h>

void ft_putchar(char a)
{
	write(1,&a,1);
}

void ft_print_reverse_alphabet(void)
{
	char a = 'z';
		while(a >= 'a')
		{
			ft_putchar(a);
			a--;
		}

}
