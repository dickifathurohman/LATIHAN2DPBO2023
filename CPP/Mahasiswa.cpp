#include <iostream>
#include <string>

using namespace std;

//Dicki Fathurohman_2103842_Ilmu Komputer LATIHAN2DPBO2023
/* Saya Dicki Fathurohman [2103842] mengerjakan LATIHAN2DPBO2023 dalam mata kuliah DPBO
   untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikan.
   Aamiin.*/

//Deklarasi kelas Mahasiswa, kelas mahasiswa mewarasi kelas SivitasAkademik
class Mahasiswa : public SivitasAkademik
{
	//Mahasiswa memiliki atribut dari Sivitas Akademik dan Human
	//Kemudian ada beberapa atribut tambahan dari mahasiswa
	//disini tidak perlu menambahkan nama dan jenis kelamin karena sudah diwarisi dari human
	private:
		string nim;
		string prodi;
		string fakultas;

	public:
		//constructor
		Mahasiswa(){
			this->nim = "";
			this->prodi = "";
			this->fakultas = "";
		}

		//constructor dengan parameter
		Mahasiswa(string nim, string prodi, string fakultas){
			this->nim = nim;
			this->prodi = prodi;
			this->fakultas = fakultas;
		}

		//setter untuk atribut-atribut mahasiswa
		void set_nim(string nim){
			this->nim = nim;
		}

		void set_prodi(string prodi){
			this->prodi = prodi;
		}

		void set_fakultas(string fakultas){
			this->fakultas = fakultas;
		}

		//getter untuk atribut-atribut mahasiswa

		string get_nim(){
			return this->nim;
		}

		string get_prodi(){
			return this->prodi;
		}

		string get_fakultas(){
			return this->fakultas;
		}

		~Mahasiswa(){

		}
};