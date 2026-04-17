# STM32 Weather Station (BME280 & LCD 16x2)

Professional weather monitoring system developed on the **STM32F411RE (Nucleo-F411)** platform. The project integrates a high-precision Bosch Sensortec sensor with a character display via the I2C bus.

## 🚀 Key Features
* **Advanced Sensor Integration:** Full implementation of the official **Bosch Sensortec BME280 API** for environmental data acquisition.
* **Communication Protocol:** Master-Slave I2C bus handling both the sensor and the LCD 16x2 (via PCF8574 adapter) on a shared bus.
* **Data Processing:** Real-time compensation algorithms for Temperature, Humidity, and Atmospheric Pressure.
* **Embedded Optimization:** Configured float-formatting support (`-u _printf_float`) for precise data presentation.

## 🛠 Tech Stack
* **Microcontroller:** ARM Cortex-M4 (STM32F411RE)
* **Language:** C (C11 Standard)
* **Peripherals:** I2C, GPIO, UART (for debugging)
* **Development Environment:** STM32CubeIDE, STM32CubeMX, HAL Library

## 🔌 Hardware Connection
| Component | Pin (Nucleo) | Function |
| :--- | :--- | :--- |
| **BME280 SDA** | PB9 | I2C1 Data |
| **BME280 SCL** | PB8 | I2C1 Clock |
| **LCD SDA** | PB9 | Shared I2C Bus |
| **LCD SCL** | PB8 | Shared I2C Bus |
| **Power (VCC)** | 3.3V / 5V | Common VCC |
| **Ground (GND)** | GND | Common Ground |

## 🧠 Project Challenges & Solutions
* **I2C Timing Synchronization:** Handled timing mismatches between the high-speed MCU and the slow LCD controller by implementing custom delays in the low-level driver.
* **Memory Management:** Optimized the I2C buffer using `memset` and `sprintf` to ensure clean data transitions between display cycles.
* **Known Issue - Pressure Calibration:** Currently observing a ~300hPa offset in pressure readings (~695 hPa). The communication is verified as stable; the issue is identified as a mathematical compensation mismatch within the 32-bit API implementation. **Status: Investigation in progress.**

## 📸 Project Preview
