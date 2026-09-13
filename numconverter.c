#include "numconverter.h"

void print_big_num(char* num) {
    size_t len = strlen(num);
    int row = 0;
    while (row <= 4)
    {
        PRINT_EMPTY_SPACES( get_w() / 2 - (round(CHARSIZE + DISTANCE) * 3.25) ) // horizontal middle of the screen
        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < 5; j++) {
                printf("%c", num[i] != ':' ? big_nums_table[(int)num[i]-48][row][j] : colon[row][j]);
            }
            PRINT_EMPTY_SPACES( DISTANCE );
        }
        printf("\n");
        row++;
    }
}