# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/24 11:14:51 by louismdv          #+#    #+#              #
#    Updated: 2023/11/27 18:47:27 by louismdv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Définit le compilateur
CC = cc

# Options de compilation
CFLAGS = -Wall -Wextra -Werror -I. -I/include

#include libft library
LIBS = -L/include/libft -lft

# Fichiers sources .c
SOURCES = ft_printf.c\
		ft_printf_s.c\
		ft_printf_c.c\
		ft_printf_xx.c\

# creation des objets: Convertit les noms de fichiers .c en .o
OBJ = $(SOURCES:.c=.o)

# Nom de l'archive à créer
NAME = libftprintf.a

# Règle par défaut
all: $(NAME)

# Créer l'archive à partir des fichiers .o
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Règle de compilation des fichiers sources en fichiers objets
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Nettoie les fichiers compilés et l'archive
clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)

re: clean all

# Règle pour éviter les conflits de noms entre un fichier et une règle
.PHONY: all clean flcean
