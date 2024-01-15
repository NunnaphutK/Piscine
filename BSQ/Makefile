# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/02 15:52:56 by nkiticha          #+#    #+#              #
#    Updated: 2023/08/02 17:06:05 by nkiticha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = main.c checkinput.c checkmap.c solve.c readfile.c show.c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)
clean:
	rm -f *.o
fclean:
	clean
	rm -f $(NAME)
re:
	fclean all
