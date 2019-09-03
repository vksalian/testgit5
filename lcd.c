#include "lcd.h"

void LCD_Init(void)
{
	// Initialize GPIO 
	GPIO_Init();

	// Initialize SPI
	SPI_Init();
}
