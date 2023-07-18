#include <stdio.h>
#include <unistd.h>

void	ft_ft(int *nbr);
void	ft_ultimate_ft(int *********nbr);
void	ft_swap(int *p1, int *p2);
void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_ultimate_div_mod(int *div, int *mod);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_rev_int_tab(int *tab, int size);
void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int		p1;
	int		p2;
	int		*ptr1;
	int		*ptr2;

	printf("************************\n");
	printf("ex00 - 42 :\n");
	p1 = 1111;
	ft_ft(&p1);
	printf(" 42 : %d\n", p1);
	printf("\n");
	printf("**************************\n");
	printf("ex01 - 42 : \n");
	p1 = 11111111;
	int *pt1 = &p1;
	int **pt2 = &pt1;
	int ***pt3 = &pt2;
	int ****pt4 = &pt3;
	int *****pt5 = &pt4;
	int ******pt6 = &pt5;
	int *******pt7 = &pt6;
	int ********pt8 = &pt7;
	int *********pt9 = &pt8;
	ft_ultimate_ft(pt9);
    printf("res : %d\n", p1);
    printf("**************************\n");
	printf("ex02 -- swap positions\n");
	printf("\n");
	p2 = 2222;
	printf("before p1 : %d -- p2 : %d\n", p1, p2);
	ft_swap(&p1, &p2);
	printf("after  p1 : %d -- p2 : %d\n", p1, p2);
	printf("**************************\n");
	printf("ex03 -- divide 16 / 4 \n");
	ptr1 = &p1;
	ptr2 = &p2;
	ft_div_mod(16, 4, ptr1, ptr2);
	printf("div : %d -- mod : %d", *ptr1, *ptr2);
	printf("\n");
	printf("**************************");
	printf("ex04 -- 4 -- 0 \n");
	*ptr1 = 16;
	*ptr2 = 4;
	ft_ultimate_div_mod(ptr1, ptr2);
	printf("div : %d -- mod : %d", *ptr1, *ptr2);
	printf("\n");
	printf("**************************");
	printf("ex05\n");
	char *str = "abcdefghaijkL";
	ft_putstr(str);
	printf("\n");
	printf("**************************");
	printf("ex06 devuelve numero de caracteres en string\n");
	p1 = ft_strlen(str);
	printf("string : %s -- number of chars : %d\n", str, p1);
	printf("**************************");
	printf("ex07\n");
	int tab[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int size = 10;
	for (int j = 0; j < size ; j++)
	{
		printf("%d", tab[j]);
	}
	ft_rev_int_tab(tab, size);
	printf("\n");
	for (int j = 0; j < size ; j++)
	{
		printf("%d", tab[j]);
	}	
	printf("\n");
	printf("**************************");
	printf("ex08\n");
	for (int k = 0; k < size ; k++)
	{
		printf("%d", tab[k]);
	}	
	ft_sort_int_tab(tab, size);
	printf("\n");
	for (int l = 0; l < size ; l++)
	{
		printf("%d", tab[l]);
	}	
	printf("\n");
	return(0);
}
