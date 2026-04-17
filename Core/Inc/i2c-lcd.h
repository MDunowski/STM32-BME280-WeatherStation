/*
 * i2c-lcd.h
 *
 *  Created on: Mar 29, 2026
 *      Author: Crazy
 */

#ifndef INC_I2C_LCD_H_
#define INC_I2C_LCD_H_

#include "stm32f4xx_hal.h"

void lcd_init (void);   // inicjalizacja ekranu
void lcd_send_cmd (char cmd);  // wysyłanie komendy
void lcd_send_data (char data);  // wysyłanie znaku
void lcd_send_string (char *str);  // wysyłanie całego zdania
void lcd_put_cur(int row, int col);  // ustawienie kursora
void lcd_clear (void); // czyszczenie ekranu

#endif /* INC_I2C_LCD_H_ */
