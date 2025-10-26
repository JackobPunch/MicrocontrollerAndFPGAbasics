# 🟡 Advanced Embedded C Programming

> **Professional embedded systems development using PIC24FJ128GA705 16-bit microcontroller**

## 🎯 **Project Overview**

This project showcases **real-world embedded programming** using a professional 16-bit microcontroller. It demonstrates the complete evolution from learning to production-ready code, showing both the **authentic learning process** and **professional implementation**.

**Platform**: PIC24FJ128GA705 (16-bit, 32 MHz) | **Focus**: Hardware abstraction, real-time systems, peripheral integration

---

## 📚 **Code Evolution Story**

### **🧪 Learning Phase** - `main.c`

- **Authentic university code** - Real learning process with experiments
- **Mixed languages** - Polish/English comments from classroom environment
- **Multiple attempts** - Shows iterations and problem-solving approach
- **Raw learning** - Unpolished but educational progression

### **🏗️ Production Phase** - `main_clean.c`

- **Professional refactoring** - Clean, documented, modular code
- **Educational structure** - Organized learning sections with enable/disable flags
- **Industry standards** - Best practices for embedded development
- **Production ready** - Code suitable for team collaboration

---

## 🔧 **Hardware Setup**

| 💡 Component   | 📍 Pin     | ⚡ Function    | 🎯 Purpose          |
| -------------- | ---------- | -------------- | ------------------- |
| **Red LED**    | RB4        | Digital Output | Status indication   |
| **Yellow LED** | RC3        | Digital Output | Warning/processing  |
| **Green LED**  | RC4        | Digital Output | Success/ready state |
| **Blue LED**   | RC5        | Digital Output | User interaction    |
| **Switch 0**   | RA7        | Digital Input  | User control        |
| **Switch 1**   | RA10       | Digital Input  | Mode selection      |
| **ADC Input**  | RB12 (AN8) | Analog Input   | Sensor simulation   |

---

## 💡 **Advanced Concepts Demonstrated**

| 📚 Learning Module   | 🔧 Technology            | 💻 Key Skills                     | 🎯 Real-world Application         |
| -------------------- | ------------------------ | --------------------------------- | --------------------------------- |
| **GPIO Control**     | MCC Hardware Abstraction | Digital I/O, LED control          | Status indicators, device control |
| **Software Timing**  | CPU cycle management     | Blocking delays, Nop() usage      | Simple timing, basic control      |
| **Hardware Timers**  | TMR1 peripheral          | Non-blocking timing, interrupts   | Real-time systems, periodic tasks |
| **Digital Input**    | Switch debouncing        | Input reading, conditional logic  | User interfaces, sensor input     |
| **ADC Processing**   | 10-bit ADC (AN8)         | Analog conversion, scaling        | Sensor data, measurement systems  |
| **Bit Manipulation** | Bitwise operations       | Masks, shifts, logic operations   | Hardware registers, flags         |
| **Data Structures**  | Custom types             | RTC structures, data organization | Time systems, complex data        |

### **🚀 Advanced Code Examples**

#### **Non-blocking Timer Implementation**

```c
// Professional real-time approach
TMR1_Tasks_16BitOperation();
if (TMR1_GetElapsedThenClear()) {
    redLED_Toggle();  // Execute every timer period
}
```

#### **ADC with Data Processing**

```c
// Industry-standard sensor reading
uint16_t adc_reading = ADC1_GetConversion(8);
float scaled_value = adc_reading / 1023.0f;  // Scale to 0.0-1.0
// Use scaled value for control decisions
```

#### **Bit Manipulation for Hardware Control**

```c
// Efficient hardware register operations
unsigned int mask = rightZero(5);  // Creates 0b11111000 pattern
// Use for port masking and hardware configuration
```

---

## 🎓 **Professional Skills Demonstrated**

### **📈 Code Quality Evolution**

- **Learning Process Documentation** - Shows authentic development journey
- **Professional Refactoring** - Clean, maintainable production code
- **Version Control** - Multiple file versions showing progression
- **Educational Documentation** - Teaching-quality technical writing

### **🔧 Industry-Ready Techniques**

- **Hardware Abstraction Layer** - Using MCC-generated code professionally
- **Non-blocking Operations** - Real-time system design principles
- **Modular Programming** - Configurable demo sections with compile-time flags
- **Data Processing** - ADC scaling, type conversion, floating-point math
- **Resource Management** - Efficient memory and CPU usage

### **⚡ Advanced Embedded Concepts**

- **Real-time Systems** - Hardware timers vs software delays
- **Peripheral Integration** - ADC, GPIO, timers working together
- **Mixed-language Programming** - Building on assembly foundation from Project1.X
- **Professional Documentation** - Industry-standard commenting and structure

---

## 🚀 **Getting Started**

### **Prerequisites**

- **MPLAB X IDE** (v6.05+) with **XC16 Compiler** (v2.10+)
- **Microchip Code Configurator (MCC)** for hardware abstraction
- **Understanding** of C programming and basic embedded concepts

### **Quick Start Options**

#### **🎯 Focus on Clean Code** (Recommended)

1. **Open** `main_clean.c` - Professional, documented implementation
2. **Configure** learning modules using `#define` flags at top of file
3. **Build & Run** - Each section can be enabled/disabled independently

#### **📚 Study Learning Process** (Educational)

1. **Compare** `main.c` (learning phase) vs `main_clean.c` (production)
2. **Observe** the evolution from experimental to professional code
3. **Learn** from commented experiments and multiple approaches

### **🎯 Learning Progression**

1. **Foundation** → Start with basic LED control
2. **Timing** → Progress from software delays to hardware timers
3. **Interaction** → Add user input and ADC processing
4. **Advanced** → Bit manipulation and data structures

---

## 🔗 **Project Relationships**

### **Built on Assembly Foundation**

👈 **Previous**: [`../Project1.X`](../Project1.X) - Assembly language fundamentals

- Understanding what C compilers generate
- Direct hardware control concepts
- Register-level programming skills

### **Leads to FPGA Design**

👉 **Next**: [`../../zaj1_18.10.2024`](../../zaj1_18.10.2024) - FPGA digital logic

- Hardware description vs software programming
- Parallel processing concepts
- Custom digital circuit design

---

## � **Industry Applications**

This project demonstrates skills directly applicable to:

- **Automotive Electronics** - ECU programming, sensor integration
- **IoT Devices** - Low-power sensing, wireless communication
- **Industrial Control** - Process automation, monitoring systems
- **Medical Devices** - Patient monitoring, diagnostic equipment
- **Consumer Electronics** - Smart home devices, wearables

---

<div align="center">

**🎯 From Learning to Production - Real embedded systems development experience**

_Professional-grade microcontroller programming with complete learning documentation_ 🚀

</div>
