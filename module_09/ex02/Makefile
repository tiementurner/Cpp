CC_FLAGS = -Wall -Werror -Wextra 

NAME = PmergeMe

CC = c++

FILES = main.cpp \
		ford_list.cpp \
		ford_vector.cpp 


OFILES = $(FILES:.cpp=.o)

GREEN = \033[0;38;5;114m
RED = \033[38;5;124m
BLUE = \033[38;5;153m
NORMAL = \033[38;5;255m

all : $(NAME)

$(NAME) : $(OFILES)
		@$(CC) $(CC_FLAGS) $(OFILES) -o $(NAME)
		@echo "-----------------------------------"
		@echo "$(BLUE)Created executable:$(NORMAL)      $(NAME)"
		@echo "-----------------------------------"

%.o : %.cpp
		@echo "$(GREEN)Created object file:$(NORMAL)    $@"
		@$(CC) $(CC_FLAGS) -c $< -o $@

clean   :
		@echo "-----------------------------------"
		@echo "$(RED)Object files removed.$(NORMAL)"
		@echo "-----------------------------------"
		@rm -rf $(OFILES)

fclean  :       clean
		@echo "$(RED)./$(NAME) removed.$(NORMAL)"
		@echo "-----------------------------------"
		@rm -rf $(NAME)

re            : fclean all