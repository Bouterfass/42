#include <stdio.h>
#include <stdlib.h>

static int ft_strlen(char const *str)
{
    unsigned int i;
    
    i = 0;
    while (str[i])
        i++;
    return (i);
}

char f(unsigned int i, char c)
{
   return (c + i);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    char            *res;

    if (!(res = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
        return (NULL);
    if  (!s)
        return (NULL);
    while (s[i])
    {
        res[i] = (*f)(i, s[i]);
        i++;
    }
    res[i] = '\0';
    return(res);
}


int main(int ac, char **av)
{
    (void)ac;
    printf("%s\n\n", av[0]);
    printf("result %s\n", ft_strmapi(av[1], f )) ;
    return (0);
}