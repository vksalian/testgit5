#include "lcd.h"

void LCD_Init(void)
{
	GPIO_Init();

	SPI_Init();
}