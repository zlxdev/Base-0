#Compiler
CC = gcc

#Debugger (useful for checking errors)
CFLAGS = -Wall -Wextra -g

#Diretories
BIN = bin

#Initializing
%.run: %.c
		@mkdir -p $(BIN)
		@echo "-------------------------------------------------"
		@echo "Compiling the file: $<"
		@echo "-------------------------------------------------"
		$(CC) $(CFLAGS) "$<" -o "$(BIN)/runner"
		@echo "Build successful!"
		@echo "-------------------------------------------------"
		@./$(BIN)/runner

# Cleaning up
clean:
		rm -rf %(BIN)/*
		@echo "Bin folder has been cleaned"