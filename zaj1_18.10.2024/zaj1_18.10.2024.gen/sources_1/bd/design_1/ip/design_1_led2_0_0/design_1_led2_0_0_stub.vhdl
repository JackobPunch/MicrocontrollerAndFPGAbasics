-- Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
-- Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2023.2 (win64) Build 4029153 Fri Oct 13 20:14:34 MDT 2023
-- Date        : Fri Oct 18 16:13:01 2024
-- Host        : rts-lab-02 running 64-bit major release  (build 9200)
-- Command     : write_vhdl -force -mode synth_stub
--               c:/Student/PRNE2024/zaj1_18.10.2024/zaj1_18.10.2024.gen/sources_1/bd/design_1/ip/design_1_led2_0_0/design_1_led2_0_0_stub.vhdl
-- Design      : design_1_led2_0_0
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xc7z010clg400-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity design_1_led2_0_0 is
  Port ( 
    in2 : in STD_LOGIC;
    out2 : out STD_LOGIC
  );

end design_1_led2_0_0;

architecture stub of design_1_led2_0_0 is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "in2,out2";
attribute X_CORE_INFO : string;
attribute X_CORE_INFO of stub : architecture is "led2,Vivado 2023.2";
begin
end;
