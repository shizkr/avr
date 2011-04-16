#include<avr/io.h>

void uart_init();
void delay();
unsigned char USART_Rx();
void init_port();

int main()
{
	unsigned char data;
	char output = 0;

	uart_init();
	init_port();

	for(;;)
	{
		delay();
		PORTB = ( 0 <<PB5 );
		delay();
		PORTB = ( 1 <<PB5 );
	}

	return 0;
}

void init_port(void)
{
	PORTB = ( 1<<PB5 );
	DDRB = ( 1<<DDB5 );
	//__no_operation();
}

void uart_init()
{

}

unsigned char USART_Rx()
{
}

void delay()
{
	unsigned long i,j,k;
	for (i=0;i<9000000 ;i++ )
		for(j=0;j<9000000;j++)
			k=j;
}
