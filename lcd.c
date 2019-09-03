#include "lcd.h"

// Vesrion 1.0

void LCD_Init(void)
{
	GPIO_Init();

	SPI_Init();
}