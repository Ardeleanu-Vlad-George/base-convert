
#include <stdio.h>
#include <string.h>
#include "defs.h"
#include "io.h"

int main(int argc, char* argv[]){
  if(2 == argc && 0 == strcmp(HELP_STR, argv[1])){
    log_help(stderr);
    return 1;
  }
  if(CLA_ARG != argc-1){
    log_cla_err(stderr, argc-1, CLA_ARG);
    return -1;
  }
  return 0;
}
