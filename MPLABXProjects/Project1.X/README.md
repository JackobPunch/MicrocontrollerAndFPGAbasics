# 🔰 Assembly Language Fundamentals

> **Low-level programming foundation using ATmega128 assembly language**

## 🎯 **Project Overview**

This project demonstrates **direct CPU programming** using assembly language - the foundation of all embedded systems development. Every assembly instruction directly controls the microcontroller hardware, providing essential understanding for embedded programming.

**Target**: ATmega128 (AVR Architecture) | **Focus**: Register operations, arithmetic, I/O control

---

## 📚 **Learning Modules**

| 📄 File              | 🧠 Concept                | 💡 What You'll Learn                   |
| -------------------- | ------------------------- | -------------------------------------- |
| `addition.s`         | **Multi-byte Arithmetic** | Handling overflow with carry registers |
| `subtraction.s`      | **16-bit Operations**     | Borrow propagation in multi-byte math  |
| `comparationEqual.s` | **Conditional Logic**     | Branch instructions and program flow   |
| `comparationLess.s`  | **Signed Comparison**     | Status flags and negative numbers      |
| `diode.s`            | **Digital I/O**           | Reading inputs, controlling outputs    |
| `blink.s`            | **Hardware Control**      | Direct port manipulation, timing       |
| `blinkIf.s`          | **Conditional I/O**       | Input-dependent hardware control       |
| `newmain.c`          | **C Integration**         | Calling assembly from C programs       |

---

## 💡 **Key Concepts Mastered**

### **🔢 Arithmetic Operations**

```assembly
; Multi-byte addition (128 + 192 = 320, needs carry handling)
ldi r16, 128    ; First operand
ldi r18, 192    ; Second operand
add r16, r18    ; Add with automatic carry
adc r17, r17    ; Handle overflow in carry register
```

### **🔀 Conditional Logic**

```assembly
; Compare and branch based on result
ldi r16, 10     ; Load value
cpi r16, 11     ; Compare with 11
brmi Less       ; Branch if result negative (10 < 11)
```

### **⚡ Hardware I/O Control**

```assembly
; Direct port manipulation for LED control
ldi r17, 0b10000000  ; Bit mask for pin 7
in r16, PORTB        ; Read current port state
eor r16, r17         ; XOR to toggle LED
out PORTB, r16       ; Write to hardware port
```

---

## 🎓 **Skills Demonstrated**

### **Technical Mastery**

- ✅ **Direct CPU Programming** - No operating system, just raw hardware control
- ✅ **Register Management** - Efficient use of limited CPU resources
- ✅ **Status Flag Understanding** - How arithmetic affects processor state
- ✅ **Multi-byte Arithmetic** - Handling data larger than register width
- ✅ **Hardware I/O Control** - Direct port manipulation for real-world interfacing

### **Professional Practices**

- ✅ **Mixed-language Programming** - Integrating assembly with C
- ✅ **Code Documentation** - Clear commenting for complex low-level operations
- ✅ **Modular Design** - Separate files for different learning concepts
- ✅ **Build System Integration** - Professional MPLAB X project structure

---

## 🚀 **Getting Started**

### **Prerequisites**

- **MPLAB X IDE** (v6.20 or later)
- **XC8 Compiler** (v2.46 or later)
- **Basic Understanding** of binary numbers and computer architecture

### **Quick Start**

1. **Open** `Project1.X` in MPLAB X IDE
2. **Build** the project (compiles C and assembles .s files)
3. **Run** in simulator to step through each instruction
4. **Study** each `.s` file to understand the concepts

### **Learning Path**

1. **Start** → `addition.s` and `subtraction.s` (arithmetic basics)
2. **Progress** → `comparationEqual.s` and `comparationLess.s` (logic flow)
3. **Advance** → `blink.s`, `diode.s`, `blinkIf.s` (hardware control)
4. **Complete** → `newmain.c` (C/Assembly integration)

---

## 🔗 **Next Steps**

**Ready for more advanced embedded programming?**  
👉 **Progress to** [`../test1.X`](../test1.X) - **PIC24 Embedded C Programming**

This assembly foundation directly prepares you for:

- Understanding what C compilers generate
- Optimizing embedded C code
- Debugging at the hardware level
- Writing efficient embedded applications

---

<div align="center">

**🎯 Master the fundamentals - Every embedded systems engineer needs to understand assembly language**

_From raw CPU instructions to professional embedded systems development_ 🚀

</div>
