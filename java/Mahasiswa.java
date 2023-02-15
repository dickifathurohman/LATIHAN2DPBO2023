//Dicki Fathurohman_2103842_Ilmu Komputer LATIHAN2DPBO2023
/* Saya Dicki Fathurohman [2103842] mengerjakan LATIHAN2DPBO2023 dalam mata kuliah DPBO
   untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikan.
   Aamiin.*/

//Deklarasi kelas Mahasiswa, kelas mahasiswa mewarasi kelas SivitasAkademik
class Mahasiswa extends SivitasAkademik
{
	//Mahasiswa memiliki atribut dari Sivitas Akademik dan Human
	//Kemudian ada beberapa atribut tambahan dari mahasiswa
	//disini tidak perlu menambahkan nama dan jenis kelamin karena sudah diwarisi dari human
	private String nim;
	private String prodi;
	private String fakultas;

	//constructor
	public Mahasiswa(){
		this.nim = "";
		this.prodi = "";
		this.fakultas = "";
	}

	//constructor dengan parameter
	public Mahasiswa(String nim, String prodi, String fakultas){
		this.nim = nim;
		this.prodi = prodi;
		this.fakultas = fakultas;
	}

	//setter untuk atribut-atribut mahasiswa
	public void set_nim(String nim){
		this.nim = nim;
	}

	public void set_prodi(String prodi){
		this.prodi = prodi;
	}

	public void set_fakultas(String fakultas){
		this.fakultas = fakultas;
	}

	//getter untuk atribut-atribut mahasiswa

	public String get_nim(){
		return this.nim;
	}

	public String get_prodi(){
		return this.prodi;
	}

	public String get_fakultas(){
		return this.fakultas;
	}
}