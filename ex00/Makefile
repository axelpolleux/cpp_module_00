NAME = megaphone

OUTPUT_DIR = build

SRC_DIR =

OUT_DIRS := $(OUTPUT_DIR)/$(SRC_DIR)

SRC = megaphone.cpp

INCLUDES = includes

CXX := c++

ifdef SANIT
	DEBUG=1
endif
ifdef DEBUG
	CFLAGS += -g -Wall -Wextra -DDEBUG=yes -std=c++98
else
	CFLAGS := -Wall -Wextra -Werror -std=c++98
endif
ifdef SANIT
	CFLAGS += -fsanitize=address -fsanitize=leak -O1 -MMD -MP
endif

OBJ = $(SRC:%.cpp=$(OUTPUT_DIR)/%.o)

$(NAME): $(OUT_DIRS) $(OBJ)
	@$(CXX) $(OBJ) $(CFLAGS) -I$(INCLUDES) $(LFLAGS) -o $@
	@echo "COMPILATION"

$(OUTPUT_DIR)/%.o: %.cpp
	@$(CXX) $(CFLAGS) -I$(INCLUDES) $(LFLAGS) -c $< -o $@
	@echo -e "$< to $@\n"

$(OUT_DIRS):
	@mkdir -p $(OUT_DIRS)

all: $(NAME)

clean:
	@rm -rf $(OUTPUT_DIR)
	@echo "CLEAN"

fclean: clean
	@rm -f $(NAME)
	@echo "FCLEAN"

re: fclean all

.PHONY: clean all re fclean