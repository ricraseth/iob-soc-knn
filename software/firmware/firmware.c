#include "system.h"
#include "iob-uart.h"

int main()
{ 
  //init uart 
  uart_init(UART_BASE,UART_CLK_FREQ/UART_BAUD_RATE);   

  uart_printf("\n\n\nHello world!\n\n\n");

  //hang up
  uart_endtext();
    
}
