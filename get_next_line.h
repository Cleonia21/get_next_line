#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include			<stdio.h>
# include			<stdlib.h>
# include			<fcntl.h>
# include			<unistd.h>

typedef struct s_list
{
	char			*static_line;
	int				fd;
	struct s_list	*next;
}					t_list;

size_t				ft_strlen(const char *str);
void				*ft_calloc(size_t count, size_t size);
char				*ft_strchr(char *s, int c);
int					ft_strjoin(const char **line, const char *static_line);
int					get_next_line(int fd, char **line);
int					ft_tail_cutting(char **str);
int					ft_free(char **s, int i);

#endif