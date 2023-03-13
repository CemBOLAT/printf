# printf
> # Summary
> The goal of this project is pretty straightforward. You will recode printf(). You will mainly learn about using a variable number of arguments. How cool is that?? It is actually pretty cool :)

# Mandatory Part

| Program NAME | libftprintf.a |
| ------ | ------ |
| Prototype | int ft_printf(const char *, ...); |
| Turn in files | Makefile, *.h, */*.h, *.c, */*.c |
| Parameters | fd: The file descriptor to read from |
| External functs. | malloc, free, write, va_start, va_arg, va_copy, va_end |
| Description | Write a library that contains ft_printf(), a function that will mimic the original printf()|

You have to implement the following conversions:
- %c Prints a single character.
- %s Prints a string (as defined by the common C convention).
- %p The void * pointer argument has to be printed in hexadecimal format.
- %d Prints a decimal (base 10) number.
- %i Prints an integer in base 10.
- %u Prints an unsigned decimal (base 10) number.
- %x Prints a number in hexadecimal (base 16) lowercase format. 
- %X Prints a number in hexadecimal (base 16) uppercase format.
- %% Prints a percent sign.
