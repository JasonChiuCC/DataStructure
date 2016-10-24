INCLUDES =                                  \
        -I./                                

SRC_FILE =                                  \
        ./main.c                            \
        ./LinkedList.c                
CC       = gcc        
CFLAGS   = -Wall

LinkedList: $(SRC_FILE)
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ $^    

TOOLS_TARGETS	:= LinkedList 
all: $(TOOLS_TARGETS)
	
clean:
	rm -rf *.o LinkedList     
