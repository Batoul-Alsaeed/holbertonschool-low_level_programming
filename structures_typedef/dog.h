#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure for dog details
 * @name: Name of the dog (string)
 * @age: Age of the dog (float)
 * @owner: Owner of the dog (string)
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Define dog_t as a new name for struct dog */
typedef struct dog dog_t;

/* Function prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H */

