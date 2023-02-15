//Dicki Fathurohman_2103842_Ilmu Komputer LATIHAN2DPBO2023
/* Saya Dicki Fathurohman [2103842] mengerjakan LATIHAN2DPBO2023 dalam mata kuliah DPBO
   untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikan.
   Aamiin.*/

//Deklarasi kelas Sivitas Akademik, SivitasAkademik mewarasi kelas Human
class SivitasAkademik extends Human 
{

	//karena dia merupakan anak dari Human, jadi dia sudah memiliki atribut bawaan dari human
	//kemudian ada atribut tambahan yang dimiliki oleh sivitas akademik
	private String univ;
	private String email;

	//constructor
	public SivitasAkademik(){
		this.univ = "";
		this.email = "";
	}

	//constructor dengan parameter
	public SivitasAkademik(String univ, String email){
		this.univ = univ;
		this.email = email;
	}

	//setter untuk atribut-atribut sivitas akademik
	public void set_univ(String univ){
		this.univ = univ;
	}

	public void set_email(String email){
		this.email = email;
	}

	//getter untuk atribut-atribut sivitas akademik
	public String get_univ(){
		return this.univ;
	}

	public String get_email(){
		return this.email;
	}
}