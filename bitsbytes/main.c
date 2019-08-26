#include <stdio.h>

#define NBYTES 10

typedef unsigned char byte_t;

void hexDump(const byte_t *pbMem, int size);
void setBit(byte_t *pByte, int iBit);
void resetBit(byte_t *pByte, int iBit);

int main(void)
{
   byte_t *pMemory = (byte_t *)0x00030200;
   byte_t bytesMemory[NBYTES] = {0x00, 0x11, 0x22};

   puts("Bytes in bytesMemory[NBYTES]:");
   hexDump(bytesMemory, NBYTES);
   puts("");

   /* Set byte in 0x0003020 to 0xAA, execution is avoided */
   /* *(pMemory + 0x0B) = 0xAA; */

   puts("Set bit 3 in byte 5 in bytesMemory[NBYTES]:");
   setBit(bytesMemory + 5, 3);
   hexDump(bytesMemory, NBYTES);
   puts("");

   puts("Set bit 5 in byte 6 in bytesMemory[NBYTES]:");
   setBit(bytesMemory + 6, 5);
   hexDump(bytesMemory, NBYTES);

   return 0;
}

void hexDump(const byte_t *pbMem, int size)
{
   int offset = 0;
   while (offset < size)
   {
      printf("%02x ", *(pbMem + offset));
      offset++;
   }
   puts("");
}

/* Bit numbering in byte 76543210, 0 <= bit < 8 */
void setBit(byte_t *pByte, int iBit)
{
   const byte_t mask = 0x01 << iBit; /* << shift left operator */
   *pByte |= mask;
}

/* Bit numbering in byte 76543210, 0 <= bit < 8 */
void resetBit(byte_t *pByte, int iBit)
{
   const byte_t mask = ~(0x01 << iBit); /* << shift left operator */
   *pByte &= mask;
}
