#include <iostream>
#include <string>

using namespace std;

//Dicki Fathurohman_2103842_Ilmu Komputer LATIHAN2DPBO2023
/* Saya Dicki Fathurohman [2103842] mengerjakan LATIHAN2DPBO2023 dalam mata kuliah DPBO
   untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikan.
   Aamiin.*/

//Deklarasi kelas Sivitas Akademik, SivitasAkademik mewarasi kelas Human
class SivitasAkademik : public Human 
{

	//karena dia merupakan anak dari Human, jadi dia sudah memiliki atribut bawaan dari human
	//kemudian ada atribut tambahan yang dimiliki oleh sivitas akademik
	private:
		string univ;
		string email;

	public:

		//constructor
		SivitasAkademik(){
			this->univ = "";
			this->email = "";
		}

		//constructor dengan parameter
		SivitasAkademik(string univ, string email){
			this->univ = univ;
			this->email = email;
		}

		//setter untuk atribut-atribut sivitas akademik
		void set_univ(string univ){
			this->univ = univ;
		}

		void set_email(string email){
			this->email = email;
		}

		//getter untuk atribut-atribut sivitas akademik
		string get_univ(){
			return this->univ;
		}

		string get_email(){
			return this->email;
		}

		//destructor
		~SivitasAkademik(){

		}
};