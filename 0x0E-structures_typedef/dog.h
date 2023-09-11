#ifndef DOG_H
#define DOG_H


/**
 * struct dog - information of the dog
 * @name: name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Description: Define a new type struct dog with the following elements
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_d - typedef for struct dog
 */
typedef struct dog dog_d;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_d *new_dog(char *name, float age, char *owner);
void free_dog(dog_d *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
