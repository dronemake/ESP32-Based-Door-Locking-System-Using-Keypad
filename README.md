# ESP32-Based Door Locking System Using Keypad 🔐

Secure your door using an ESP32, 4x4 keypad, and a servo motor.

## 📦 Components Required
- ESP32 Dev Board
- 4x4 Matrix Keypad
- Servo Motor (e.g., SG90)
- Jumper Wires
- Breadboard

## 🔌 Circuit Diagram
- Keypad ROW0 → GPIO19  
- Keypad ROW1 → GPIO18  
- Keypad ROW2 → GPIO5  
- Keypad ROW3 → GPIO17  
- Keypad COL0 → GPIO16  
- Keypad COL1 → GPIO4  
- Keypad COL2 → GPIO0  
- Keypad COL3 → GPIO2  
- Servo Signal → GPIO21  
- Servo VCC → 5V  
- Servo GND → GND  

## 📋 How It Works
- Default password: `1234`
- Enter the password and press `#` to unlock.
- Press `*` to clear the entered password.
- Servo rotates to unlock and re-locks automatically after 5 seconds.

---

Made with ❤️ by Gajendra Verma
