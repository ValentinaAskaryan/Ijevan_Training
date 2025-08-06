SRC_DIR := src
INC_DIR := inc
OBJ_DIR := obj
BIN_DIR := bin

CXX := gcc
CXXFLAGS := -Wall -Wextra -std=c++17 -MMD -MP -I$(INC_SRC)
SOURCE_FILES := $(wildcard $(SRC_DIR)/*.cpp)
OBJECT_FILES := $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o, $(SOURCE_FILES))

EXECUTABLE := $(BIN_DIR)/MyVector.out

$(EXECUTABLE) : $(OBJ_DIR)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

$(OBJECT_FILES) : $(SOURCE_FILES)
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS)-c $< -o $@
	
clean :
	rm -rf $(OBJ_DIR) $(BIN_DIR)
