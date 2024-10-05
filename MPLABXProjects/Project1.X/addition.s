.global addition
    
addition:	    ; Simple summation function 8bit - 253+250>255 
		    ; so we need to put value in two registers
    nop             ; No operation
    ldi r17, 0      ; Clear carry register r17
    ldi r16, 128    ; Load immediate value 253 into register r16
    ldi r18, 192    ; Load immediate value 250 into register r18
    add r16, r18    ; Add contents of register r18 to register r16
    adc r17, r17    ; Add carry to r17
    nop             ; No operation
    ret             ; Return
