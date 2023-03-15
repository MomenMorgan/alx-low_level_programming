#include <stdio.h>
#include <stdlib.h>
#include<string.h>


/**
 *alloc_grid - dynamic 2d array alloc.
 *@width: arrays size
 *@height:arrays count.
 * Return: pointer to pointer of arrays or NULL on Error
 */

#include <stdio.h>
#include <stdlib.h>




int **alloc_grid(int width, int height)
{

int i, j;
int **arr;
if (width <= 0 || height <= 0)
return (NULL);
arr = malloc(sizeof(int *) * height);
if (arr == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
arr[i] = malloc(sizeof(int) * width);

if (arr[i] == NULL)
{
for (i = 0; i < height; i++)
{
free(arr[i]);
}
free(arr);
return (NULL);
}
for (j = 0; j < width; j++)
{
arr[i][j] = 0;
}
}
return (arr);
}
