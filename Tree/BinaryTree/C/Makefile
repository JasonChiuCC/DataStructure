INCLUDES =                                  \
        -I./                                

SRC_FILE =                                  \
        ./main.c                            \
        ./BinaryTree.c                
CC       = gcc        
CFLAGS   = -Wall

BinaryTree: $(SRC_FILE)
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ $^    

TOOLS_TARGETS	:= BinaryTree 
all: $(TOOLS_TARGETS)
	
clean:
	rm -rf *.o BinaryTree     
