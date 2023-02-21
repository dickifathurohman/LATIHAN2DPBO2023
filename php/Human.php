<?php

//Dicki Fathurohman_2103842_Ilmu Komputer LATIHAN2DPBO2023
/* Saya Dicki Fathurohman [2103842] mengerjakan LATIHAN2DPBO2023 dalam mata kuliah DPBO
   untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikan.
   Aamiin.*/
   
class Human //Deklarasi untuk kelas Human, karena dia merupakan Super/Base class jadi tidak mewarisi atribut dari yg lain (ga pakai extend)
{
	//Atribut yang dimiliki oleh Human, ada nik, nama, dan gender
	//atribut ini nantinya akan dimiliki oleh anak atau turunan dari human
	
	private $nik = '';
	private $nama = '';
	private $gender = '';


	//Constructor dengan atribut sebagai parameternya
	public function __construct($nik = '', $nama = '', $gender = ''){
		$this->nik = $nik;
		$this->nama = $nama;
		$this->gender = $gender;
	}

	//setter untuk atribut-atribut yang dimiliki Human
	public function set_nik($nik){
		$this->nik = $nik;
	}

	public function set_nama($nama){
		$this->nama = $nama;
	}

	public function set_gender($gender){
		$this->gender = $gender;
	}

	//getter untuk atribut-atribut yang dimiliki Human
	public function get_nik(){
		return $this->nik;
	}

	public function get_nama(){
		return $this->nama;
	}

	public function get_gender(){
		return $this->gender;
	}

}

?>



