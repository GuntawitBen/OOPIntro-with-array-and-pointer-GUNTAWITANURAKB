#include <iostream>
#include <iomanip>
using namespace std;

#include "student.h"

int main(int argc, char* argv[]) {
 
  int n = (argc - 1) / 3;
  student *pt_std = new student[n];
  //./aout monkey 20 3.5 Art 15 2.5
  for(int i = 0; i < n; i++, pt_std++){
    // 3 inputs per n
    (*pt_std).set_all(argv[i * 3 + 1], atoi(argv[i * 3 + 2]), atof(argv[i * 3 + 3]));
   }
  pt_std -= n;

  float max_gpa = 0;
  for(int i = 0; i < n; i++, pt_std++){
    if(max_gpa < pt_std->get_gpa()){
      max_gpa = pt_std->get_gpa();
    }
  }
  pt_std -= n;
  
  /*put them in 2 different loops*/
  for(int i = 0; i < n; i++, pt_std++){  
    if(pt_std->get_gpa() == max_gpa){
      pt_std->print_all();
    }
  }  
  pt_std -= n;
  
  delete [] pt_std;
  //name =oat
  //age =21
  //score=55
  //print all info


  }