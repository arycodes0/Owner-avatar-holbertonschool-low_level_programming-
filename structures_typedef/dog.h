#ifndef DOG_H
#define DOG_H

/**
 *struct dog- This function creates a structure h
 *named dog with it's information.
 *@name: Name of the dog
 *@age: Age of the dog
 *@owner: Name of dog owner
 */

typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
