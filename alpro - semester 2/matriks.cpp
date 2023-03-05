#include <iostream>
#include <sstream>	// diperlukan untuk menkonversi int ke string


using namespace std;


/*
     Program untuk menjumlahkan 2 matriks yang menerima masukkan dari input
     Output yang dihasilkan berupa array seperti pada bahasa python guna untuk melihat seperti apa is dari array tersebut dan
	 berdimensi yang telah didefinisikan, seperti contoh:
	 
	 baris 2, kolom 3, dimensi 2x3
	 
	 input:
	 	Matriks-1 Baris-0 Kolom-0: 1
		Matriks-2 Baris-0 Kolom-0: 2
		Matriks-1 Baris-0 Kolom-1: 3
		Matriks-2 Baris-0 Kolom-1: 4
		Matriks-1 Baris-0 Kolom-2: 5
		Matriks-2 Baris-0 Kolom-2: 6
		Matriks-1 Baris-1 Kolom-0: 7
		Matriks-2 Baris-1 Kolom-0: 8
		Matriks-1 Baris-1 Kolom-1: 9
		Matriks-2 Baris-1 Kolom-1: 10
		Matriks-1 Baris-1 Kolom-2: 11
		Matriks-2 Baris-1 Kolom-2: 12
		
					Array 1
			---------------------------
	hasil: [ [3, 7, 11], [15, 19, 23] ]
			 ----------
			   Array 2
	
	bisa dilihat bahwasannya terdapat array didalam array
	
	jika dimisalkan array1 adalah array yang paling luar
	
	semakin banyak baris yang didefinisikan maka semakin banyak jumlah array 2
	
	dimensi 3 x 2
	
	[ [3, 7, 11], [15, 19, 23], [20, 21, 22] ]
	
	semakin banyak Kolom yang didefinisikan maka semakin banyak jumlah nilai dalam array 2
	
	dimensi 2 x 3
	
	[ [3, 7, 11, 12], [1, 2, 3, 4] ]
	
		 
	 
*/

string to_string(int value) {
	stringstream str;
	str << value;
	return str.str();
}

int main() {

    const int jumlah_baris = 2; // Ubah ke 6
    const int jumlah_kolom = 3; // Ubah ke 9

    int matriks1[jumlah_baris][jumlah_kolom];
    int matriks2[jumlah_baris][jumlah_kolom];
    int matriks3[jumlah_baris][jumlah_kolom];
    string display = "";


    // counter disini adalah penghitung
    // counter_kolom sama dengan penghitung kolom
    // counter_baros sama dengan penghitung baris
    int counter_baris;
    int counter_kolom;
    
    
    // intro
    cout << "<======================================================>" << endl;
    cout << "+                                                      +" << endl;
    cout << "+            Nama : Alvin Setya Pranata                +" << endl;
    cout << "+            Kelas: TI-A 22                            +" << endl;
    cout << "+            NPM  : 2022 02 01 00094                   +" << endl;
    cout << "+                                                      +" << endl;
    cout << "<======================================================>" << endl;
    


    // operasi matriks 1 & 2 ( optimized mode ) 
    for (counter_baris = 0; counter_baris < jumlah_baris; counter_baris++){
        for (counter_kolom = 0; counter_kolom < jumlah_kolom; counter_kolom++){
            
            // input matriks 1
            cout << "Matriks-1 " << "Baris-" << counter_baris << " Kolom-" << counter_kolom << ": "; 
            cin >> matriks1[counter_baris][counter_kolom];

            // input matriks 2
            cout << "Matriks-2 " << "Baris-" << counter_baris << " Kolom-" << counter_kolom << ": "; 
            cin >> matriks2[counter_baris][counter_kolom];
        }
    }


    // operasi penjumlahan matriks 1 dan matriks 2
    for (counter_baris = 0; counter_baris < jumlah_baris; counter_baris++){
        for (counter_kolom = 0; counter_kolom < jumlah_kolom; counter_kolom++){
            matriks3[counter_baris][counter_kolom] = matriks1[counter_baris][counter_kolom] + matriks2[counter_baris][counter_kolom];
        }
    }


    // Operasi mengkonversi array C++ kedalam bentuk string agar dapat ditampilkan
    for (counter_baris = 0; counter_baris < jumlah_baris; counter_baris++){
        if (counter_baris == 0) {
                display += "[";
            } 


        for (counter_kolom = 0; counter_kolom < jumlah_kolom; counter_kolom++){
            if (counter_kolom == 0) {
                display += "[";
            } 
            

            display += to_string(matriks3[counter_baris][counter_kolom]);
            
            if (counter_kolom == jumlah_kolom - 1) {
                display += "]";
                break;
            }

            display += ", ";
        }

        if (counter_baris == jumlah_baris - 1) {
            display += "]";
            break;
        }
        display += ", ";
    }

    cout << "Hasil dari penjumlahan 2 matriks 2x3  adalah " << display; // ubah ke 6x9 

}
