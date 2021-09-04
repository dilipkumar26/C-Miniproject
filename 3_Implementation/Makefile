PROJECT_NAME = automatic_teller_machine

# Output directory
BUILD = build

# All include folders with header files
#---------------------unity file need to added 
INC	= -Iinc
INC_U   = -IUnity
#INC_TE  = -Itest

# All source code files
SRC = main.cpp\
src/account.cpp\
src/checkings.cpp\
src/savings.cpp

# All test source files
TEST_SRC =Test/Test.cpp\
Unity/unity.cpp\

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run test doc clean all

all: $(SRC) $(BUILD)
	g++ $(SRC) $(INC) -o $(PROJECT_OUTPUT) -lm

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT)


# Build and run the unit tests
test:$(BUILD)
	g++ $(SRC) $(TEST_SRC) $(INC) $(INC_U) -o $(TEST_OUTPUT)
	./$(TEST_OUTPUT)


#Coverage
coverage:$(BUILD)
	g++ -fprofile-arcs -ftest-coverage -fPIC -O0 $(TEST_SRC) $(SRC) $(INC) $(INC_U) -o $(TEST_OUTPUT)
	./$(TEST_OUTPUT)

clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build
