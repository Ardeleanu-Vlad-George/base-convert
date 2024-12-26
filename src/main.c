
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
  printf("%d\n", nr_from_str(src, argv[2]));
  return 0;
}
