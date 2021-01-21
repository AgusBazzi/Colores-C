#include <stdio.h>

// Letters
#define BLACK           30
#define RED             31
#define GREEN           32
#define YELLOW          33
#define BLUE            34
#define MAGENTA         35
#define CYAN            36
#define GREY            37
#define LIGHT_BLACK     90
#define LIGHT_RED       91
#define LIGHT_GREEN     92
#define LIGHT_YELLOW    93
#define LIGHT_BLUE      94
#define LIGHT_MAGENTA   95
#define LIGHT_CYAN      96
#define WHITE           97

// Background
#define BLACK_BG           	40
#define RED_BG             	41
#define GREEN_BG           	42
#define YELLOW_BG			43
#define BLUE_BG				44
#define MAGENTA_BG			45
#define CYAN_BG				46
#define GREY_BG				47
#define LIGHT_BLACK_BG		100
#define LIGHT_RED_BG		101
#define LIGHT_GREEN_BG		102
#define LIGHT_YELLOW_BG		103
#define LIGHT_BLUE_BG		104
#define LIGHT_MAGENTA_BG	105
#define LIGHT_CYAN_BG		106
#define WHITE_BG			107

// Modes
#define _				0
#define BOLD			1
#define ITALICS			3
#define UNDERLINE		4
#define NEGATIVE		7
#define INVISIBLE		8
#define NO_UNDERLINE	24
#define POSITIVE		27


void color(int text, int background, int mode1, int mode2){
	printf("\033[%d;%d;%d;%dm", mode2, mode1, background, text);
}

void newLineReset(){
	printf("\033[0m\n");
}