NAME = btc
#STD_NAME = std_containers
CC = c++
C_FLAGS = -std=c++98 -Wall -Wextra -Werror 
FILES = BitcoinExchange
SRC= $(addsuffix .cpp, $(FILES))
OBJ =$(addsuffix .o, $(FILES))

all : $(NAME)  #$(STD_NAME)

$(NAME) : $(OBJ)
	${CC} ${C_FLAGS} -o $(NAME) $(OBJ) main.cpp

#$(STD_NAME) : $(OBJ) 
#	${CC} -o $(STD_NAME) $(OBJ) std_main.cpp

$(OBJ): $(SRC)
	${CC} ${C_FLAGS} -o $@ -c $(@:.o=.cpp)   

re: fclean all

clean:
		rm -f $(OBJ)

fclean:
		rm -f $(OBJ) $(NAME) 


.PHONY: all