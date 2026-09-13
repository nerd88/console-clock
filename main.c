#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>

#include "numconverter.h"
#include "terminal.h"

char* get_time() {
    char* result = malloc(8);
    time_t t;
    struct tm* t_info;

    time(&t);
    t_info = localtime(&t);

    sprintf(result, 
        "%02d:%02d:%02d",
        t_info->tm_hour,
        t_info->tm_min,
        t_info->tm_sec
    );

    result[8] = '\0';

    return result;
}

int main() {

    puts("\033[?1049h\033[H"); // alt screen
    echooff();
    
    while (1)
    {
        system("clear");
        PRINT_NEXT_LINES( (get_h() - CHARSIZE) / 2 ); // vertical middle of the screen
        
        print_big_num( get_time() );
        
        sleep(1);
    }

    puts("\033[?1049h\033[H"); // exit alt screen
    echoon();

    return 0;
}