
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "defs.h"
#include "io.h"
#include "comp.h"

int main(int argc, char* argv[]){
  if(2 == argc && 0 == strcmp(HELP_STR, argv[1])){
    log_help(stderr);
    return 1;
  }
  if(CLA_ARG != argc-1){
    log_cla_err(stderr, argc-1, CLA_ARG);
    return -1;
  }
  int src = atoi(argv[1]), dst = atoi(argv[3]);
  int nr = nr_from_str(src, argv[2]);
  char *new_form = str_from_nr(nr, dst);
  printf("%s\n", new_form);
  printf("%d\n", nr_from_str(src, argv[2]));
  printf("%d\n", nr_len_in_base(nr, dst));
  return 0;
}
