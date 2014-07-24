/* Library for 240*320 pixel display TFT based on ILI9341 LCD Controller
*
* Copyright (c) 2014 Anisse MOHAMED - Hakim ELGHARRABI
*/

#include "ILI9341.h"
#include "ASCII.h"
#include "RGB.h"

/* Init functions */
void ILI9341_Init(void)
{
	//TODO
}
/* Interface functions */
void ILI9341_SendCommand(uint8_t parCmd)
{
	//TODO
}
void ILI9341_SendData(uint8_t parData)
{
	//TODO
}

/* Control functions */
void ILI9341_SetCursorPosition(uint16_t parX0, uint16_t parY0, uint16_t parX1, uint16_t parY1)
{
	ILI9341_SendCommand(ILI9341_COLUMN_SET);
	ILI9341_SendData( (parX0 >> 8) & 0xFF );
	ILI9341_SendData( (parX0 >> 0) & 0xFF );
	ILI9341_SendData( (parX1 >> 8) & 0xFF );
	ILI9341_SendData( (parX1 >> 0) & 0xFF );
	
	ILI9341_SendCommand(ILI9341_PAGE_SET);
	ILI9341_SendData( (parY0 >> 8) & 0xFF );
	ILI9341_SendData( (parY0 >> 0) & 0xFF );
	ILI9341_SendData( (parY1 >> 8) & 0xFF );
	ILI9341_SendData( (parY1 >> 0) & 0xFF );
}

/* Draw functions */
void ILI9341_DrawPixel(uint16_t parX, uint16_t parY, uint8_t parRGBColor[3])
{
	ILI9341_SetCursorPosition(parX, parY, parX, parY);
	ILI9341_SendCommand(ILI9341_MEM_WRITE);
	ILI9341_SendData(parRGBColor[0]);
	ILI9341_SendData(parRGBColor[1]);
	ILI9341_SendData(parRGBColor[2]);
}
void ILI9341_DrawLine(uint16_t parX0, uint16_t parY0, uint16_t parX1, uint16_t parY1, uint8_t parRGBColor[3])
{
	//TODO : Bresenham's line algorithm
}
void ILI9341_DrawRectangle(uint16_t parX0, uint16_t parY0, uint16_t parX1, uint16_t parY1, uint8_t parRGBColor[3], bool parFilled)
{
	//TODO
}
void ILI9341_DrawCircle(uint16_t parX, uint16_t parY, uint16_t parRadius, uint8_t parRGBColor[3], bool parFilled)
{
	//TODO : Bresenham's circle algorithm
}

/* Print functions */
void ILI9341_Putc(uint8_t parChar, uint8_t parRGBColor[3])
{
	//TODO
}
void ILI9341_Puts(uint8_t *parString, uint8_t parRGBColor[3])
{
	//TODO
}