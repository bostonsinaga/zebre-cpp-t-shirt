/**
 * compile.cmd
 * "bin/baju.exe" catatan.txt "C++ oleh Bjarne Stroustrup"
 */

#include <iostream>
#include <fstream>

int main(int argc, char *argv[]) {

  std::ofstream output("bin/" + std::string(
    argc > 1 ? argv[1] : "catatan_kosong.txt"
  ));

  for (int i = 2; i < argc; i++) {
    output << argv[i] << (i < argc - 1 ? " " : "");
  }

  output.close();
  return 0;
}

