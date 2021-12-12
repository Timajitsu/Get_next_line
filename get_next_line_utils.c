#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	counter;

	counter = 0;
	while (*s)
	{
		counter++;
		s++;
	}
	return (counter);
}

char	*ft_strchr(char *s, int c)
{
	char	character;

	character = (char)c;
	while (*s)
	{
		if (*s == character)
			return ((char *)s);
		s++;
	}
	if (*s == character)
		return ((char *)s);
	return ((void *)0);
}
static size_t	get_len(char *s1)
{
	size_t	counter;

	counter = 0;
	while (*s1)
	{
		counter++;
		s1++;
	}
	return (counter);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*answ;
	char	*loc;

	if (!s2 || !s1)
		return ((void *)0);
	loc = (char *)malloc(get_len(s1) + get_len(s2) + 1);
	if (loc == (void *)0)
		return ((void *)0);
	answ = loc;
	while (*s1)
	{
		*loc = *s1;
		s1++;
		loc++;
	}
	while (*s2)
	{
		*loc = *s2;
		s2++;
		loc++;
	}
	*loc = *s2;
	return (answ);
}

char	*ft_get_line(char *left_str)
{
	int 	i;
	char	*str;

	i = 0;
	if (!left_str[i])
		return (NULL);
	while (left_str[i] && left_str[i] != '\n')
		i++;
	str = (char *)malloc(sizeof(char)* (i + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (left_str[i] && left_str[i] != '\n')
	{
		str[i] = left_str[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_new_left_str(char *left_str)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (left_str[i] && left_str[i] != '\n')
		i++;
	if (!left_str[i])
	{
		free(left_str);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(left_str) - i + 1));
	if (!str)
		return (NULL);
	i++;
	j = 0;
	while (left_str[i])
		str[j++] = left_str[i++];
	str[j] = '\0';
	free(left_str);
	return (str);
}