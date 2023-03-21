#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure for dog info.
 * @name: varible
 * @age: varible
 * @owner:varible
 */
struct  dog
{
char *name;
float age;
char *owner;
};
#endif
#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
