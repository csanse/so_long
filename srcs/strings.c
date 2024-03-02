#include "so_long.h"

size_t  ft_strlen(char *str)
{
    size_t  len;

    len = 0;
    if (!str)
        return (0);
    while (str[len])
       len++;
    return(len);
}

int ft_strstr(char *str1, char *str2)
{
    int i;

    i = 0;
    if (!str1 || !str2)
        return (0);
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
            break;
        i++;
    }
    return (str1[i] == '\0' && str2[i] == '\0');

}
