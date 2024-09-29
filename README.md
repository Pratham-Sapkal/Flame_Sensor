# Fire Detection System Using Flame Sensor, OLED Display, and Arduino Nano
# [Watch the YouTube Video](https://youtube.com/shorts/BahwIzlP040)

This project involves creating a fire detection system using a flame sensor, an OLED display, and an Arduino Nano. The flame sensor detects fire, and the OLED display shows the status of the detection.

## Components Needed
- Arduino Nano
- Flame Sensor (IR-based)
- OLED Display (I2C, 128x64)
- Breadboard
- Jumper Wires
- 5V Power Supply

## Circuit Diagram

| Arduino Nano Pin | Component         |
| ---------------- | ----------------- |
| A0               | Flame Sensor OUT  |
| SDA (A4)         | OLED SDA          |
| SCL (A5)         | OLED SCL          |
| GND              | Flame Sensor GND, OLED GND |
| 5V               | Flame Sensor VCC, OLED VCC |

## Step-by-Step Instructions

### 1. Wiring the Components
1. Connect the **flame sensor** output pin to analog input `A0` of the **Arduino Nano**.
2. Connect the **OLED display** using the I2C pins:
   - `SDA` to `A4`
   - `SCL` to `A5`
3. Provide `5V` from the Arduino Nano to both the **flame sensor** and the **OLED display**.
4. Connect all GND pins.

### 2. Install Required Libraries
- Install the **Adafruit GFX Library** and **Adafruit SSD1306 Library** for the OLED display. You can install these via the Arduino Library Manager.

### 3. Upload the Code
1. Connect the **Arduino Nano** to your computer via USB.
2. Open the Arduino IDE and copy the following code
3. Adjust the flame sensor threshold value in the code (`flameValue < 200`) as per your requirements.
4. Compile and upload the code to the **Arduino Nano**.

### 4. Testing the System
1. Power on the system.
2. Bring a flame (e.g., a lighter) close to the flame sensor.
3. Observe the OLED display:
   - It will show "Fire Detected!" when a flame is near.
   - It will show "No Fire" when no flame is detected.

## Notes
- Ensure the flame sensor is positioned correctly to detect any fire within the range.
- Adjust the sensitivity threshold based on your environment to avoid false positives.
- This is a basic project for fire detection; do not use it as a replacement for certified fire safety devices.

## License
This project is open source. Feel free to modify and use it in your own projects.

## Author
[Pratham Sapkal]
