#VARIABLES ======================================================
# Defines the compiler to be used
CC = gcc 

# Defines the name of the target executable file
TARGET = build/unitConv 

# Defines the source files to be compiled
SRCS =  unitConv_main.c \
        unitConv_ui.c \
        distance/distance_main.c \
        distance/distance_ui.c \
        temperature/temperature_main.c \
        temperature/temperature_ui.c \
        pressure/pressure_main.c \
        pressure/pressure_ui.c \
#================================================================

# Defines the object files by replacing .c with .o in the source files and adding the build directory
OBJS = $(patsubst %.c, build/%.o, $(SRCS))

# Defines the flags to be passed to the compiler
CFLAGS = -Wall -Wextra -Werror

# Create the build directory, if it does not exist
$(shell mkdir -p build/distance build/temperature build/pressure)

# Defines the default target, which is the executable file
$(TARGET): $(OBJS)
    # Links the object files to create the executable
	$(CC) $(OBJS) -o $(TARGET)

# Defines the rule to compile .c files into .o object files
build/%.o: %.c
    # Compiles the source file into an object file with the specified flags
	$(CC) $(CFLAGS) -c $< -o $@

# Defines the rule to run the executable file
run: $(TARGET)
    # Runs the executable
	./$(TARGET)

# Defines the rule to clean the object files and the target executable
clean:
    # Removes the object files and the executable
	rm -rf build
    # rm -f $(OBJS) $(TARGET)