#include <stdio.h>
#include <stdlib.h>
#include<string.h>


/**
 *alloc_grid - dynamic 2d array alloc.
 *@width: arrays size
 *@height:arrays count.
 * Return: pointer to pointer of arrays or NULL on Error
 */

int **alloc_grid(int width, int height)
{
int i, c;
int j = 0;
int **arr;
int flag = 1;
if (width <= 0 || height <= 0)
return (NULL);
arr = malloc(sizeof(int *) * height);
if (arr == 0)
return (0);
for (i = 0 ; i < height ; i++)
{
arr[i] = malloc(sizeof(int) * width);
if (arr[i] == 0)
{
flag = 1;
break;
}
}
for (i = 0 ; i < height; i++)
{
for (j = 0 ; j < width; j++)
{
arr[i][j] = 0;
}
}
if (flag == 1)
{
for (c = 0; c < i ; c++)
{
free(arr[i]);
}
free(arr);
}
return (arr);
}
