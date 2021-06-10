SRCS	= Zombie.cpp ZombieEvent.cpp

NAME	= zombie

OBJ		= $(SRCS:.cpp=.o)

FLAGS	= -Wall -Wextra -Werror

.SILENT:

all: $(NAME)

$(NAME): $(OBJ)
		g++ $(FLAGS) $(OBJ) -o $(NAME)
	echo '\033[32m[ ✔ ]' "$(NAME) created" '\033[0m'

clean:
	rm -rf $(OBJ)
	echo '\033[31m[ × ]' "$(OBJ) removed" '\033[0m'

fclean: clean
	rm -f $(NAME)
	echo '\033[31m[ × ]' "$(NAME) removed" '\033[0m'

re: fclean all