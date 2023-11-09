#include "function_pointers.h"
/**
 * array_iterator - okdsnf oknsda nsn snvinsivn
 * @array: dkfn n oisn iojs ojsioadjvo
 * @size: kjfa iojoisja oijsva isjdv
 * @action: kslda hsan h uhscv
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
