/*Q03. Atomic Toggle of a GPIO Bit (MMIO Register)
------------------------------------------------
Problem Statement:
Safely toggle a specific GPIO bit in a memory-mapped I/O register without race conditions during interrupts.
Explanation / Concept:
Memory-mapped I/O requires volatile access. Toggling a bit must be atomic w.r.t. interrupts/other contexts to avoid read-modify-write
races.
Disabling IRQ locally around the critical section or using atomic bit-band/set/clear registers ensures correctness on MCUs/SoCs.
Step-by-Step Logic (No Code):
1. Determine MMIO base address and bit position for the GPIO line.
2. Enter a short critical section (e.g., disable local IRQs or use atomic set/clear register).
3. Perform the toggle operation (XOR the target bit).
4. Exit the critical section and ensure memory ordering (barriers if required by the platform).
Sample Inputs & Expected Outputs:
Action | Initial Reg (bin) | Bit | Final Reg (bin)
-------+-------------------+-----+----------------
Toggle | 0001 0000 | 4 | 0000 0000
Toggle | 0000 0000 | 4 | 0001 0000 */

#include <stdio.h>
#include <stdint.h>
volatile uint32_t GPIO_REG=0; // simulate register

int main() {
    int bit;
    printf("Enter bit to toggle: "); 
    scanf("%d",&bit);

    GPIO_REG ^= (1u<<bit);       // toggle that bit
    printf("New register = 0x%X\n", GPIO_REG);

    return 0;
}
