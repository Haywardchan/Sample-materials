#include <iostream>     /* array-wo-size.cpp */
using namespace std;	

const int NUM_STUDENTS = 5;

// score is a constant pointer 
float max_score(const float score[], int size)
{
  cout << "size of array = " <<
    sizeof( score )/sizeof( float ); //warning: score is a const ptr
  cout << endl;
  
  // Initialize the max score to that of the first student
  float max_score = score[0];
  for (int j = 1; j < size; j++)
    if (max_score < score[j])
      max_score = score[j];
  return max_score;
}

// For static array only
// A reference to a static array must know the array size
float max_score_r(const float (&score)[NUM_STUDENTS]){
  int size = sizeof( score )/sizeof( float );
  cout << "size of array = " << size  <<  " " <<
    NUM_STUDENTS << endl;
  
  // Initialize the max score to that of the first student
  float max_score = score[0];
  for (int j = 1; j < NUM_STUDENTS; j++)
    if (max_score < score[j])
      max_score = score[j];
  return max_score;
}

// For static array only
// Template automatically calculates the length of the array
// at compilation time at function call
template <size_t N>
float max_score_t(const float (&score)[N]) {
  int size = sizeof( score )/sizeof( float );
  cout << "size of array = " << size << ";  N= " << N << endl;
  
  // Initialize the max score to that of the first student
  float max_score = score[0];
  for (int j = 1; j < N; j++)
    if (max_score < score[j]) max_score = score[j];
  return max_score;
}

int main(){
  float score[NUM_STUDENTS];
  for (int j = 0; j < NUM_STUDENTS; j++)
    if (!(cin >> score[j])) return -1;
  cout << "max score = "  << max_score(score, NUM_STUDENTS) << "\n\n";
  cout << "max score = "  << max_score_r(score) << "\n\n";
  cout << "max score = "  << max_score_t(score) << "\n";
  return 0;
}
