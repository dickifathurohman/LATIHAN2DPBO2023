#include <bits/stdc++.h>
#include "Human.cpp"
#include "SivitasAkademik.cpp"
#include "Mahasiswa.cpp"
#include "Crud.cpp"

using namespace std;

//Dicki Fathurohman_2103842_Ilmu Komputer LATIHAN2DPBO2023
/* Saya Dicki Fathurohman [2103842] mengerjakan LATIHAN2DPBO2023 dalam mata kuliah DPBO
   untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikan.
   Aamiin.*/

//Main
int main(){

	Crud ex; //crud dengan nama ex

	Mahasiswa temp; //membuat tampungan temp, untuk menampung masukan atribut-atribut mahasiswa

	// Hardcode

	//mengset masukan atribut
	temp.set_nik("32041221345678");
	temp.set_nama("DickiF");
	temp.set_gender("Male");
	temp.set_univ("UPI");
	temp.set_email("dickif@upi.edu");
	temp.set_nim("2103842");
	temp.set_fakultas("FPMIPA");
	temp.set_prodi("Computer_Science");

	ex.add(temp); //kemudian ditambahkan ke list

	//set masukan atribut
	temp.set_nik("01234567891011");
	temp.set_nama("Gatsby");
	temp.set_gender("Male");
	temp.set_univ("UPI");
	temp.set_email("gatsby@upi.edu");
	temp.set_nim("6666666");
	temp.set_fakultas("FPBS");
	temp.set_prodi("English_Literature");

	ex.add(temp); //tambahkan ke list

	string command; //untuk minta inputan perintah
	string input; //untuk menampung value inputan masukan

	//masukan manual
	do{

		cout << "Please insert your command (add/show/exit) : "; 
		cin >> command; //minta masukan perintah yang diinginkan

		if(command == "show"){ //jika show
			ex.show(); //panggil crud show untuk menampilkan data
		}
		else if(command == "add"){ //jika add

			//minta masukan data
			cout << "\nPlease input your data correctly!\n";
			cout << "NIK : ";
			cin >> input;
			temp.set_nik(input);
			cout << "Name : ";
			cin >> input;
			temp.set_nama(input);
			cout << "Gender : ";
			cin >> input;
			temp.set_gender(input);
			cout << "University : ";
			cin >> input;
			temp.set_univ(input);
			cout << "Email : ";
			cin >> input;
			temp.set_email(input);
			cout << "NIM : ";
			cin >> input;
			temp.set_nim(input);
			cout << "Degree : ";
			cin >> input;
			temp.set_prodi(input);
			cout << "Faculty : ";
			cin >> input;
			temp.set_fakultas(input);


			ex.add(temp); //kemudian panggil prosedur untuk menambahkan data
		}

	}while(command != "exit"); //perulangan selama perintahnya bukan exit
}