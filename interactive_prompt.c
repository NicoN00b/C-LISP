//Windows Version
// #include <stdio.h>
//
// static char input[2048];
//
// int main(int argc, char** argv) {
//
//   puts("Lip2TheZip Version 0.0.0.1");
//   puts("Press Ctrl+c to Exit\n");
//
//   while(1) {
//
//     fputs("lipzy> ", stdout);
//
//     fgets(input, 2048, stdin);
//
//     printf("No you're a %s", input);
//   }
//
//   return 0;
// }


//Linux-Mac-Unix Version

#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
#include <editline/history.h>

int main(int argc, char** argv) {

  puts("Lip2TheZip Version 0.0.0.1");
  puts("Press Ctrl+c to Exit\n");

  while(1) {

    char* input = readline("lipzy> ");

    add_history(input);

    printf("No you're a %s\n", input);

    free(input);
  }

  return 0;
}
