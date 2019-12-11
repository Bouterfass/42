#include <stdio.h>
#include <stdlib.h>

static int count_word(char const *str, char c)
{
  int i;
  int count;
  int lenstr;

  i = 0;
  lenstr = 0;
  count = 1;
  while (str[lenstr])
    lenstr++;
  if (lenstr == 0)
    return (0);
  while (str[i++])
  {
    if (str[i] == c)
      if (i < lenstr - 1 && str[i + 1] != c)
        count++;
  }
//  printf("count word %d\n",count);
  return (count);
}

static int find_word_size(char const *str, int index, char c)
{
  int count_letters;

  count_letters = 0;
  while (str[index] == c &&  str[index])
    index++;
  while (str[index] != c && str[index])
  {
    count_letters++;
    index++;
  }
  //printf("count letter %d\n",count_letters);
  return (count_letters);
}

static int find_first_letter(char const *str, int index, char c)
{
  while (str[index] == c && str[index])
    index++;
//  printf("index %d\n",index );
  return (index);
}

char    **ft_split(char const *s, char c)
{
    char **chaine;
    int i;
    int j;
    int index;
    int fws;

    i = 0;
    j = 0;
    chaine = NULL;

    index = find_first_letter(s, 0, c);
    if (!(chaine = (char**)malloc(sizeof(char*) *
        (count_word(s, c) + 1))))
          return (NULL);
    while (i < count_word(s, c))
    {
      index = find_first_letter(s, index, c);
      fws = find_word_size(s, index, c);
      if (!(chaine[i] = (char*)malloc(sizeof(char) * (fws + 1))))
        return (NULL);
      while (s[index] != c && s[index])
      {
  //      printf("chaine[%d][%d] = %c\n", i,j, s[index]);
        chaine[i][j++] = s[index++];
      }
      j = 0;
      i++;
    }
    return (chaine);
}



/*
int		main(int ac, char **av)
{
	(void)ac;
	char **tab;


	tab = ft_split(av[1], 'o');
	int i = 0;
	int j = 0;

		while (i < count_word(av[1], 'o'))
		{
			while (tab[i][j] != '\0')
			{
				printf("%c", tab[i][j]);
				j++;
			}
			printf("\n");
			j = 0;
			i++;
		}

	return (0);
}
*/
