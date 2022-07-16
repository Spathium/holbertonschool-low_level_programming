/**
 * _strcpy - a function that copies the string
 * @dest: string
 * @src: pointer
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	char *aux = dest;

	while (*src)
		*dest++ = *src++;
	return (aux);
}
