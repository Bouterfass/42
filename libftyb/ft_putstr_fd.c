#include <unistd.h>


static int my_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

void ft_putstr_fd(char *s, int fd)
{
    if (s)
         write(fd, s, my_strlen(s));
}

int main()
{
    ft_putstr_fd("lol", 1);
    return (0);
}