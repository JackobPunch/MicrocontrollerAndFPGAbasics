.global lilFunction

lilFunction:  
    nop            ; No operation
    ld r16, 1    
    cpi r16, 1    
    breq Equal     ; Branch to Equal if equal
    jmp End        ; Jump to End if not equal
Equal:
    nop            ; No operation
End:
    nop            ; No operation
    nop            ; No operation
    ret            ; Return
