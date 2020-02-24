# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/13 18:42:28 by dboyer            #+#    #+#              #
#    Updated: 2020/01/02 16:02:59 by dboyer           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS 	=	libftprintf/ft_atoi.c\
			libftprintf/ft_isalpha.c\
			libftprintf/ft_isdigit.c\
			libftprintf/ft_isalnum.c\
			libftprintf/ft_isascii.c\
			libftprintf/ft_isprint.c\
			libftprintf/ft_islower.c\
			libftprintf/ft_isupper.c\
			libftprintf/ft_toupper.c\
			libftprintf/ft_str_toupper.c\
			libftprintf/ft_str_tolower.c\
			libftprintf/ft_tolower.c\
			libftprintf/ft_strncmp.c\
			libftprintf/ft_memcmp.c \
			libftprintf/ft_strlen.c\
			libftprintf/ft_strlcpy.c\
			libftprintf/ft_strlcat.c\
			libftprintf/ft_strchr.c\
			libftprintf/ft_strnstr.c\
			libftprintf/ft_strdup.c\
			libftprintf/ft_memset.c\
			libftprintf/ft_memmove.c\
			libftprintf/ft_bzero.c\
			libftprintf/ft_memchr.c\
			libftprintf/ft_calloc.c\
			libftprintf/ft_memcpy.c\
			libftprintf/ft_substr.c\
			libftprintf/ft_strjoin.c\
			libftprintf/ft_strtrim.c\
			libftprintf/ft_cinset.c\
			libftprintf/ft_split.c\
			libftprintf/ft_itoa.c\
			libftprintf/ft_strmapi.c\
			libftprintf/ft_putchar_fd.c\
			libftprintf/ft_putstr_fd.c\
			libftprintf/ft_isspace.c\
			libftprintf/ft_strrchr.c\
			libftprintf/ft_putendl_fd.c\
			libftprintf/ft_putnbr_fd.c\
			libftprintf/ft_memccpy.c\
			libftprintf/ft_putchar.c\
			libftprintf/ft_putstr.c\
			libftprintf/ft_isflag.c\
			libftprintf/ft_getflag.c\
			libftprintf/ft_putnbr_unsigned.c\
			libftprintf/ft_format.c\
			libftprintf/ft_minmax_nb.c\
			libftprintf/ft_minmax.c\
			libftprintf/ft_print_char.c\
			libftprintf/ft_print_str.c\
			libftprintf/ft_print_nb.c\
			libftprintf/ft_print_unsigned_nb.c\
			libftprintf/ft_putnstr.c\
			libftprintf/ft_nbrlen.c\
			libftprintf/ft_nbrlen_base.c\
			libftprintf/ft_nbrlen_unsigned.c\
			libftprintf/ft_abs.c\
			libftprintf/ft_parsing.c\
			libftprintf/ft_minmax_unsigned_nb.c\
			libftprintf/ft_putnbr_hex.c\
			libftprintf/ft_strrev.c\
			libftprintf/ft_minmax_nb_hex.c\
			libftprintf/ft_print_nb_hex.c\
			libftprintf/ft_print_memory.c\
			libftprintf/ft_minmax_memory.c\
			libftprintf/ft_print.c\
			libftprintf/ft_minmax_str.c\
			libftprintf/ft_printf.c\
			libftprintf/ft_print_percent.c\
			libftprintf/ft_print_space_before.c\
			libftprintf/ft_print_space_after.c\
			libftprintf/ft_print_zero_padding.c\

OBJS 	=	$(SRCS:.c=.o)

CFLAGS 	= -Werror -Wall -Wextra

CC 		= gcc

CLEAN = clean

RM	=	rm -f

$(NAME)	: $(OBJS)
		ar rc libftprintf.a $(OBJS)

all		:	$(NAME)

clean	:
		$(RM) $(OBJS) $(BON_OBJS)

fclean	:	clean
		$(RM) $(NAME)

re		:	fclean all

.PHONY	: all clean fclean re bonus