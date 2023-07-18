#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog features
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: pointer to owner of dog
 *
 * Description: represents the features every dog has
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/*Function Prototypes*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
