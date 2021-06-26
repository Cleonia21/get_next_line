#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

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

t_list				*ft_free_list(t_list *list, t_list *tmp);
t_list				*ft_new_list(int fd);
size_t				ft_strlen(const char *str);
void				ft_free_list_util(t_list *list, int fd);
void				*ft_calloc(size_t count, size_t size);
char				*ft_strchr(char *s, int c);
int					ft_strjoin(const char **line, const char *static_line);
int					ft_get_line(int fd, char **line, char **static_line);
int					get_next_line(int fd, char **line);
int					ft_tail_cutting(char **str);

#endif