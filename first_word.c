#include <unistd.h>

int main (int argc, char *argv[])
{
    
    if ( argc == 2)
    {
        char *arg = argv[1];
        while (*arg == 32 && *arg == 9)
            arg++;
        while((*arg != 32 && *arg != 9) && *arg)
        {
            write(1, arg, 1);
            arg++;    
        }            
    }
    write (1, "\n", 1);
    return (0);
} 