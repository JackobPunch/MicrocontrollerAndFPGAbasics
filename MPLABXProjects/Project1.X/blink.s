#define PORTB 0x18
#define DDRB 0x17
    
.global blink
    
blink:
    nop
    ldi r17,0b10000000
    in r16,PORTB
    eor r16,r17
    out PORTB,r16
    
    ldi r20, 0xFF
    ldi r21, 0xFF
delay_loop:
    dec r21
    brne delay_loop
    dec r20
    brne delay_loop
    
    ret

