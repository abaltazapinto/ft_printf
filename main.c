#include "libftprintf.h"

int main(void)
{
    char a = 'a';
    char *str = "Jacare"; 
    int i = 100;
    unsigned int ui = 4294967295;
    unsigned int hex = 45632123;

    // %c:
    ft_printf("Char:\n");
    ft_printf("ft_printf: %c | printf: %c\n\n", a, a);

    // %s
    ft_printf("String:\n");
    ft_printf("ft_printf: %s | printf: %s\n\n", str, str);

    // %p
    ft_printf("Pointer:\n");
    ft_printf("ft_printf: %p | printf: %p\n\n", &i, &i);

    // %d
    ft_printf("Decimal:\n");
    ft_printf("ft_printf: %d | printf: %d\n\n", i, i);

    // %i
    ft_printf("Integer:\n");
    ft_printf("ft_printf: %i | printf: %i\n\n", i, i);

    // %u
    ft_printf("Unsigned int:\n");
    ft_printf("ft_printf: %u | printf: %u\n\n", ui, ui);

    // %x
    ft_printf("Hexadecimal lowercase:\n");
    ft_printf("ft_printf: %x | printf: %x\n\n", hex, hex);

    // %X
    ft_printf("Hexadecimal uppercase:\n");
    ft_printf("ft_printf: %X | printf: %X\n\n", hex, hex);

    // %%
    ft_printf("%% Sign:\n");
    ft_printf("ft_printf: %% | printf: %%\n\n");

    return (0);
}
