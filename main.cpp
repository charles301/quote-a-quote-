#include <iostream>

int main() {
  std::string quote;
  std::string author;

  std::cout << "Please input a quote!\n";

  getline(std::cin, quote);

  std::cout << "And the author who said the quote?  \n";

  getline(std::cin, author);

  std::cout << "A wise man once said: \"" << quote <<"\"\n"
  "- "<< author << "\n";
}

