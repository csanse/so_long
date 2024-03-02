#ifndef SO_LONG_H

# define SO_LONG_H

# include "errors.h"
# include <stdlib.h>
# include "colors.h"

/* ERROR FUNCTIONS */
void    process_error(int error);

/* STRINGS FUNCTIONS */
size_t  ft_strlen(char *str);

/* WRITE FUNCTIONS */
void    ft_putstr(char *str, char *color);
int     ft_strstr(char *str1, char *str2);

#endif