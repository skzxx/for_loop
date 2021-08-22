#include <iostream>

int main () {
  //loop basic. hanya menggunakan increment dan batas.
  /*for(OperatorIndex; kondisi, Operator_index++) {
    Aksi
  }
  */
  std::cout << "Looping (1) \n" << std::endl;
  for(int OperatorIndex = 1 /*sebagai indeks awal*/; OperatorIndex <= 10 /*Sebagai batas*/; OperatorIndex++) {
    std::cout << OperatorIndex << "\n" << std::endl;
  }
  //menggunakan increment yang berbeda
  std::cout << "Looping (2) \n" << std::endl;
  for(int OperatorIndex = 1 /*sebagai indeks awal*/; OperatorIndex <= 10 /*Sebagai batas*/; OperatorIndex = OperatorIndex + 2) {
    std::cout << OperatorIndex << "\n" << std::endl;
  }
  //Decrement
  std::cout << "Looping (3) \n" << std::endl;
  for(int OperatorIndex = 1 /*sebagai indeks awal*/; OperatorIndex <= 10 /*Sebagai batas*/; OperatorIndex--) {
    std::cout << OperatorIndex << "\n" << std::endl;
  }
   //Deret dan sum
  std::cout << "Looping (4) \n" << std::endl;
  int TotalIndex = 0;
  for(int OperatorIndex = 1 /*sebagai indeks awal*/; OperatorIndex <= 10 /*Sebagai batas*/; OperatorIndex++) {
    TotalIndex = TotalIndex + OperatorIndex;
    std::cout << OperatorIndex << " || " <<  TotalIndex << "\n" << std::endl;
    /*
    index || (TotalIndex = TotalIndex + Index)
    1 || 1 = (TotalIndex = 0 + 1) = 1
    2 || 3 = (TotalIndex = (0+1) + 2 = 3)
    3 || 6 = (TotalIndex = ((0+1)+2)+3 = 6)
    4 || 10 = (TotalIndex = (((0+1)+2)+3+4) = 10)
    5 || 15 .......
    6 || 21 .......
    7 || 28 .......
    8 || 36 .......
    9 || 45 .......
    10 || 55 ......
    
    */
  }
}