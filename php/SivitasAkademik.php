<?php

//Dicki Fathurohman_2103842_Ilmu Komputer LATIHAN2DPBO2023
/* Saya Dicki Fathurohman [2103842] mengerjakan LATIHAN2DPBO2023 dalam mata kuliah DPBO
   untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikan.
   Aamiin.*/

//Deklarasi kelas Sivitas Akademik, SivitasAkademik mewarasi kelas Human
class SivitasAkademik extends Human 
{

	//karena dia merupakan anak dari Human, jadi dia sudah memiliki atribut bawaan dari human
	//kemudian ada atribut tambahan yang dimiliki oleh sivitas akademik
	private $univ = '';
	private $email = '';

	//constructor dengan parameter
	public function __construct($univ = '', $email = ''){
		$this->univ = $univ;
		$this->email = $email;
	}

	//setter untuk atribut-atribut sivitas akademik
	public function set_univ($univ){
		$this->univ = $univ;
	}

	public function set_email($email){
		$this->email = $email;
	}

	//getter untuk atribut-atribut sivitas akademik
	public function get_univ(){
		return $this->univ;
	}

	public function get_email(){
		return $this->email;
	}
}

?>