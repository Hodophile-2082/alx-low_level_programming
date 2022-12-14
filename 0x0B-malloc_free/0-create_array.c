#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * create_array - Creates an array of chars,
 *               and initializes it with a specific char.
 * @size: the size of the array to be initialized.
 * @c: the specific character to initialize the array with
 * Return: If size == 0 or the function fails - NULL.
 *          Otherwise - a pointer to the array.
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr_ay;
if (size == 0)
{
return (NULL);
}
arr_ay = malloc(sizeof(char) * size);
if (arr_ay == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
arr_ay[i] = c;
}
return (arr_ay);
}
