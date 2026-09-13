#ifndef NUMCONVERTER_H
#define NUMCONVERTER_H

#include <stdio.h>
#include <string.h>
#include <math.h>
#include "terminal.h"

#define CHARSIZE 5
#define DISTANCE 2

typedef char big_num[CHARSIZE][CHARSIZE];

static const big_num big_nums_table[10] = 
{
    {
        "#####",
        "#   #",
        "#   #",
        "#   #",
        "#####"
    },
    {
        "  #  ",
        "###  ",
        "  #  ",
        "  #  ",
        "#####"
    },
    {
        " ### ",
        "#   #",
        "  ## ",
        " #   ",
        "#####"
    },
    {
        "#####",
        "    #",
        " ####",
        "    #",
        "#####"
    },
    {
        "#   #",
        "#   #",
        "#####",
        "    #",
        "    #"
    },
    {
        "#####",
        "#    ",
        "#####",
        "    #",
        "#####"
    },
    {
        "#####",
        "#    ",
        "#####",
        "#   #",
        "#####"
    },
    {
        "#####",
        "    #",
        "    #",
        "    #",
        "    #"
    },
    {
        "#####",
        "#   #",
        "#####",
        "#   #",
        "#####"
    },
    {
        "#####",
        "#   #",
        "#####",
        "    #",
        "#####"
    }
};

static const big_num colon = 
{
    "     ",
    "  0  ",
    "     ",
    "  0  ",
    "     "
};

void print_big_num(char* num);

#endif