#include "comp.h"
#include <stdlib.h>
#include <string.h>

const char *symbols = "0123456789abcdef";

int nr_from_str(int base, char *txt){
  int rslt, iter, powr, lenf;
  for(
    iter=0, rslt=0, powr=1, lenf=strlen(txt);
    iter < lenf;
    iter++, powr*=base
  )
    rslt+=powr*(int)(strchr(symbols, txt[lenf-1-iter]) - symbols); 
  return rslt;
}

int nr_len_in_base(int nr, int base){
  int rslt, powr;

  for(
    powr=1, rslt=1;
    powr < nr; 
    powr*=base, rslt++
  );

  return nr != powr ? rslt-1 : rslt;
}

char* str_from_nr(int nr, int base){
  char *rslt;
  int lenf = nr_len_in_base(nr, base), iter;
  rslt = (char*) calloc(1, lenf+1);
  for(iter=lenf-1; iter > -1; iter--, nr/=base)
    rslt[iter]=symbols[nr%base];
  return rslt;
}
