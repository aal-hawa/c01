NAME = UnnecessaryViolence
CXX = c++
CXXFLAGS = -Wall -Wextra -Wall -std=c++98

SRC = HumanA.cpp  HumanB.cpp Weapon.cpp main.cpp
OBJS = $(SRC:.cpp=.o)
all: $(NAME)

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 