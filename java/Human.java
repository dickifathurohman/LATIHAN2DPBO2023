//Dicki Fathurohman_2103842_Ilmu Komputer LATIHAN2DPBO2023
/* Saya Dicki Fathurohman [2103842] mengerjakan LATIHAN2DPBO2023 dalam mata kuliah DPBO
   untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikan.
   Aamiin.*/
   
class Human //Deklarasi untuk kelas Human, karena dia merupakan Super/Base class jadi tidak mewarisi atribut dari yg lain (ga pakai extend)
{
	//Atribut yang dimiliki oleh Human, ada nik, nama, dan gender
	//atribut ini nantinya akan dimiliki oleh anak atau turunan dari human
	private String nik;
	private String nama;
	private String gender;

	// Constructor
	public Human(){
		this.nik = "";
		this.nama = "";
		this.gender = "";
	}

	//Constructor lain dengan atribut sebagai parameternya
	public Human(String nik, String nama, String gender){
		this.nik = nik;
		this.nama = nama;
		this.gender = gender;
	}

	//setter untuk atribut-atribut yang dimiliki Human
	public void set_nik(String nik){
		this.nik = nik;
	}

	public void set_nama(String nama){
		this.nama = nama;
	}

	public void set_gender(String gender){
		this.gender = gender;
	}

	//getter untuk atribut-atribut yang dimiliki Human
	public String get_nik(){
		return this.nik;
	}

	public String get_nama(){
		return this.nama;
	}

	public String get_gender(){
		return this.gender;
	}

}



