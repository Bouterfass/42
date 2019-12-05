#include <stdio.h>
#include <stdlib.h>


static int max_length(char const *s1, char const *s2)
{
  int len;
  int i;

  len = 0;
  i = 0;
  while (s1[i])
    i++;
  len = i;
  i = 0;
  while (s2[i])
    i++;
  len = len + i;
  return (len);
}

char *ft_strjoin(char const *s1, char const *s2)
{
  int lenmax;
  char *s3;
  int i;
  int j;

  lenmax = max_length(s1, s2);
  s3 = NULL;
  i = -1;
  j = 0;
  if (!(s3 = (char*)malloc(sizeof(char) * (lenmax + 1))))
    return (NULL);
  while (s1[++i])
    s3[j++] = s1[i];
  i = -1;
  while (s2[++i])
    s3[j++] = s2[i];
  return (s3);
}

/*
int main(int ac, char **av)
{
  (void)ac;
  printf("%d\n", max_length(av[1], av[2]));
  printf("%s\n", ft_strjoin(av[1], av[2]));
  return (0);
}
*/
