#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define SIZE 5


int find_smalest(int *list)
{
   int smalest = list[0];
   int index = 0;
   int i = 0;
   while (i < SIZE)
   {
        if(list[i] < smalest)
        {
            smalest = list[i];
            index = i;
        }
        i++;
   }
   return (index);
}

int *selection_sort(int *list)
{
    int *new_list = (int *)malloc(SIZE * sizeof (int) + 1);
    int i = 0;
    while (i < SIZE)
    {
        int smalest = find_smalest(list);
        new_list[i] = list[smalest];
        list[smalest] = INT_MAX;
        i++;
    }  
    new_list[i]= '\0';
    return (new_list);  
}

int main(void) 
{
    int list[5] = {5, 3, 6, 2, 10};
	int *sortarr = selection_sort(list);
	// print result
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", sortarr[i]);
	}
	return 0;
}