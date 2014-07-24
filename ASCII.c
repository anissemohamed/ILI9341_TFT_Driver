/* Library for 240*320 pixel display TFT based on ILI9341 LCD Controller
*
* Copyright (c) 2014 Anisse MOHAMED - Hakim ELGHARRABI
*/ 

#include "ASCII.h"

ASCII_FontSizeDef ASCII_FS_7x10 = 
{
	7,
	10,
	(uint16_t*) ASCII_FontSize_7x10
};

ASCII_FontSizeDef ASCII_FS_11x18 = 
{
	11,
	18,
	(uint16_t*) ASCII_FontSize_11x18
};

ASCII_FontSizeDef ASCII_FS_16x26 = 
{
	16,
	25,
	(uint16_t*) ASCII_FontSize_16x26
};