# Notes for printf
## Overview of the project.
- Create a function that mimic que original printf function.
Authorized functions to use: 
+ libft library created on previous project.
+ malloc, free, write, va_start, va_arg, va_copy, va_end.
+ <stdlib.h> //for malloc, free
+ <unistd.h> //for write
+ <stdarg.h> // for va_start, va_arg, va_copy
+ <stdio.h> // for comparation with original printft (but not autorhised to use, just for testing purposes)

You have to implement the following conversions:
+ [x] %c Prints a single character. => char (needs to check the return of the function)
+ [x] %s Prints a string (as defined by the common C convention). => (needs to check the return of the function) 
+ [x] %p The void * pointer argument has to be printed in hexadecimal format. => void *ptr (needs to check the return of the function)
+ [x] %d Prints a decimal (base 10) number. => int
+ [x] %i Prints an integer in base 10. (needs to check the return of the function)
+ [x] %u Prints an unsigned decimal (base 10) number. (needs to check the return of the function)
+ [x] %x Prints a number in hexadecimal (base 16) lowercase format. => 
+ [x] %X Prints a number in hexadecimal (base 16) uppercase format. =>
+ [x] %% Prints a percent sign. => just a %

## Description of function
`printf` is used to print formatted text and produces output according to a specified format.

## Return value
Returns the number of characters printed, excluding the null byte used to terminate output to strings.

## Notes
- When looking at the function prototype for `printf()`, take note of the "..." in the argument list. This indicates that `printf()` is a variadic function.
-steps
[ ] - How to format strings
[ ] - How does variadic strings work?

***What is  a variadic function??***
Is a function that can take a varible number of arguments (including zero arguments) of <u>different types.</u>

***Search, study and understand type promotion***
- This is happening implicity on the function ft_print_format.c
on the if (specifier == 'c')
		ft_putchar(va_arg(ap, int));
- The c is being passed as int, but is a char. This is because of type promotion.
- For more information, search on recreating mini printf by Oceano, minute 20:00.

## Main Challenges ##
These are some notes that I am writing after finishing this project to document my journey with the construction of this function.
+ I had some problems with its construction.
+ My main problems were:
+ Errors with the %s when an invalid string is passed.
+ Bugs related to negative numbers with the %u.
+ I had a hard time solving the %p issue because I couldn't pass it directly to the ft_putnbr_hex function. I also had problems discovering that I needed to print "0x" before the address. For this, a colleague helped me.

## Points to improve ##
I am not currently interested in completing the bonuses, but I will revisit the code later to identify potential areas for improvement.

## Useful links for this function ##
Better understanding of the printf function
https://www.it.uc3m.es/pbasanta/asng/course_notes/input_output_printf_en.html

Understanting Printf Video - nikito
https://www.youtube.com/watch?v=Hb2m7htiKWM

ft_printf - 42Born2Code (Francophone)
https://www.youtube.com/watch?v=xgK-U1Jj92Q

Recreating a mini printf - Oceano
https://www.youtube.com/watch?v=byRw36Y3Hjs

PrintF project breakdown playlist - hyperspace code 
https://www.youtube.com/watch?v=ASyB26Onryw&list=PL3m_SDxfr0ruig_UWOb9OXP_AiCmRtPgU

What is a va_list in c? - CodeVault
https://www.youtube.com/watch?v=oDC208zvsdg

Create a diagram of the function in the future
https://app.diagrams.net/