# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/24 11:14:51 by louismdv          #+#    #+#              #
#    Updated: 2023/11/24 11:18:37 by louismdv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Fichiers .c
SOURCES = ft_printf.c

# Convertit les noms de fichiers .c en .o
OBJ = $(SOURCES:.c=.o)

# Définit le compilateur
CC = cc

# Options de compilation
CFLAGS = -Wall -Wextra -Werror -I.

# Nom de l'archive à créer
NAME = libftprintf.a

# Règle par défaut
all: $(NAME)

# Créer l'archive à partir des fichiers .o
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Règle de compilation des fichiers sources en fichiers objets
.o:.c
	$(CC) $(CFLAGS) -c $< -o $@

# Nettoie les fichiers compilés et l'archive
clean:
	rm -f $(OBJ) $(BOBJ)

fclean:
	rm -f $(OBJ) $(NAME) $(BOBJ)

re: clean all

# Règle pour éviter les conflits de noms entre un fichier et une règle
.PHONY: all clean flcean
