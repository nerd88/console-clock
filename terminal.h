#ifndef TERMINALSIZE_H
#define TERMINALSIZE_H

#include <sys/ioctl.h>
#include <termios.h>
#include <stdio.h>
#include <unistd.h>

int get_w();
int get_h();

#define PRINT_EMPTY_SPACES(n) for (int i = 0; i < n; i++) printf(" ");
#define PRINT_NEXT_LINES(n) for (int i = 0; i < n; i++) printf("\n");

void echooff();
void echoon();

#endif