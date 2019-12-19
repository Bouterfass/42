#include <stdio.h>
#include <stdlib.h>


static int is_in_set(char const c, char const *set)
{
  int i;

  i = 0;
  while (set[i])
  {
    if (set[i] == c)
      return (1);
    i++;
  }
  return (0);
}

static int get_last(char const *str, char const *set)
{
  int len;

  len = 0;
  while (str[len])
    len++;
  len--;
//  printf("lennnnn %d\n", len);
//  printf("in se t  str[%d] = %c  -> is in set = %d\n", len, str[len], is_in_set(str[len], set));
  while (len > 0 && is_in_set(str[len], set) == 1)
  {
    len--;
  }
//  printf("last %d\n", len);
  return (len);
}

static int get_first(char const *str, char const *set)
{
  int i;

  i = 0;
  while (str[i] && is_in_set(str[i], set) == 1)
    i++;
//  printf("first %d\n", i);
  return (i);
}


char *ft_strtrim(char const *s1, char const *set)
{
  int len;
  char *new_s1;
  int deb;
  int fin;
  int i;

  i = 0;
  len = get_last(s1, set) - get_first(s1, set);
  deb = get_first(s1, set);
  fin = get_last(s1, set);
  if(!(new_s1 =(char*)malloc(sizeof(char) * (len + 1))))
    return (NULL);
  while (deb <= fin)
  {
  //  printf(" i = %d <=> j = %d ", deb, fin);
    new_s1[i] = s1[deb];
  //  printf("new %c\n", new_s1[i]);
    i++;
    deb++;
  }
  new_s1[i] = '\0';
  return (new_s1);
}

/*
int main(int ac, char **av)
{
  (void)ac;
  printf("%s\n", ft_strtrim(av[1],av[2]));
  return (0);
}
*/
