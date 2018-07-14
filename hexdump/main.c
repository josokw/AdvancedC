#include <stdio.h>

void hexdumpInt(int data);

int main(void)
{
   int i1 = 0;
   int i2 = 1;
   int i3 = 255;

   hexdumpInt(i1);
   hexdumpInt(i2);
   hexdumpInt(-i2);
   hexdumpInt(i3);
   hexdumpInt(-i3);

   return 0;
}

void hexdumpInt(int data)
{
   size_t i = 0;
   const unsigned char *pData = (const unsigned char*)&data;

   printf("%10d = ", data);
   for (i = 0; i < sizeof(int); i++)
   {
      printf("%02x ", pData[i]);
   }
   printf("\n");
}
