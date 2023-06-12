#include "main.h"
#include <stdlib.h>

/**
* read_textfile- a function that reads a text file and
* prints it to the POSIX standard output.
* @filename: const char
* @letters: number of letters
* Return: the actual number of letters it
* could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t file, let, t;
char *text;
text = malloc(letters);
if (text == NULL)
return (0);
if (filename == NULL)
return (0);
file = open(filename, O_RDONLY);
if (file == -1)
{
free(text);
return (0);
}
let = read(file, text, letters);
t = write(STDOUT_FILENO, text, let);
close(file);
return (t);
}
