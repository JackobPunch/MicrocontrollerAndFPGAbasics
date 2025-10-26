/**
 * PIC24FJ128GA705 Microcontroller Learning Examples
 *
 * This file demonstrates fundamental microcontroller programming concepts
 * in a clean, organized manner. Each section can be enabled/disabled
 * for focused learning.
 *
 * Hardware Setup:
 * - Red LED: RB4
 * - Yellow LED: RC3
 * - Green LED: RC4
 * - Blue LED: RC5
 * - Switch 0: RA7
 * - Switch 1: RA10
 * - ADC Input: RB12 (AN8)
 */

#include "mcc_generated_files/system.h"
#include "mcc_generated_files/pin_manager.h"
#include "mcc_generated_files/tmr1.h"
#include "mcc_generated_files/rtc.h"
#include "mcc_generated_files/adc1.h"

// =============================================================================
// LEARNING SECTION 1: BASIC LED CONTROL
// =============================================================================

/**
 * Demonstrates basic GPIO output control
 * Concept: Digital output, setting pins HIGH/LOW
 */
void demo_basic_led_control(void)
{
    // Turn all LEDs ON
    redLED_SetHigh();
    yellowLED_SetHigh();
    greenLED_SetHigh();
    blueLED_SetHigh();

    // Wait a moment (simple delay)
    for (uint32_t i = 0; i < 1000000; i++)
    {
        Nop();
    }

    // Turn all LEDs OFF
    redLED_SetLow();
    yellowLED_SetLow();
    greenLED_SetLow();
    blueLED_SetLow();
}

// =============================================================================
// LEARNING SECTION 2: SOFTWARE TIMING AND BLINKING
// =============================================================================

/**
 * Demonstrates software-based timing using delay loops
 * Concept: Software delays, timing control, LED blinking
 */
void demo_software_blink(void)
{
    // Blink red LED using software delay
    redLED_SetLow();
    for (uint32_t i = 0; i < 500000; i++)
    {
        Nop(); // No operation - just waste time
    }
    redLED_SetHigh();
    for (uint32_t i = 0; i < 500000; i++)
    {
        Nop();
    }
}

// =============================================================================
// LEARNING SECTION 3: HARDWARE TIMER-BASED OPERATIONS
// =============================================================================

/**
 * Demonstrates hardware timer usage for precise timing
 * Concept: Hardware timers, periodic interrupts, non-blocking delays
 */
void demo_timer_blink(void)
{
    static bool timer_initialized = false;

    // Initialize timer only once
    if (!timer_initialized)
    {
        TMR1_Start();
        timer_initialized = true;
    }

    // Check if timer period has elapsed
    TMR1_Tasks_16BitOperation();
    if (TMR1_GetElapsedThenClear())
    {
        // Toggle LEDs every timer period
        redLED_Toggle();
        blueLED_Toggle();
    }
}

// =============================================================================
// LEARNING SECTION 4: DIGITAL INPUT HANDLING
// =============================================================================

/**
 * Demonstrates reading digital inputs and conditional logic
 * Concept: Digital input, conditional statements, user interaction
 */
void demo_button_control(void)
{
    // Read switch state and control LEDs accordingly
    if (SW0_GetValue() == 1)
    {
        // Switch pressed - turn on red LED, turn off blue LED
        redLED_SetLow(); // Assuming active-low LEDs
        blueLED_SetHigh();
    }
    else
    {
        // Switch not pressed - opposite state
        redLED_SetHigh();
        blueLED_SetLow();
    }
}

// =============================================================================
// LEARNING SECTION 5: ANALOG-TO-DIGITAL CONVERSION
// =============================================================================

// Global variables for ADC demonstration
uint16_t adc_reading = 0;
float adc_scaled = 0.0f;

/**
 * Converts ADC reading to scaled float value (0.0 to 1.0)
 * Concept: Data type conversion, scaling, floating point math
 */
float convert_adc_to_float(uint16_t adc_value)
{
    return adc_value / 1023.0f; // Scale 10-bit ADC (0-1023) to 0.0-1.0
}

/**
 * Demonstrates analog input reading and processing
 * Concept: ADC, analog signals, data conversion
 */
void demo_adc_reading(void)
{
    // Read ADC channel 8 (connected to RB12/AN8)
    adc_reading = ADC1_GetConversion(8);

    // Convert to scaled value
    adc_scaled = convert_adc_to_float(adc_reading);

    // Use ADC value to control LED brightness pattern
    // (This is a simple example - real PWM would be better for brightness)
    if (adc_scaled > 0.75f)
    {
        greenLED_SetLow(); // Bright input
    }
    else if (adc_scaled > 0.5f)
    {
        yellowLED_SetLow(); // Medium input
    }
    else if (adc_scaled > 0.25f)
    {
        redLED_SetLow(); // Low input
    }
    else
    {
        // Very low input - all LEDs off
        redLED_SetHigh();
        yellowLED_SetHigh();
        greenLED_SetHigh();
    }
}

// =============================================================================
// LEARNING SECTION 6: BIT MANIPULATION
// =============================================================================

/**
 * Creates a bit mask with n rightmost bits set to 0
 * Concept: Bit manipulation, bitwise operations, masks
 *
 * Example: rightZero(3) returns 0b11111000 (assuming 8-bit)
 */
unsigned int rightZero(unsigned int n)
{
    // Check if n exceeds the bit width of unsigned int
    if (n >= sizeof(unsigned int) * 8)
    {
        return 0;
    }

    // If n is 0, return all bits set to 1
    if (n == 0)
    {
        return ~0;
    }

    // Create number with n rightmost bits as 0, rest as 1
    // Shift 1 left by n positions, subtract 1, then invert
    return ~((1U << n) - 1);
}

/**
 * Demonstrates bit manipulation concepts
 * Concept: Bitwise operations, bit patterns, masks
 */
void demo_bit_manipulation(void)
{
    static unsigned int bit_demo_result = 0;

    // Example: Create mask with 5 rightmost bits as 0
    bit_demo_result = rightZero(5);

    // Use the result for something visible (e.g., control LED pattern)
    // This is just for demonstration - result is stored in global variable
    // In real application, you might use this for port masking, etc.
}

// =============================================================================
// LEARNING SECTION 7: DATA STRUCTURES
// =============================================================================

// Global variables for RTC demonstration
zegar_RTC clock_time;
kal_RTC calendar_date;

/**
 * Demonstrates custom data structures
 * Concept: Structures, data organization, time/date handling
 */
void demo_data_structures(void)
{
    // Initialize time structure
    clock_time.s = 30; // seconds
    clock_time.m = 45; // minutes
    clock_time.g = 14; // hours (assuming 'g' stands for 'godzina')

    // Initialize calendar structure
    calendar_date.dzien = 26; // day
    calendar_date.msc = 10;   // month
    calendar_date.rok = 25;   // year (2025)

    // In a real application, you would increment these values
    // based on a real-time clock or timer interrupts
}

// =============================================================================
// MAIN FUNCTION AND DEMONSTRATION CONTROL
// =============================================================================

// Configuration flags - enable/disable different learning sections
#define ENABLE_BASIC_LED_DEMO 1
#define ENABLE_SOFTWARE_BLINK 0 // Disable - blocks other demos
#define ENABLE_TIMER_BLINK 1
#define ENABLE_BUTTON_CONTROL 1
#define ENABLE_ADC_DEMO 1
#define ENABLE_BIT_MANIPULATION 1
#define ENABLE_DATA_STRUCTURES 1

int main(void)
{
    // Initialize the microcontroller system
    SYSTEM_Initialize();

    // Initialize ADC if needed
    ADC1_Initialize();

// Initialize data structures
#if ENABLE_DATA_STRUCTURES
    demo_data_structures();
#endif

    // Main program loop
    while (1)
    {

#if ENABLE_BASIC_LED_DEMO
        // Run basic LED demo once at startup
        static bool basic_demo_done = false;
        if (!basic_demo_done)
        {
            demo_basic_led_control();
            basic_demo_done = true;
        }
#endif

#if ENABLE_SOFTWARE_BLINK
        // Software-based blinking (blocking)
        demo_software_blink();
#endif

#if ENABLE_TIMER_BLINK
        // Hardware timer-based blinking (non-blocking)
        demo_timer_blink();
#endif

#if ENABLE_BUTTON_CONTROL
        // Button-controlled LEDs
        demo_button_control();
#endif

#if ENABLE_ADC_DEMO
        // ADC reading and processing
        demo_adc_reading();
#endif

#if ENABLE_BIT_MANIPULATION
        // Bit manipulation demonstration
        demo_bit_manipulation();
#endif

        // Small delay to prevent overwhelming the system
        for (int i = 0; i < 1000; i++)
        {
            Nop();
        }
    }

    return 1;
}