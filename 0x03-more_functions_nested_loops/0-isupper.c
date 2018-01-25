/**
 * _isupper - checks for a uppercase character
 * @c: character to be checked
 *
 * Return: Returns 1 if c is uppercase. Returns 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 'A'  && c <= 'Z')
		return (1);
	else
		return (0);
}
