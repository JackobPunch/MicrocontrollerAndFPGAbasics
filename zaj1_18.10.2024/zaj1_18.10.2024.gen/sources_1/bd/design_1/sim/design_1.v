//Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
//Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2023.2 (win64) Build 4029153 Fri Oct 13 20:14:34 MDT 2023
//Date        : Fri Oct 18 16:50:05 2024
//Host        : rts-lab-02 running 64-bit major release  (build 9200)
//Command     : generate_target design_1.bd
//Design      : design_1
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CORE_GENERATION_INFO = "design_1,IP_Integrator,{x_ipVendor=xilinx.com,x_ipLibrary=BlockDiagram,x_ipName=design_1,x_ipVersion=1.00.a,x_ipLanguage=VERILOG,numBlks=3,numReposBlks=3,numNonXlnxBlks=0,numHierBlks=0,maxHierDepth=0,numSysgenBlks=0,numHlsBlks=0,numHdlrefBlks=3,numPkgbdBlks=0,bdsource=USER,synth_mode=Hierarchical}" *) (* HW_HANDOFF = "design_1.hwdef" *) 
module design_1
   (in1_0,
    in1_1,
    in2_0,
    in4_0,
    in5_0,
    out1_0,
    out2_0,
    out3_0);
  input in1_0;
  input in1_1;
  input in2_0;
  input in4_0;
  input in5_0;
  output out1_0;
  output out2_0;
  output out3_0;

  wire in1_0_1;
  wire in1_1_1;
  wire in2_0_1;
  wire in4_0_1;
  wire in5_0_1;
  wire led1_0_out1;
  wire led2_0_out2;
  wire switch_0_out3;

  assign in1_0_1 = in1_0;
  assign in1_1_1 = in1_1;
  assign in2_0_1 = in2_0;
  assign in4_0_1 = in4_0;
  assign in5_0_1 = in5_0;
  assign out1_0 = led1_0_out1;
  assign out2_0 = led2_0_out2;
  assign out3_0 = switch_0_out3;
  design_1_led1_0_0 led1_0
       (.in1(in1_0_1),
        .in3(in1_1_1),
        .out1(led1_0_out1));
  design_1_led2_0_0 led2_0
       (.in2(in2_0_1),
        .out2(led2_0_out2));
  design_1_switch_0_0 switch_0
       (.in4(in4_0_1),
        .in5(in5_0_1),
        .out3(switch_0_out3));
endmodule
