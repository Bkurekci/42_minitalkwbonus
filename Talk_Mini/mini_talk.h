#ifndef MINI_TALK_H
# define MINI_TALK_H

# include "stdio.h"
# include "unistd.h"
# include "signal.h"
# include "stdlib.h"

void	ft_putstr(char *s);
void	ft_bzero(void *s, int n);
int		convert_decimal(int *array);
int		*ft_calloc(size_t count, size_t size);
int		ft_atoi(const char *s);
void	ft_putnbr(int n);
void	ft_putchar(char a);
int		*convert_binary(int n);

#endif
