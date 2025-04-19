# Makefile for beecrowd project
CXX = g++
CXXFLAGS = --std=c++20 -O2
OUT_DIR = out
SRC_DIR = src
EXEC = $(OUT_DIR)/main

# Ensure out directory exists
$(shell mkdir -p $(OUT_DIR))

.PHONY: run compile clean

# Extract NUMBER from command-line arguments
NUMBER := $(word 2,$(MAKECMDGOALS))

# Run the compiled program for the given NUMBER
run: compile
	@echo "Running $(EXEC)..."
	@./$(EXEC)

# Compile the main.cpp for the given NUMBER
compile: SRC_FOLDER = $(firstword $(wildcard $(SRC_DIR)/$(NUMBER)-*))
compile: SRC_FILE = $(SRC_FOLDER)/main.cpp
compile: OUT_SRC = $(OUT_DIR)/main.cpp
compile:
	@if [ -z "$(NUMBER)" ]; then \
		echo "Error: NUMBER not specified. Usage: make run NUMBER or make compile NUMBER"; \
		exit 1; \
	fi
	@if [ -z "$(SRC_FOLDER)" ]; then \
		echo "Error: No folder found matching $(SRC_DIR)/$(NUMBER)-*"; \
		exit 1; \
	fi
	@if [ ! -f "$(SRC_FILE)" ]; then \
		echo "Error: $(SRC_FILE) does not exist"; \
		exit 1; \
	fi
	@if [ -f "$(OUT_SRC)" ] && cmp -s "$(SRC_FILE)" "$(OUT_SRC)"; then \
		echo "Source file is unchanged, skipping compilation"; \
	else \
		echo "Copying $(SRC_FILE) to $(OUT_SRC)"; \
		cp "$(SRC_FILE)" "$(OUT_SRC)"; \
		echo "Compiling $(OUT_SRC)"; \
		$(CXX) $(CXXFLAGS) -o $(EXEC) $(OUT_SRC); \
	fi

# Clean the out directory, keeping .keep
clean:
	@echo "Cleaning $(OUT_DIR)..."
	@find $(OUT_DIR) -type f ! -name '.keep' -delete

# Handle stray arguments
%:
	@: