/*
** EPITECH PROJECT, 2018
** GNL
** File description:
** made by Joseph Chartois
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"
#include "my.h"

char	*clean_str(char *str)
{
	int idx = 0;
	char *str_new = NULL;

	if (str == NULL)
		return (NULL);
	while (str[idx] != '\0') {
		idx++;
	}
	str_new = malloc(sizeof(char) * (idx + 1));
	if (str_new == NULL)
		return (NULL);
	idx = 0;
	while (str[idx] != '\0') {
		str_new[idx] = str[idx];
		idx++;
	}
	str_new[idx] = '\0';
	free(str);
	return (str_new);
}

char	*pseudo_realloc(char *str_old, int byte, int *idx)
{
	char *str_new = NULL;
	int idx2 = 0;
	int str_lgth = 0;

	while (str_old && str_old[str_lgth] != '\0')
		str_lgth++;
	str_new = malloc(sizeof(char) * (str_lgth + byte + 1));
	if (str_new == NULL)
		return (NULL);
	while (idx2 != (str_lgth + byte)) {
		str_new[idx2] = 'A';
		idx2++;
	}
	str_new[idx2] = '\0';
	idx2 = -1;
	while (str_old && str_old[++idx2] != '\0')
		str_new[idx2] = str_old[idx2];
	(*idx) = 0;
	free(str_old);
	return (str_new);
}

char	*create_str(char *buf, int *idx, int byte, int fd)
{
	char *str = malloc(sizeof(char) * (READ_SIZE + 1));
	int idx2 = 0;

	if (str == NULL)
		return (NULL);
	while (buf && buf[*idx] != '\n') {
		if (buf && buf[*idx] == '\0') {
			byte = read(fd, buf, READ_SIZE);
			if (!buf || byte <= 0)
				return (NULL);
			buf[byte] = '\0';
			str[idx2] = '\0';
			str = pseudo_realloc(str, byte, idx);
		} else {
			str[idx2] = buf[*idx];
			idx2++;
			(*idx)++;
		}
	}
	str[idx2] = '\0';
	return (str);
}

char	*get_next_line(int fd)
{
	static char buf[READ_SIZE + 1];
	static int idx = 0;
	static int byte = 0;
	char *str = NULL;

	if (fd == -1 || READ_SIZE <= 0)
		return (NULL);
	if (idx == 0) {
		byte = read(fd, buf, READ_SIZE);
		if (byte <= 0 || buf == NULL)
			return (NULL);
		buf[byte] = '\0';
	}
	str = create_str(buf, &idx, byte, fd);
	idx++;
	if (str == NULL)
		return (NULL);
	str = clean_str(str);
	return (str);
}
