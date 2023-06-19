#ifndef DOG_H
#define DOG_H

/**
 * struct dog - this contains  a dog's basic info
 * @name: this represents First member
 * @age: this represents Second member
 * @owner: this represents Third member
 *
 * Description: contains Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - this contains or represent typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
