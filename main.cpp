#include <iostream>
int main(int argc, char *argv[]) {
  if (argc < 2) {
    std::cerr << "You need to enter a name.\n";
    return 1;
  }
  char *name = argv[1];
  std::cout << "Hello " << name << "\n";
  return 0;
}
