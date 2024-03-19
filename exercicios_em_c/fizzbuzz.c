#include<unistd.h>

void ft_putchar(char c)
{
   write(1, &c, 1);
}

char *ft_putnumber(int nbr)
{
    char x;
    if(nbr == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        ft_putnumber(147483648);
    }
    else if (nbr < 0)
    {
        ft_putchar('-');
        nbr = nbr * -1;
        ft_putnumber(nbr);
    }
    else if (nbr > 9)
    {
        ft_putnumber(nbr/10);
        ft_putnumber(nbr % 10);
    }
    else
    {
        x = '0' + nbr;
        ft_putchar(x);
    }
}


int main (void)
{
    int i = 1;

    while(i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            write(1, "fizzbuzz", 8);
            write(1, "\n", 1);
        }
        else if (i % 3 == 0 )
        {
            write(1, "fizz", 4);
            write(1, "\n", 1);
        }
        else if (i % 5 == 0)
        {

            write(1, "buzz", 4);
            write(1, "\n", 1);
        }
        
        else
        {
            ft_putnumber(i);
            write(1, "\n", 1);
        }
        i++;
    }
}