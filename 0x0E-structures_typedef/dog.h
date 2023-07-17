#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - provides info on a dog's x-tics
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: this struct takes the age, name and owner of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

#endif
