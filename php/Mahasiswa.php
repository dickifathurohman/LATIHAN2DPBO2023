<?php

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
	private $nim = '';
	private $prodi = '';
	private $fakultas = '';

	//constructor dengan parameter
	public function __construct($nim = '', $prodi = '', $fakultas = ''){
		$this->nim = $nim;
		$this->prodi = $prodi;
		$this->fakultas = $fakultas;
	}

	//setter untuk atribut-atribut mahasiswa
	public function set_nim($nim){
		$this->nim = $nim;
	}

	public function set_prodi($prodi){
		$this->prodi = $prodi;
	}

	public function set_fakultas($fakultas){
		$this->fakultas = $fakultas;
	}

	//getter untuk atribut-atribut mahasiswa

	public function get_nim(){
		return $this->nim;
	}

	public function get_prodi(){
		return $this->prodi;
	}

	public function get_fakultas(){
		return $this->fakultas;
	}
}

?>