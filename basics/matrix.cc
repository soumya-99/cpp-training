#include <iostream>

const int ROWS = 2;
const int COLUMNS = 3;

void print_matrix(int mat[ROWS][COLUMNS]) {
    for (int row = 0; row < ROWS; row++) {
        for (int col = 0; col < COLUMNS; col++) {
            std::cout << mat[row][col];
        }
        std::cout << std::endl;
    }
}

int main(int argc, char const *argv[])
{

    int matrix[ROWS][COLUMNS] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    print_matrix(matrix);

    return 0;
}
