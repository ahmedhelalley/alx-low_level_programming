#include "function_pointers.h"
/**
 * int_index - hdsa hsn isnv inv b bvbieubfv
 * @array: jkh djuihuidh uihds uidhcs
 * @size: lkjsd ijsi oifdj id huaui c
 * @cmp: ojdfs ojsd iosj oijd
 * Return: index or -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
