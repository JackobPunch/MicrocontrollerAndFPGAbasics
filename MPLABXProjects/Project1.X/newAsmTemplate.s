.global add_asm
    
    add_asm: // etykieta
	nop // no operation
	ldi r18, 250 // definicja/implemantacja sta?ej
	ldi r16, 253 
	add r16, r18
	nop // jeden takt zegaru
	nop // przydaje si? w kompilowaniu jako breakpoint
	ret // powrót z funkcji
