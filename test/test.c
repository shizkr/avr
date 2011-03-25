#include<avr/io.h>

void uart_init();
void delay();
unsigned char USART_Rx();

int main()
{
unsigned char data;

uart_init();

for(data='a';data<='z';data++)
{

delay();
}

return 0;
}

void uart_init()
{

}

unsigned char USART_Rx()
{
}

void delay()
{
unsigned int i,j;
for (i=0;i<100 ;i++ )
for(j=0;j<30;j++);
}
