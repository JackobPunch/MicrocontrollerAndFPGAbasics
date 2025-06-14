// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.2 (win64) Build 4029153 Fri Oct 13 20:14:34 MDT 2023
// Date        : Fri Oct 18 16:13:01 2024
// Host        : rts-lab-02 running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode synth_stub
//               c:/Student/PRNE2024/zaj1_18.10.2024/zaj1_18.10.2024.gen/sources_1/bd/design_1/ip/design_1_led2_0_0/design_1_led2_0_0_stub.v
// Design      : design_1_led2_0_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7z010clg400-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* X_CORE_INFO = "led2,Vivado 2023.2" *)
module design_1_led2_0_0(in2, out2)
/* synthesis syn_black_box black_box_pad_pin="in2,out2" */;
  input in2;
  output out2;
endmodule
