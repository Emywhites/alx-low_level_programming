#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - a struct that creates a dog info
 *
 * @name: the name of the dog
 * @age: the dogs age
 * @owner: the owner of the dog
 *
 * Desc: first struct with alx
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
