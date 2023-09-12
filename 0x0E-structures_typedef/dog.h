#ifndef __DOG_H__
#define __DOG_H__

/**
 * struct dog - data about a dog
 * @name: name of the dog struct instance
 * @age: age of dog struct instance
 * @owner: owner of dog struct instance
 *
 * Description: A structure data type used to represent a real world dog object
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
