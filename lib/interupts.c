#include "include/kernel.h"

extern void set_interrupt_register(unsigned int i, unsigned int y);


void init_interrupt() {
    tws("\nInterrupt\n");
    set_interrupt_register(5, 8);
    tws("\nAfter it\n");
}