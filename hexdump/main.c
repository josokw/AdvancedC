#include <stdio.h>

int isLittleEndian(void);
void hexdumpInt(int data);

int main(void)
{
   int i1 = 0;
   int i2 = 1;
   int i3 = 255;

   if (isLittleEndian())
   {
      puts("     Little endian integers:\n");
   }
   else
   {
      puts("     Big endian integers:\n");
   }

   hexdumpInt(i1);
   puts("");
   hexdumpInt(i2);
   hexdumpInt(-i2);
   puts("");
   hexdumpInt(i3);
   hexdumpInt(-i3);

   return 0;
}

int isLittleEndian(void)
{
   const int test = 1;
   const unsigned char* pByte = (const unsigned char*)&test;

   return pByte[0] == 1;
}

void hexdumpInt(int data)
{
   size_t i = 0;
   const unsigned char *pData = (const unsigned char *)&data;

   printf("%10d = ", data);
   for (i = 0; i < sizeof(int); i++)
   {
      printf("%02x ", pData[i]);
   }
   printf("\n");
}
