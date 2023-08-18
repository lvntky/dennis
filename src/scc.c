#include "../include/scan.h"
#include "../include/data.h"

int main(int argc, char** argv) {
  init_scanner();
  Infile = fopen(argv[1], "r");

  scan_debugger();

  return 0;
}
