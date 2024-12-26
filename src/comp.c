#include "comp.h"
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

  return nr % base ? rslt-1 : rslt;
}
