#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - function for dog attribute
 *
 * @name: param for the name of the dog
 * @age: parsam for the age of tyhe dog
 * @owner: param for the name or owner of the dog
 *
 * Descrition: this states the attribute of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for dog structure
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
