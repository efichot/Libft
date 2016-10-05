#include "./includes/libft.h"

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
  int i;

  i = 0;
  if (!s1 || !s2)
    return (NULL);
  if (!n)
    return (1);
  if (ft_strncmp(s1, s2, n) == 0)
    return (1);
  return (0);
}