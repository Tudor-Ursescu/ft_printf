#include "../includes/ft_printf.h"
#include <stdio.h>

int main(void)
{
    int i = 124567;
    char *str = "Hello world";
    char c = 'a';
    unsigned int u = 549543;
    printf("\n\toriginal function\n\n");
    printf("%d\n", printf("%c: %%c checker\n%s: %%s checker\n%p: %%p checker\n%d: %%d checker\n%i: %%i checker\n%u: %%u checker\n%x: %%x checker \n%X: %%X checker\n", c, str, str, i, i, u, i, i));
    printf("\n\tmy fucntion\n\n");
    ft_printf("%d\n", ft_printf("%c: %%c checker\n%s: %%s checker\n%p: %%p checker\n%d: %%d checker\n%i: %%i checker\n%u: %%u checker\n%x: %%x checker \n%X: %%X checker\n", c, str, str, i, i, u, i, i));
    return (0);
}