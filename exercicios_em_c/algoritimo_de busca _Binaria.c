#include <stdio.h>

int	binary_search(int list[], int item, int len)
{
	int low = 0;
	int	high = len;

	while (low <= high)
	{
		int mid = ((low + high) /2);
		
		int	try = list[mid];

		if (try == item)
			return (mid);
		else if (try > item)
			high = mid - 1;
		else	
			low = mid + 1;
	}
	return (-1);
}

int main (void)
{
	int list[] = {1,2,3,4,5};
	int	len = sizeof(list) / sizeof(list[0]);

	printf("o numero que vc esta procurando se encontra na posição %d do array \n", binary_search(list, 4, len));
	return (0);
}