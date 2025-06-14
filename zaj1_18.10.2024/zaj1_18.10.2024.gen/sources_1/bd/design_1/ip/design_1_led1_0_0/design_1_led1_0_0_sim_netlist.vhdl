-- Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
-- Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2023.2 (win64) Build 4029153 Fri Oct 13 20:14:34 MDT 2023
-- Date        : Fri Oct 18 16:38:35 2024
-- Host        : rts-lab-02 running 64-bit major release  (build 9200)
-- Command     : write_vhdl -force -mode funcsim
--               c:/Student/PRNE2024/zaj1_18.10.2024/zaj1_18.10.2024.gen/sources_1/bd/design_1/ip/design_1_led1_0_0/design_1_led1_0_0_sim_netlist.vhdl
-- Design      : design_1_led1_0_0
-- Purpose     : This VHDL netlist is a functional simulation representation of the design and should not be modified or
--               synthesized. This netlist cannot be used for SDF annotated simulation.
-- Device      : xc7z010clg400-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity design_1_led1_0_0 is
  port (
    in1 : in STD_LOGIC;
    in3 : in STD_LOGIC;
    out1 : out STD_LOGIC
  );
  attribute NotValidForBitStream : boolean;
  attribute NotValidForBitStream of design_1_led1_0_0 : entity is true;
  attribute CHECK_LICENSE_TYPE : string;
  attribute CHECK_LICENSE_TYPE of design_1_led1_0_0 : entity is "design_1_led1_0_0,led1,{}";
  attribute DowngradeIPIdentifiedWarnings : string;
  attribute DowngradeIPIdentifiedWarnings of design_1_led1_0_0 : entity is "yes";
  attribute IP_DEFINITION_SOURCE : string;
  attribute IP_DEFINITION_SOURCE of design_1_led1_0_0 : entity is "module_ref";
  attribute X_CORE_INFO : string;
  attribute X_CORE_INFO of design_1_led1_0_0 : entity is "led1,Vivado 2023.2";
end design_1_led1_0_0;

architecture STRUCTURE of design_1_led1_0_0 is
begin
out1_INST_0: unisim.vcomponents.LUT2
    generic map(
      INIT => X"8"
    )
        port map (
      I0 => in1,
      I1 => in3,
      O => out1
    );
end STRUCTURE;
