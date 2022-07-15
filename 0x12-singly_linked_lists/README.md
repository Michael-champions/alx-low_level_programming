For this project, we expect you to look at this concept:



Data Structures





Resources

Read or watch:



Linked Lists

Google

Youtube

Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:



General

When and why using linked lists vs arrays

How to build and use linked lists

# this is about link list
# by Michael Attah

and here are the data structure that i will be using here

# /**

 * struct list_s - singly linked list

 * @str: string - (malloc'ed string)

 * @len: length of the string

 * @next: points to the next node

 *

 * Description: singly linked list node structure

 */

typedef struct list_s

{

    char *str;

    unsigned int len;

    struct list_s *next;

} list_t;
