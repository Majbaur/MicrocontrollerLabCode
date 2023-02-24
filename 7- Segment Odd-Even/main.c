#include <avr/io.h>
#include <util/delay.h>


int main(void)
{ 
	char arr[] = {0b11000000, 0b11111001, 0b10100100, 0b10110000, 0b10011001, 0b10010010, 0b10000010, 0b11111000, 0b10000000, 0b10010000};
	DDRD=0b11111111;
	
	while(1){
		for(int i=0; i<10; i+=2){
		PORTD=arr[i];
		_delay_ms(100);
		}	
		for(int i=1; i<10; i+=2){
		PORTD=arr[i];
		_delay_ms(100);
		}
	}
}