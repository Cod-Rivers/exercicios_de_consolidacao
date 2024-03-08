#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
    int result = 0;
    int signal = 1;

    
    
        while(*str == ' ' || *str >= 9 && *str <= 13)
               str++;
        if(*str == '-')
            signal = -1;
        if(*str == '-' || *str == '+')
            str++;
        while(*str >= '0' && *str <= '9')
        {
            result = result * 10 + *str -'0';
            str++;
        }
    
    return (signal * result);
}

void print_hex(int return_atoi)
{
    char hex[]={"0123456789abcdef"};

    if(return_atoi >= 16)
        print_hex (return_atoi/16);
    write(1, &hex[return_atoi % 16], 1);
}
int main(int argc, char **argv)
{
    if(argc == 2)
    {
        print_hex(ft_atoi(argv[1]));
    }
    write(1, "\n", 1);
}    