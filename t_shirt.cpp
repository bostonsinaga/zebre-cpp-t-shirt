/**
 * g++ t_shirt.cpp -o bin/baju
 * bin/baju.exe catatan.txt C++ oleh Bjarne Stroustrup
 */

#include <iostream>
#include <fstream>

int main(int argc, char *argv[]) {

  std::ofstream output(
    argc > 1 ? argv[1] : "bin/catatan_kosong.txt"
  );

  for (int i = 2; i < argc; i++) {
    output << argv[i] << (i < argc - 1 ? " " : "");
  }

  output.close();
  return 0;
}

