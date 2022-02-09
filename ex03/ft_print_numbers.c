#include <unistd.h>

void ft_putchar(char a)
{
	
	write(1,&a,1);
}

void ft_print_numbers(void)
{
	int i = '0' ;
		while (i <= '9')
		{
			ft_putchar(i);
			i++;
		}

}

