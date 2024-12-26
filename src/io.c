#include "io.h"

FILE* log_help(FILE* f){
  fprintf(f, "Give the next args\n");
  fprintf(f, "\tDecimal form of the starting base\n");
  fprintf(f, "\tNumber written in starting base\n");
  fprintf(f, "\tDecimal form of the target base\n");
  fprintf(f, "The accepted bases go from 2 to 16\n");
  return f;
}

FILE* log_cla_err(FILE* f, int err, int corect){
  fprintf(f, "%d args were given\n", err);
  fprintf(f, "%d args are needed\n", corect);
  return log_help(f);
}
