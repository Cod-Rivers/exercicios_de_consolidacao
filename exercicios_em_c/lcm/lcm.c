unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int    i;

    if (a == 0 || b == 0)
        return (0);
    if (a > b)
        i = a;
    else
        i = b;
    while (1)
    {
        if (i % a == 0 && i % b == 0)
            return (i);
        ++i;
    }
    
}
/*#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	if (argc < 2) 
    {
        printf("Por favor, forneça dois números como argumentos.\n");
        return 1;
    }
    unsigned int a = atoi(argv[1]);
	unsigned int b = atoi(argv[2]);
	printf("%d\n", lcm(a,b));
}*/