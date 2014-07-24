/* Library for 240*320 pixel display TFT based on ILI9341 LCD Controller
*
* Copyright (c) 2014 Anisse MOHAMED - Hakim ELGARRABI
*/ 

#ifndef _ILI9341_H_
#define _ILI9341_H_

/* Regulative command set */
#define ILI9341_NO_OPERATION				0x00
#define ILI9341_SOFT_RESET					0x01
#define ILI9341_READ_ID					0x04
#define ILI9341_READ_ST					0x09
#define ILI9341_READ_PWR_MODE				0x0A
#define ILI9341_READ_MADCTL				0x0B
#define ILI9341_READ_PIXEL_FORMAT			0x0C
#define ILI9341_READ_IMAGE_FORMAT			0x0D
#define ILI9341_READ_SIGNAL_MODE			0x0E
#define ILI9341_READ_SELF_DIAG_RESULT		0x0F 
#define ILI9341_SLEEP_MODE					0x10
#define ILI9341_SLEEP_OUT					0x11
#define ILI9341_PARTIAL_MODE_ON			0x12
#define ILI9341_NORMAL_MODE_ON				0x13
#define ILI9341_INVERSION_OFF				0x20
#define ILI9341_INVERSION_ON				0x21
#define ILI9341_GAMMA_SET					0x26
#define ILI9341_DISPLAY_OFF				0x28
#define ILI9341_DISPLAY_ON					0x29
#define ILI9341_COLUMN_SET					0x2A
#define ILI9341_PAGE_SET					0x2B
#define ILI9341_MEM_WRITE					0x2C
#define ILI9341_COLOR_SET					0x2D
#define ILI9341_MEM_READ					0x2E
#define ILI9341_PARTIAL_AREA				0x30
#define ILI9341_V_SCROLL_DEF				0x33
#define ILI9341_TEARING_EFFECT_LINE_OFF	0x34
#define ILI9341_TEARING_EFFECT_LINE_ON		0x35
#define ILI9341_MEM_ACCESS_CTL				0x36
#define ILI9341_V_SCROLL_START_ADDR		0x37
#define ILI9341_IDLE_MODE_OFF				0x38
#define ILI9341_IDLE_MODE_ON				0x39
#define ILI9341_PIXEL_FORMAT_SET			0x3A
#define ILI9341_WRITE_MEM_CONTINUE			0x3C
#define ILI9341_READ_MEM_CONTINUE			0x3E
#define ILI9341_SET_TEAR_SCANLINE			0x44
#define ILI9341_GET_SCANLINE				0x45
#define ILI9341_WRITE_DISPLAY_BRIGHTNESS	0x51
#define ILI9341_READ_DISPLAY_BRIGHTNESS	0x52
#define ILI9341_WRITE_CTL_DISPLAY			0x53
#define ILI9341_READ_CTL_DISPLAY			0x54
#define ILI9341_WRITE_ADAPTIVE_BRIGHTNESS	0x55
#define ILI9341_READ_ADAPTIVE_BRIGHTNESS	0x56
#define ILI9341_WRITE_CABC					0x5E
#define ILI9341_READ_CABC					0x5F
#define ILI9341_READ_ID1					0xDA
#define ILI9341_READ_ID2					0xDB
#define ILI9341_READ_ID3					0x5C

/* Extended command set */
#define ILI9341_RGB_IF_SIGNAL_CTL			0xB0
#define ILI9341_FRAME_CTL_NORMAL_MODE		0xB1
#define ILI9341_FRAME_CTL_IDLE_MODE		0xB2
#define ILI9341_FRAME_CTL_PARTIAL_MODE		0xB3
#define ILI9341_INVERSION_CTL				0xB4
#define ILI9341_BLANKING_PORCH_CTL			0xB5
#define ILI9341_DISPLAY_FUNC_CTL			0xB6
#define ILI9341_ENTRY_MODE_SET				0xB7
#define ILI9341_BLACKLIGHT_CTL1			0xB8
#define ILI9341_BLACKLIGHT_CTL2			0xB9
#define ILI9341_BLACKLIGHT_CTL3			0xBA
#define ILI9341_BLACKLIGHT_CTL4			0xBB
#define ILI9341_BLACKLIGHT_CTL5			0xBC
#define ILI9341_BLACKLIGHT_CTL7			0xBE
#define ILI9341_BLACKLIGHT_CTL8			0xBF
#define ILI9341_PWR_CTL1					0xC0
#define ILI9341_PWR_CTL2					0xC1
#define ILI9341_VCOM_CTL1					0xC5
#define ILI9341_VCOM_CTL2					0xC7
#define ILI9341_NV_MEM_WRITE				0xD0
#define ILI9341_NV_MEM_PROTECT_KEY			0xD1
#define ILI9341_NV_MEM_ST_READ				0xD2

extern ASCII_FontSizeDef ASCII_FS_7x10;
extern ASCII_FontSizeDef ASCII_FS_11x18;
extern ASCII_FontSizeDef ASCII_FS_16x26;

/* Init functions */
void ILI9341_Init(void);
/* Interface functions */
void ILI9341_SendCommand(uint8_t parCmd);
void ILI9341_SendData(uint8_t parData);
/* Control functions */
void ILI9341_SetCursorPosition(uint16_t parX0, uint16_t parY0, uint16_t parX1, uint16_t parY1);
/* Draw functions */
void ILI9341_DrawPixel(uint16_t parX, uint16_t parY, uint8_t parRGBColor[3]);
void ILI9341_DrawLine(uint16_t parX0, uint16_t parY0, uint16_t parX1, uint16_t parY1, uint8_t parRGBColor[3]);
void ILI9341_DrawRectangle(uint16_t parX0, uint16_t parY0, uint16_t parX1, uint16_t parY1,uint8_t parRGBColor[3], bool parFilled);
void ILI9341_DrawCircle(uint16_t parX, uint16_t parY, uint16_t parRadius, uint8_t parRGBColor[3], bool parFilled);
/* Print functions */
void ILI9341_Putc(uint8_t parChar, uint8_t parRGBColor[3]);
void ILI9341_Puts(uint8_t *parString, uint8_t parRGBColor[3]);

#endif
