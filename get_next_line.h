#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
//#define BUFFER_SIZE 10

int     get_next_line(int fd, char **line);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strchr(char *s, int c);
size_t	ft_strlen(const char *str);
int		ft_free(char **s, int i);
int		ft_tail_cutting(char **str);
int		ft_strjoin(const char **line, const char *static_line);

#endif