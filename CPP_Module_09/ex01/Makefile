NAME = RPN
CC = c++
C_FLAGS = -std=c++98 -Wall -Wextra -Werror 
FILES = RPN
SRC= $(addsuffix .cpp, $(FILES))
OBJ =$(addsuffix .o, $(FILES))

all : $(NAME)  

$(NAME) : $(OBJ)
	${CC} ${C_FLAGS} -o $(NAME) $(OBJ) main.cpp

$(OBJ): $(SRC)
	${CC} ${C_FLAGS} -o $@ -c $(@:.o=.cpp)   

re: fclean all

clean:
		rm -f $(OBJ)
		
fclean:
		rm -f $(OBJ) $(NAME) 

.PHONY: all