#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
const char *message = "and that piece of art is useful\" - "
                          "Dora Korpar, 2015-10-19\n";

ssize_t bytes_written = write(STDERR_FILENO, message, 59);
if (bytes_written == -1)
{
return (1);
}
 return (1);
}
