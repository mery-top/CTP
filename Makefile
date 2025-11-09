CC = gcc
SRC = main.c \
datalink/dsender.c \
datalink/dreceiver.c \
src/ack.c \
src/comm.c \
src/crc.c \
src/termios.c 


OUT = sender

$(OUT):$(SRC)
	$(CC) $(SRC) -o $(OUT) 

run:
	./$(OUT)

clean:
	rm -f $(OUT)