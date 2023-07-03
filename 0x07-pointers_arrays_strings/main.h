#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdio.h>
/**
 *void prototypes(void)
 *int prototypes(int)
 *char prototypes(char)
 */
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);

#endif /* MAIN_H */