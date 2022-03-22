#include "ex00/ft_ft.c"
#include "ex01/ft_ultimate_ft.c"
#include "ex02/ft_swap.c"
#include "ex03/ft_div_mod.c"
#include "ex04/ft_ultimate_div_mod.c"
#include "ex05/ft_putstr.c"
#include "ex06/ft_strlen.c"
#include "ex07/ft_rev_int_tab.c"
#include "ex08/ft_sort_int_tab.c"
#include <stdio.h>

int	main(void)
{
	printf("--------EX00-------\n");
    int	x;

	x = 9;
	printf("Antes de mudar: %d\n", x);
	ft_ft(&x);
	printf("Depois de mudar: %d\n", x);
    printf("--------EX01-------\n");
    int	v;
	int	*nbr1;
	int	**nbr2;
	int	***nbr3;
	int	****nbr4;
	int	*****nbr5;
	int	******nbr6;
	int	*******nbr7;
	int ********nbr8;
	
	v = 10;
	nbr1 = &v;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;

	printf("Antes de mudar: %d\n", ********nbr8);
	ft_ultimate_ft(&nbr8);
	printf("Depois de mudar: %d\n", ********nbr8);
    printf("--------EX02-------\n");
    int b;
	int c;
	
	b = 9;
	c = 8;

	printf("Antes de mudar: %d, %d\n", b, c);
	ft_swap(&b,&c);
	printf("Depois de mudar: %d, %d\n", b, c);
    printf("--------EX03-------\n");
    int	d;
	int	e;
	int	f;
	int	g;

	d = 30;
	e = 4;
	g = e + d;
	f = e + d;
	printf("%d, %d, %d, %d\n", d, e, f, g);
	ft_div_mod(d, e, &f, &g);
	printf("%d, %d, %d, %d\n", d, e, f, g);
    printf("--------EX04-------\n");
    int	m;
	int	n;

	m = 30;
	n = 4;
	printf("%d, %d\n", m, n);
	ft_ultimate_div_mod(&m, &n);
	printf("%d, %d\n", m, n);
    printf("--------EX05-------\n");
    char a[] = "palavra";

	ft_putstr(&a[0]);
    printf("\n");
    printf("--------EX06-------\n");
	char k[14] = "asodemandiroam";
	int result;
	
	result = ft_strlen(k);
	printf("%d\n", result);    
    printf("--------EX07-------\n");
    int r[4];
	int s;
	int *ponteiro;
	
	ponteiro = &r[0];
	r[0] = 6;
	r[1] = 8;
	r[2] = 7;
	r[3] = 0;
	s = 4;
	printf("%d, %d, %d, %d\n", r[0], r[1], r[2], r[3]);
	ft_rev_int_tab(ponteiro, s);
	printf("%d, %d, %d, %d\n", r[0], r[1], r[2], r[3]);
    printf("--------EX08-------\n");
    int t[4];
	int u;
	
	t[0] = 40;
	t[1] = 8;
	t[2] = -75;
	t[3] = -69;
	u = 4;
	printf("%d, %d, %d, %d\n", t[0], t[1], t[2], t[3]);
	ft_sort_int_tab(&t[0], u);
	printf("%d, %d, %d, %d\n", t[0], t[1], t[2], t[3]);
}