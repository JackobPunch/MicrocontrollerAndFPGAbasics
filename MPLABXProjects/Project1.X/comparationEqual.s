.global comparation1
    
comparation1:  
    nop            ; No operation
    ldi r16, 10    ; Load immediate value 10 into register r16
    cpi r16, 11    ; Compare immediate value 10 with register r16
    breq Equal     ; Branch to Equal if equal
    jmp End        ; Jump to End if not equal
Equal:
    nop            ; No operation
End:
    nop            ; No operation
    ret            ; Return


