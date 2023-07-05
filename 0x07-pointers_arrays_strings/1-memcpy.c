/**
 * _memcpy - copies bytes
 *
 * @dest: destination of the copied data
 * @src: source of the data to be copied
 * @n: byte count to be coped
 *
 * Return: char *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (dest);
}
