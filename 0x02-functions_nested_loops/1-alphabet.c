#include <stdio.h>
/* this is a betty styled this format in c coding */
/**
 *main - print_alphabet prototype with putchar
 *Return: zero
 */
ft_print_alphabet(void)
{
char    letter;
letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
}
int main(void)
{
ft_print_alphabet();
return (0);
}
