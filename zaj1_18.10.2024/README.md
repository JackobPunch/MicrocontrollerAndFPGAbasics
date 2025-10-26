# 🔴 FPGA Digital Logic Design

> **Advanced project implementing basic digital logic circuits on Digilent Arty Z7-10 FPGA using VHDL**

<div align="center">
   <img src="https://github.com/JackobPunch/FundamentalsOfMicroprocessorTechnology/blob/main/gif2.gif" alt="FPGA Logic Demo" width="500"/>
</div>

## 🎯 **Project Overview**

This project demonstrates fundamental **FPGA development** and **digital logic design** using the **Digilent Arty Z7-10** board. Unlike traditional software programming, this involves describing hardware behavior using **VHDL** and synthesizing it into actual digital circuits.

### **🏗️ What's Different About FPGA Programming?**

- **Hardware Description** - Code describes physical logic gates, not software instructions
- **Parallel Execution** - All logic operates simultaneously, not sequentially
- **Real Hardware** - Circuits are physically configured in silicon

---

## 🔧 **Hardware Implementation**

### **💡 Logic Modules Implemented**

| Module               | File         | Logic Function        | Hardware Behavior                            |
| -------------------- | ------------ | --------------------- | -------------------------------------------- |
| **LED Controller 1** | `led1.vhd`   | `out1 <= in1 AND in3` | LED turns ON only when both switches pressed |
| **LED Controller 2** | `led2.vhd`   | `out2 <= in2`         | LED directly follows switch state            |
| **Switch Logic**     | `switch.vhd` | `out3 <= in4 OR in5`  | Output HIGH when any switch pressed          |

### **📌 Pin Connections (Arty Z7-10)**

- **Inputs**: Board switches and buttons
- **Outputs**: Board LEDs
- **Logic**: Combinational circuits (no clock required)

---

## 🧠 **Digital Logic Concepts**

### **🔄 Combinational Logic**

```vhdl
-- AND Gate: Output HIGH only when ALL inputs HIGH
out1 <= in1 AND in3;

-- OR Gate: Output HIGH when ANY input HIGH
out3 <= in4 OR in5;

-- Buffer: Output directly follows input
out2 <= in2;
```

### **⚡ Key FPGA Concepts Demonstrated**

- **Hardware Description Language (VHDL)**
- **Synthesis** - Converting VHDL to actual logic gates
- **Implementation** - Mapping logic to physical FPGA resources
- **Bitstream Generation** - Creating FPGA configuration file

---

## 🛠️ **Development Workflow**

### **1. Design Entry (VHDL)**

```vhdl
entity led1 is
    Port ( in1 : in STD_LOGIC;
           in3 : in STD_LOGIC;
           out1 : out STD_LOGIC);
end led1;

architecture Behavioral of led1 is
begin
    out1 <= in1 AND in3;
end Behavioral;
```

### **2. Synthesis & Implementation**

- **Synthesis** - Vivado converts VHDL to logic gates
- **Implementation** - Logic mapped to FPGA resources
- **Timing Analysis** - Verify circuit meets timing requirements

### **3. Bitstream & Programming**

- **Generate Bitstream** - Create FPGA configuration
- **Program Device** - Load configuration into FPGA
- **Test Hardware** - Verify logic behavior on board

---

## 🎓 **Learning Outcomes**

### **Technical Skills Gained**

- ✅ **VHDL Programming** - Hardware description language
- ✅ **FPGA Development** - Complete design flow
- ✅ **Digital Logic Design** - Combinational circuits
- ✅ **Vivado Usage** - Industry-standard FPGA tools
- ✅ **Hardware Verification** - Testing on real FPGA

### **Conceptual Understanding**

- ✅ **Parallel Processing** - Hardware vs software execution
- ✅ **Logic Synthesis** - Code to gates transformation
- ✅ **Resource Utilization** - FPGA architecture understanding
- ✅ **Hardware Debugging** - Using Vivado analysis tools

---

## 🚀 **Project Structure**

```
zaj1_18.10.2024/
├── 📄 zaj1_18.10.2024.xpr          # Main Vivado project file
├── 📁 zaj1_18.10.2024.srcs/        # Source files
│   └── sources_1/new/
│       ├── led1.vhd                 # AND gate logic
│       ├── led2.vhd                 # Buffer logic
│       └── switch.vhd               # OR gate logic
├── 📁 zaj1_18.10.2024.runs/        # Synthesis & implementation
└── 📁 zaj1_18.10.2024.hw/          # Hardware debugging
```

---

## 🔧 **Getting Started**

### **Prerequisites**

- **Xilinx Vivado** (2023.2 or compatible)
- **Digilent Arty Z7-10** board (optional - can simulate)
- **Basic digital logic** understanding

### **Quick Start**

1. **Open Project**: `zaj1_18.10.2024.xpr` in Vivado
2. **Explore Sources**: Check VHDL files in `sources_1/new/`
3. **Run Synthesis**: Generate logic implementation
4. **Simulate** (or program to board if available)

### **Understanding the Code**

- **Start with** `led2.vhd` - simplest buffer logic
- **Progress to** `led1.vhd` - AND gate implementation
- **Advanced** `switch.vhd` - OR gate with multiple inputs

---

## 💡 **Why This Project Matters**

### **🏭 Industry Relevance**

- **FPGA Development** is crucial in telecommunications, automotive, aerospace
- **Hardware Description** skills needed for custom chip design
- **Vivado** is the industry standard for Xilinx FPGA development

### **🎯 Career Applications**

- **Digital Signal Processing** - Real-time audio/video processing
- **Embedded Systems** - Hardware acceleration for microcontrollers
- **High-Performance Computing** - Parallel processing applications
- **IoT Development** - Custom hardware for specific applications

---

## 🔗 **Related Projects**

This FPGA project builds on skills from:

- **Assembly Programming** [`../MPLABXProjects/Project1.X`] - Understanding hardware at bit level
- **Embedded C** [`../MPLABXProjects/test1.X`] - Interfacing software with hardware

---

<div align="center">

**🎯 From Software to Hardware - Understanding Digital Logic at the Silicon Level**

_This project demonstrates the transition from programming microcontrollers to designing custom digital hardware_ 🚀

</div>
