# Arduino Keypad Input with LCD (Proteus Simulation)

This project demonstrates how to read input from a **3x4 keypad** using an **Arduino Uno** and display the pressed key on a **16x2 LCD screen**.
The simulation is implemented in **Proteus**, and the program is written in **Arduino (C/C++)**.

---

## Project Structure

* **Code/** → Arduino `.ino` file
* **Proteus/** → Simulation files (`.pdsprj`)
* **README.md** → Documentation

---

## Features

* Detect and display keypad input in real time
* Interface a 3x4 keypad with Arduino
* Display output on a 16x2 LCD
* Fully simulated in Proteus

---

## Requirements

* [Arduino IDE](https://www.arduino.cc/en/software)
* [Proteus](https://www.labcenter.com/) (for simulation)
* Components:

  * Arduino Uno
  * 3x4 Keypad
  * LCD 16x2 Display
  * Resistors, wires, potentiometer (for LCD contrast)

---

## How to Run

### 1️⃣ Open the Proteus Simulation

* Navigate to the `Proteus/` folder
* Open the `.pdsprj` file in Proteus
* Run the simulation → press keys on the keypad → LCD displays the pressed key

### 2️⃣ Upload the Arduino Code

* Open `Code/keypad_lcd.ino` in Arduino IDE
* Select **Arduino Uno** and the correct COM port
* Upload the sketch

### Test

* Press any key on the keypad → the LCD updates with the corresponding character

---

## Learning Goals

* Learn how to interface a **3x4 keypad** with Arduino
* Practice displaying dynamic input on an **LCD 16x2**
* Understand **digital input scanning** and **LCD display functions**
* Experience hardware simulation in Proteus before real-world implementation

---

✅ This project is ideal for beginners in **Arduino + Proteus**, combining **keypad input**, **digital scanning**, and **LCD interfacing**.
