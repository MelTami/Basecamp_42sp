#include "./ex00/ft_putchar.c"
#include "./ex01/ft_print_alphabet.c"
#include "./ex02/ft_print_reverse_alphabet.c"
#include "./ex03/ft_print_numbers.c"
#include "./ex04/ft_is_negative.c"
#include "./ex05/ft_print_comb.c"
#include "./ex06/ft_print_comb2.c"
#include "./ex07/ft_putnbr.c"
#include "./ex08/ft_print_combn.c"
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	printf("-----EX00-----\n");
    char a = '0';
	ft_putchar(a);
	printf("\n-----EX01-----\n");
    ft_print_alphabet();
    printf("\n-----EX02-----\n");
    ft_print_reverse_alphabet();
    printf("\n-----EX03-----\n");
    ft_print_numbers();
    printf("\n-----EX04-----\n");
    printf("Deveria sair: P\n");
    ft_is_negative(0);
    write(1, "\n", 1);
    printf("Deveria sair: N\n");
    ft_is_negative(-5);
    write(1, "\n", 1);
    printf("Deveria sair: P\n");
    ft_is_negative(110);
    printf("\n-----EX05-----\n");
    ft_print_comb();
    printf("\n-----EX06-----\n");
    ft_print_comb2();
    printf("\n-----EX07-----\n");
    printf("Devia ser: -9\n");
	ft_putnbr(-9);
	write(1, "\n", 1);
	printf("Devia ser: -2147483648\n");
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	printf("Devia ser: -2147483648\n");
	ft_putnbr(2147483648);
	write(1, "\n", 1);
	printf("Devia ser: 2147483647\n");
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	printf("Devia ser: 0\n");
	ft_putnbr(0);
	write(1, "\n", 1);
	printf("Devia ser: 9\n");
	ft_putnbr(9);
	write(1, "\n", 1);
    printf("-----EX08-----\n");
    ft_print_combn(1);
    write(1, "\n", 1);
    ft_print_combn(10);
    write(1, "\n", 1);
}