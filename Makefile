S = srcs/
O = objs/

NAME = so_long

CC = gcc
CFLAGS = -Wall -Werror -Wextra

RM = -rm -rf

SRCS =  $Serrors.c\
		$Smain.c\
		$Sstrings.c\
		$Swrite.c

OBJS =  $Oerrors.o\
		$Omain.o\
		$Ostrings.o\
		$Owrite.o

F = -fsanitize=address

all: $(NAME)

$O:
	@echo "Creating Objects Folder...."
	mkdir $@
	@echo "Folder created."

$(OBJS): | $O

$(OBJS): $O%.o: $S%.c
	$(CC) $(CFLAGS) -c -I incs/ $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	$(RM) $(OBJS) $O

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: fclean clean all