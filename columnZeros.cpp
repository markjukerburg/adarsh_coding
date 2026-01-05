#include<iostream>
using namespace std;
#include<vector>
#include<unordered_set>
void make_zeroes(vector<vector<int> >& matrix) {
  if (matrix.empty()) {
    return;
  }

  unordered_set<size_t> zero_rows;
  unordered_set<size_t> zero_cols;

  size_t rows = matrix.size();
  size_t cols = matrix[0].size();

  for (size_t i = 0; i < rows; ++i) {
    for (size_t j = 0; j < cols; ++j) {
      if (matrix[i][j] == 0) {

        if (zero_rows.find(i) == zero_rows.end()) {
          zero_rows.insert(i);  
        }

        if (zero_cols.find(j) == zero_cols.end()) {
          zero_cols.insert(j);
        }
      }
    }
  }

  for (size_t r : zero_rows) {
    for (size_t c = 0; c < cols; ++c) {
      matrix[r][c] = 0;
    }
  }

  for (size_t c : zero_cols) {
    for (size_t r = 0; r < rows; ++r) {
      matrix[r][c] = 0;
    }
  }
}

bool is_row_or_col_zero(vector<vector<int> > & matrix, int r, int c) {
  size_t rows = matrix.size();
  size_t cols = 0;
  if (rows > 0) {
    cols = matrix[0].size();
  }

  for (int i = 0; i < cols; ++i) {
    if (matrix[r][i] == 0) {
      return true;
    }
  }

  for(int i = 0; i < rows; ++i) {
    if (matrix[i][c] == 0) {
      return true;
    }
  }

  return false;
}

void verify(vector<vector<int> >& matrix) {
  auto mat_copy = matrix;

  make_zeroes(matrix);
  size_t rows = matrix.size();
  size_t cols = 0;
  if (rows > 0) {
    cols = matrix[0].size();
  }

  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      if (is_row_or_col_zero(mat_copy, i, j)) {
        assert(matrix[i][j] == 0);
      }
    }
   }
}

int main(int argc, char const *argv[])
{
  vector<vector<int> > matrix ;
 /*   {1, 5, 45, 0, 81},
    {6, 7, 2, 82, 8},
    {20, 22, 49, 5, 5},
    {0, 23, 50, 0, 92}
  };
  
  print_matrix(matrix);
  verify(matrix);
  print_matrix(matrix);
*/
  matrix = create_random_matrix(5, 5);
  print_matrix(matrix);
  verify(matrix);
  print_matrix(matrix);

  for (int i = 0; i < 25; i++) {
    for (int j = 0; j < 25; j++) {
      matrix = create_random_matrix(i, j);
      verify(matrix);
    }
  }

  return 0;
}
