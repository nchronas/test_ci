TEST_DIR=t
 
test:
    make -C $(TEST_DIR)
 
test_clean:
    make -C $(TEST_DIR) clean
  
main: code.o
    gcc dt.c -o $(OUT)
 
all: test main
 
clean: test_clean
    rm $(SRC_DIR)/*.o $(CODE_DIR)/*.o $(OUT)
