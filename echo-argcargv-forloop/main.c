/* Print all command line items one by one to screen (stdout).
 * Example with 3 additional commandline parameters:
 *
 *    >./echo-argcargv-forloop file.txt 3 "input data for file"
 *
 * In QtCreator input commandline parameters:
 *
 *    Projects Build&Run, Run, Arguments
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
   for (i = 1; i < argc; i++)
   {
      printf("- argv[%d]: %s\n", i, argv[i]);
   }
   puts("\n");

   /* Print the third character of all command line arguments if available
    */
   for (i = 1; i < argc; i++)
   {
      /* Check for availability third character */
      if (strlen(argv[i]) > 2)
      {
         printf("- argv[%d][2]: %c\n", i, argv[i][2]);
      }
   }
   puts("\n");

   return 0;
}
