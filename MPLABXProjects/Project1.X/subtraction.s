.global substraction
    
substraction:	   ; Simple subtraction function 511 - 513
    nop            ; No operation
    ldi r17, 2     ; Set carry register r17 to 2
    ldi r16, 1     ; Set carry register r16 to 1
    ldi r19, 1     ; Set carry register r19 to 1
    ldi r18, 255   ; Set carry register r18 to 255
    sub r16, r18   ; Subtract contents of register r18 from register r16
    sbc r17, r19   ; Subtract carry and r19 from register r17
    nop            ; No operation
    ret            ; Return


