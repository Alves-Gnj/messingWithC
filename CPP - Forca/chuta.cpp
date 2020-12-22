#include "chuta.hpp"

#include <iostream>
#include <map>
#include <vector>

#include "letraExiste.hpp"

extern std::map<char, bool> chutou;
extern std::vector<char> chutesErrados;

void chuta() {
  std::cout << "Seu chute: ";
  char chute;
  std::cin >> chute;

  chutou[chute] = true;

  if (letraExiste(chute)) {
    std::cout << ">> Você acertou." << std::endl;
  } else {
    std::cout << ">> ERROU!" << std::endl;
    chutesErrados.push_back(chute);
  }
  std::cout << std::endl;
}