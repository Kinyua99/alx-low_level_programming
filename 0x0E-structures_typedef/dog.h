#ifndef DOG_H_
#define DOG_H_

/**
 * dot_t - typedef for struct dog
 */
typedef struct dog dog_t;
/**
 * struct dog - struct storing info about a dog
 * @name: dog;s name
 * @owner: dog's owner
 * @age: dog's age
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
