#include "./rush02.h"

char    *ft_read_file2(char    *buffer, char   *new_dict)
{
    int file;
    int    read_byte;

	read_byte = 0;
    file = open(new_dict, O_RDONLY);
    if (file == -1)
		return ("\0");
	read_byte = read(file, buffer, BUFFER_SIZE);
    buffer[read_byte] = '\0';
    close(file);
    return (buffer);
}