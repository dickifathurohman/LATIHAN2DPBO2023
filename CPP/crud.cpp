#include <iostream>
#include <string>

using namespace std;

//deklarasi kelas crud
class Crud{
	
	private:
		vector<Mahasiswa> mhslist; //untuk list yang berisikan atribut mahasiswa (karena dia keturunan terakhir maka dia mewarisi semua atribut dati parent parentnya)
		vector<string> niklist; //untuk list yang berisikan hanya atribut nik nya saja sebagai primary key
	public:

		//constructor
		Crud(){

		}

		//prosedur untuk menampilkan data dalam list
		void show(){
			
			//jika list sizenya sama dengan 0 (tidak ada data)
			if(mhslist.size() == 0){
				cout << "\nThere is no data, please add data first\n";
			} //jika tidak sama dengan 0 (ada data)
			else{
				cout << "\nList of Student :\n";

				//print datanya sebanyak banyaknya data dalam list mahasiswa

				for(int i = 0; i < mhslist.size(); i++){
					cout<< "Student no  " << i+1 << "\n";
					cout<< "NIK 		: " << mhslist[i].get_nik() << '\n';
					cout<< "Name 		: " << mhslist[i].get_nama() << '\n';
					cout<< "Gender 		: " << mhslist[i].get_gender() << '\n';
					cout<< "University	: " << mhslist[i].get_univ() << '\n';
					cout<< "email 		: " << mhslist[i].get_email() << '\n';
					cout<< "NIM 		: " << mhslist[i].get_nim() << '\n';
					cout<< "Degree 		: " <<mhslist[i].get_prodi() <<'\n';
					cout<< "Faculty 	: " <<mhslist[i].get_fakultas() << '\n';

					cout << '\n';
				}
			}
		}

		//prosedur untuk menambahkan data
		void add(Mahasiswa temp){
			//menggunakan fungsi find untuk mencari data dengan nik yang sama pada list nik
			//jika hasilnya tidak sama dengan akhir dari niklist, berarti data ditemukan
			if(find(niklist.begin(), niklist.end(), temp.get_nik()) != niklist.end()){
				//karena nim yang ingin ditambahkan sudah ada pada data
				//maka tampilkan pesan nim sudah digunakan
				cout << "\nNIK is already used, please use another NIK\n";
			}
			else{ //jika tidak

				this->mhslist.push_back(temp); //masukkan semua atribut ke dalam list mahasiswa
				this->niklist.push_back(temp.get_nik()); //dan masukan nik saja ke dalam list nik
			}
		}

		//destructor
		~Crud(){

		}

};