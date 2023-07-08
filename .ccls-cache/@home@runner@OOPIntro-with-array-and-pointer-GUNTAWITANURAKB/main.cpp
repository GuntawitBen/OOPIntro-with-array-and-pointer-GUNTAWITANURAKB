#include <iostream>
#include <iomanip>
#include "student.h"

int main(int argc, char* argv[]) {
  int n = (argc - 1) / 3;
  student* pt_std = new student[n];
  student* pt_std_original = pt_std; 

  // Parse command-line arguments and set student attributes
  for (int i = 0; i < n; i++) {
    pt_std[i].set_all(argv[i * 3 + 1], atoi(argv[i * 3 + 2]), atof(argv[i * 3 + 3]));
  }

  float max_gpa = 0;
  int max_gpa_index = -1;  

  // Find the highest GPA among the students
  for (int i = 0; i < n; i++) {
    if (max_gpa < pt_std[i].get_gpa()) {
      max_gpa = pt_std[i].get_gpa();
      max_gpa_index = i;
    }
  }

  if (max_gpa_index != -1) {
    pt_std[max_gpa_index].print_all();
  }

  delete[] pt_std_original; 

  return 0;
}
