//Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
//Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2023.2 (win64) Build 4029153 Fri Oct 13 20:14:34 MDT 2023
//Date        : Fri Oct 18 16:50:06 2024
//Host        : rts-lab-02 running 64-bit major release  (build 9200)
//Command     : generate_target design_1_wrapper.bd
//Design      : design_1_wrapper
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

module design_1_wrapper
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

  wire in1_0;
  wire in1_1;
  wire in2_0;
  wire in4_0;
  wire in5_0;
  wire out1_0;
  wire out2_0;
  wire out3_0;

  design_1 design_1_i
       (.in1_0(in1_0),
        .in1_1(in1_1),
        .in2_0(in2_0),
        .in4_0(in4_0),
        .in5_0(in5_0),
        .out1_0(out1_0),
        .out2_0(out2_0),
        .out3_0(out3_0));
endmodule
