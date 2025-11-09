#include<stdio.h>


void string_to_bits(char* message, char* output){
    int k =0;
    for(int i =0; i< strlen(message);i++){
        for(int j =7; j>=0; j--){
            unsigned char c = message[i]; //A->75

            //1. left shift 1 by j to check the first bit and then sequentailly the next bits
            output[k++] = ((c & 1<<j) )? '1' : '0';
        }
    }

    output[k] = '\0';
}
