#include <stdio.h>
#include <dos.h>

void main()
{
    char far *fp;       // far pointer declaration

    unsigned int seg, off;

    // Example: get far pointer to video memory (B800:0000 for text mode)
    seg = 0xB800;       // segment of video RAM
    off = 0x0000;       // offset
    fp = (char far *)MK_FP(seg, off);

    // Write character 'A' with attribute 0x07 (white on black)
    fp[0] = 'A';
    fp[1] = 0x07;

    printf("Character written to video memory using a far pointer.\n");
}
