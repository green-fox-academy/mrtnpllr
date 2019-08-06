#include <stdio.h>
#include <stdint.h>

// Use the Computer struct, give values to the fields and print them out in the main!
// Use the Notebook struct, give values to the fields and print them out in the main!

struct Computer {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
};

typedef struct {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
} Notebook;

int main()
{
    struct Computer computer;
    printf("Cpu speed: %.3f\nRam size: %d\nBits: %d\n", computer.cpu_speed_GHz = 3.4, computer.ram_size_GB = 8, computer.bits = 2);

    Notebook notebook;
    printf("Cpu speed: %.3f\nRam size: %d\nBits: %d\n", notebook.cpu_speed_GHz = 2.8, notebook.ram_size_GB = 4, notebook.bits = 2);



    return 0;
}