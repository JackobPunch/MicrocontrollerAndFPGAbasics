.global comparation2
    
comparation2:  
    nop            ; No operation
    ldi r16, 10    ; Load immediate value 10 into register r16
    cpi r16, 11    ; Compare immediate value 11 with register r16
    brmi Less      ; Branch to Less if negative
    jmp End        ; Jump to End if not less
Less:
    nop            ; No operation
End:
    nop            ; No operation
    nop            ; No operation
    ret            ; Return


