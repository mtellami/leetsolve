NONE = '\033[0m'
GRAY = '\033[2;37m'
ITALIC = '\033[3m'

CPP = g++
CPPFLAGS = -Wall -Wextra -Werror -fsanitize=address -g3
RM = rm -rf
PRINT = echo -e $(GRAY)$(ITALIC)

SOURCES_DIR = src
INCLUDE_DIR = inc

SOURCES = lcs.cpp bn.cpp cc.cpp\
					cc2.cpp mcp.cpp fn.cpp\
					ss.cpp ed.cpp dt.cpp\
					scs.cpp\

TARGETS = $(SOURCES:.cpp=)

default:
	@$(PRINT)"specifie a coding problem :"$(NONE)
	@for target in $(TARGETS); do \
		$(PRINT)"-" $$target; \
	done

all: $(TARGETS)

%: $(SOURCES_DIR)/%.cpp
	@$(CPP) $(CPPFLAGS) -I $(INCLUDE_DIR) $< -o $@
	@$(PRINT)"Compiled .."$(NONE)

clean:
	@$(RM) $(TARGETS)
	@$(PRINT)"Cleaned .."$(NONE)

.PHONY: all clean default
