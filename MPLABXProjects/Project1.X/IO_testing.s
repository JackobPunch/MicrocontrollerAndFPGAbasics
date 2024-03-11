#define PORTB 0x16 
#define PORTA 0x1b 
.global io_test
    io_test:
    	nop		    ; No operation
	ldi r16,0	    ; Load immediate value 0 into register r16
	in r16,PORTB	    ; Read input from PORTB (PB0) register into r16
	cpi r16,1	    ; Compare value in r16 with immediate value 1
	breq turnOnLED	    ; Branch to turnOnLED if equal
	rjmp exit	    ; Otherwise, jump to exit
	turnOnLED:
	out PORTA, r16	    ; Output value in r16 to PORTA (PA0) register
    exit:
	nop		    ; No operation
	ret		    ; Return



