#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure definition of a dog
 * @name: character * Return: Always 0.
 * @age: intenger
 * @owner: Character string
*/

  struct dog
  {
  char *name;
  float age;
  char *owner;
  };

/**
 * typedef dog_t - define a new type of struct
 */

  typedef struct dog dog_t;
  void init_dog(struct dog *d, char *name, float age, char *owner);
  void print_dog(struct dog *d);
  dog_t *new_dog(char *name, float age, char *owner);
  void free_dog(dog_t *d);


#endif
