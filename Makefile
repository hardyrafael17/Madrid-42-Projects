define \n


endef

# nombre
NAME = main
EXECUTABLE  = $(NAME)

# compiler
CC	   = gcc
ECHO = echo "hello"
CFLAGS   = -Wall -Werror -Wextra
FINAL	= -o $(EXECUTABLE)

# directory names
SRCDIR	= src
OBJDIR	= obj

SOURCES		:= $(wildcard $(SRCDIR)/*.c)
INCLUDES	:= $(wildcard $(SRCDIR)/*.h)
OBJECTS		:= $(SOURCES:$(SRCDIR)/%.c=$(OBJDIR)/%.o)
rm	   		= rm -rf

all: $(EXECUTABLE)

.PHONY: clean

clean:
	$(rm) $(OBJDIR)
	$(rm) $(EXECUTABLE)	

fclean:

re: clean all

