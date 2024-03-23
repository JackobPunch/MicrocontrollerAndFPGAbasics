#define PINA 0x19
#define DDRA 0x1A
#define PORTB 0x18
#define DDRB 0x17

.global diode

diode:
    nop
    //ldi r16,0x00 ; To set all A ports as an inputs
    ldi r16, 0b11111101  ; Set all bits except PA1
    out DDRA, r16  ; Set only PA1 of PORTA as input
    ldi r16, 0b10000000  ; Set PB7 as output
    out DDRB, r16

    ldi r18, 0b10000000  ; Mask for PB7
    ldi r17, 0b01111111  ; Mask for PB7
    
    in r16, PINA  ; Read PINA
    andi r16, 0b00000010  ; Check PA1
    breq off  ; If PA1 is not set, turn off the LED
    out PORTB, r18  ; Turn on the LED at PB7
    rjmp end
    
    off:
    out PORTB, r17  ; Turn off the LED at PB7
    
    end:
    ret
    
    


