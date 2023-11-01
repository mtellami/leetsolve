NONE = '\033[0m'
GRAY = '\033[2;37m'
ITALIC = '\033[3m'

CXX = g++
CXXFLAGS = -Wall -Wextra -Werror

SOURCES = lcs.cpp \
					bn.cpp \
					cc.cpp \
					cc2.cpp

TARGETS = $(SOURCES:.cpp=)

default:
	@echo -e $(GRAY)$(ITALIC)"specifie a coding problem :"$(NONE)
	@for target in $(TARGETS); do \
		echo -e $(GRAY)$(ITALIC)"-" $$target; \
	done

all: $(TARGETS)

%: %.cpp
	@$(CXX) $(CXXFLAGS) $< -o $@
	@echo -e $(GRAY)$(ITALIC)"Compiled .."$(NONE)

clean:
	@rm -f $(TARGETS)
	@echo -e $(GRAY)$(ITALIC)"Cleaned .."$(NONE)

.PHONY: all clean default
