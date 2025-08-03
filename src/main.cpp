#include <avr/io.h>
#include <util/delay.h>

int main(void) {
    DDRB |= (1 << DDB5); // Set PB5 (pin 13) as output

    while (1) {
        PORTB ^= (1 << PORTB5); // Toggle LED
        _delay_ms(500);
    }

    return 0;
}
