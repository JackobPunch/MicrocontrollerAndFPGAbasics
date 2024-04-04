#define PORTB 0x18
#define DDRB 0x17
#define PINA 0x19

.global blinkIf

blinkIf:
    nop
    sbic PINA, 1 ; Skip next instruction if PA1 is low
    rjmp end_blink ; Jump to end_blink if PA1 is low
    ldi r17,0b10000000
    in r16,PORTB
    eor r16,r17
    out PORTB,r16
end_blink:
    ret


