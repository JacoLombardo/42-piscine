#!/bin/bash

CFLAGS="-Wall -Werror -Wextra"

rm -f libft.a

cc -c $CFLAGS *.c

ar rc libft.a *.o

rm -f *.o
