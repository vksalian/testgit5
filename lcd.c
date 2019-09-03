#include "lcd.h"

// Vesrion 1.0

void LCD_Init(void)
{
	// Initialize GPIO 
	GPIO_Init();

	// Initialize SPI
	SPI_Init();
}
