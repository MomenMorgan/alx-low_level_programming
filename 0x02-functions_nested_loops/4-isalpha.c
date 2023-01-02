#include "main.h"
/**
* _isalpha - checks if the value alphabit or not
*@c:single letter input
*Return:1 if the value is letter and 0 if it is false
*/

int _isalpha(int c)
{

if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
return (1);
else
return (0);


}
