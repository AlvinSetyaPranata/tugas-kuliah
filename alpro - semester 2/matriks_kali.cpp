#include <iostream>

using namespace std;


int main() {
	const int row_ma = 4;
	const int col_ma = 2;
	
	const int row_mb = 2;
	const int col_mb = 3;
	
	if (col_ma != row_mb) {
		cout << "Jumlah baris pada matriks A harus sama dengan jumlah kolom matrix B!";
		return 0;
	}
	
	const int row_mr = row_ma;
	const int col_mr = col_mb;
	
	// declare array size of matrix A and B
	int matrix_A[row_ma][col_ma];
	int matrix_B[row_mb][col_mb];
	int matrix_R[row_mr][col_mr];
	
	
	// intialize row counter and col counter for input
	int row_counter;
	int col_counter;
	
	// input matrix A
	cout << "Harap masukan nilai pada matrix A" << endl;
	for (row_counter = 0; row_counter < row_ma; row_counter++) {
		for (col_counter = 0; col_counter < col_ma; col_counter++) {
			cout << "Baris-" << row_counter << " Kolom-" << col_counter << " : ";
			cin >> matrix_A[row_counter][col_counter];
		}
	}
	
	cout << endl;
	
	// input matrix B
	cout << "Harap masukan nilai pada matrix B" << endl;
	for (row_counter = 0; row_counter < row_mb; row_counter++) {
		for (col_counter = 0; col_counter < col_mb; col_counter++) {
			cout << "Baris-" << row_counter << " Kolom-" << col_counter << " : ";
			cin >> matrix_B[row_counter][col_counter];
		}
	}

	int total;	
	int m3_row_counter = 0;
	int m3_col_counter = 0;
	
	// Matrix product operation
	for (row_counter = 0; row_counter < row_ma; row_counter++) {
		
		for (col_counter=0; col_counter < col_mb; col_counter++) {
			total = 0;
			for (int pointer = 0; pointer < col_ma; pointer++) {
				
				total = total + (matrix_A[row_counter][pointer] * matrix_B[pointer][col_counter]);
				
			}
			
			if (m3_col_counter == col_mr) {
				m3_row_counter ++;
				m3_col_counter = 0;
			} 
		
			// assign total to the current matrix 3 row and column counter
			matrix_R[m3_row_counter][m3_col_counter] = total;

			
			// testing
//			cout << m3_col_counter << " " << m3_row_counter << " " << total << endl;

			m3_col_counter++;

		}
		
	}
	
	cout << endl;
	
	
	// display matrix R
//	cout << row_mr << " " << col_mr << endl;
	cout << "Hasil dari perkalian matrix A dan B adalah" << endl;
	for (row_counter = 0; row_counter < row_mr; row_counter++) {
		for (col_counter = 0; col_counter < col_mr; col_counter++) {
			cout << matrix_R[row_counter][col_counter];
			
			if (col_counter != col_mr - 1) {
				cout << ", ";
			}
		}		
		cout << endl;
	}
	
	
}
