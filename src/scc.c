#include "../include/scan.h"
#include "../include/data.h"

int main(int argc, char** argv) {
  init_scanner();
  Infile = fopen(argv[1], "r");
  
  if (Infile == NULL) {
    perror("Error opening file");
    return 1;
  }

  scan_debugger();

  fclose(Infile);
  return 0;
}
