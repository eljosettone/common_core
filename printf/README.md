*This activity has been created as part of the 42 curriculum by fanalleg*

## Description
This project aims to recreate the C library printf function, using variadic arguments as well as structures if we plan to implement printf's extra flags.

## Instructions
After cloning this repository withe ``git clone``, use ``make`` to compile. 
You can create a ``main.c`` file to test it out :

```
#include "ft_printf.h"
int main(void)
{
	  ft_printf("Ceci est un %s, voici %i", "test", 42);
      return (0);
}
```

You can than test with 
- Tripouille/printfTester.git



## Resources
https://42-cursus.gitbook.io/guide/1-rank-01/ft_printf -> Great detailed explanation about the printf function and what the project is about, with visual examples.

https://www.youtube.com/watch?v=Hb2m7htiKWM&t=60s&pp=ygUJcHJpbnRmIDQy -> A short video to explain how printf works, especially the va_list/_start/_arg/_end function macro.

I've AI to have a better explanation on why we needed the ``ft_printf.c`` to return an int, and not just write the inputs.

And all my fellow studs mates :D


## Algorithms and Data Structures
I used recursive in the function ``ft_putnbr.c``, ``ft_putunbr.c`` and all the function using the hexadecimal base.
I've also used ``va_list()``, included in the <stdarg.h> library, which is a structure allowing the functions ``va_start()``, ``va_arg()`` and ``va_end()``. The ``va_list`` structure will store the extra arguments, represented by "..." in the ``ft_printf.c`` prototypes. The ``va_list()`` function will declare an array of elements, that we can then manipulate with ``va_start()``, ``va_arg()`` and ``va_end()``.