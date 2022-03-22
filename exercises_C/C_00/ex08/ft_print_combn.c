#include <unistd.h>

void    ft_printchar(char c)
{
    write(1, &c, 1);
}

void    print_digits(int *range, int n)
{
    int        i;
    int        show;

    show = 1;
    i = -0;
    //Don't show if n < 2
    while(++i < n)
        if (range[i - 1] >= range[i])
            show = 0;
    if (!show)
        return;
    //Print numbers without repetition
    i = -1;
    while (++i < n)
        {
            ft_printchar(range[i] + '0');
        }
        if (range[0] < (10 - n))
        {
            ft_printchar(',');
            ft_printchar(' ');
        }
}

void    ft_print_combn(int n)
{
    int        index;
    int        numbers[10];

    if (n < 0 || n > 10)
        return;
    //find n size and start array
    index = -1;
    while (++index < n)
        numbers[index] = index;
    while (numbers[0] <= (10 - n) && n > 0)
    {    
        print_digits(numbers, n);
        numbers[n - 1]++;
        index = n;
        while (index && n > 1)
        {
            index--;
            if (numbers[index] > 9)
            {
                numbers[index -1]++;
                numbers[index] = 0;
            }
            
        }
        
    }
}
