/* Print all command line items one by one to screen (stdout).
 * Example with 3 additional commandline parameters:
 *
 *    >./echo-argcargv-whileloop file.txt 123 6*2-100
 *
 * In QtCreator input commandline parameters:
 *
 *    Projects Build&Run, Run, Arguments
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   int i = 0;

   /* Always check the number of required arguments */
   if (argc < 2)
   {
      /* Error messages to stderr */
      fprintf(stderr,
              "\tERROR %s: \n"
              "\tUSAGE: expected 1 or more commandline parameters\n\n",
              argv[0]);
      exit(EXIT_FAILURE);
   }

   /* Print all command line arguments */
   i = 1;
   while (argv[i] != NULL)
   {
      printf("- argv[%d]: %s\n", i, argv[i]);
      i++;
   }
   printf("- argv[%d]: %s\n", i, argv[i]);
   puts("\n");

   return 0;
}
