#ifndef FILE_MAIN
#define FILE_MAIN

char *create_array(unsigned int size, char c);
int _putchar(char c);
char *_strdup(char *str);
void free_grid(int **grid, int height);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);

#endif