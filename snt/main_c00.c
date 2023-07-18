#include <stdio.h>
#include <unistd.h>


void ft_putchar(char c);
void ft_print_alphabet(void);
void ft_print_reverse_alphabet(void);
void ft_print_numbers(void);
void ft_is_negative(int n);
void ft_print_comb(void);
void ft_print_comb2(void);
void ft_putnbr(int nb);
void ft_print_combn(int n);

int main(void)
{
	//Exercise 00
    printf("**************************"); 
	printf("ex00\n");
	ft_putchar('A');
	printf("\n");

	//Exercise 01
    printf("**************************");
	printf("ex01\n");	
	ft_print_alphabet();
	printf("\n");	

	//Exercise 02
	printf("**************************"); 
	printf("ex02\n");	
	ft_print_reverse_alphabet();
	printf("\n");

	// exercise 03
	printf("**************************"); 
	printf("ex03\n");	
	ft_print_numbers();
	printf("\n");

	//exercise 04
	printf("**************************"); 
	printf("ex04 -- Positivo Nulo Negativo\n");	
	ft_is_negative(10);
	ft_is_negative(0);
	ft_is_negative(-10);
	printf("\n");

	// exercise 05
	printf("**************************"); 
	printf("ex05\n");	
    ft_print_comb();
	printf("\n");	


   	// exercise 06
	printf("**************************"); 
	printf("ex06\n");	
    ft_print_comb2();
	printf("\n"); 

	//exercise 07
	printf("**************************"); 
	printf("ex07 -- Muestra 42\n");	
	ft_putnbr(1234567890);
	printf("\n"); 
	ft_putnbr(-1234567890);
	printf("\n"); 
	ft_putnbr(0);
	printf("\n"); 

    //exercise 08
	printf("**************************"); 
	printf("ex08\n");	
        ft_print_combn(2);   
	printf("\n");

    return 0;
}    
