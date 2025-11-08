#include <termios.h>
#include<fcntl.h>


void setup_termios(){
    int fd = open("dev", O_RDWR | O_NOCTTY);

    struct termios tty;

    //current port setup
    tcgetattr(fd, &tty);

    //baud rate
    cfsetispeed(&tty, B9600);
    cfsetospeed(&tty, B9600);

    //character size
    
}