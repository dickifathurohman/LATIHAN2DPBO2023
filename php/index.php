<?php

require ('Human.php'); #mengekspor file Human.php
require ('SivitasAkademik.php'); #mengekspor file SivitasAkademik.php
require ('Mahasiswa.php'); #mengekspor file Mahasiswa.php

	#mengisi data untuk student1
	$student1 = new Mahasiswa();

	$student1->set_nik("32041221345678");
	$student1->set_nama("DickiF");
	$student1->set_gender("Male");
	$student1->set_univ("UPI");
	$student1->set_email("dickif@upi.edu");
	$student1->set_nim("2103842");
	$student1->set_fakultas("FPMIPA");
	$student1->set_prodi("Computer_Science");

	
	#kemudian menampilkannya
	echo '<hr>';

	//dalam menampilkan data digunakan fungsi get untuk mengambil value dari atributnya

	echo 'Student no 1<br>';
	echo 'NIK     	 : ' . $student1->get_nik() . '<br>';
	echo 'Name     	 : ' . $student1->get_nama() . '<br>';
	echo 'Gender 	 : ' . $student1->get_gender() . '<br>';
	echo 'University : ' . $student1->get_univ() . '<br>';
	echo 'email 	 : ' . $student1->get_email() . '<br>';
	echo 'NIM 		 : ' . $student1->get_nim() . '<br>';
	echo 'Degree 	 : ' . $student1->get_prodi() .'<br>';
	echo 'Faculty 	 : ' . $student1->get_fakultas() . '<br>';

	#hal yang sama dilakukan untuk bagian selanjutnya

	$student2 = new Mahasiswa();

	$student2->set_nik("123456789088");
	$student2->set_nama("Jinyoung");
	$student2->set_gender("Male");
	$student2->set_univ("UPI");
	$student2->set_email("JinyoungPark@upi.edu");
	$student2->set_nim("2103345");
	$student2->set_fakultas("FPSD");
	$student2->set_prodi("Music");

	echo '<hr>';

	echo 'Student no 2<br>';
	echo 'NIK 		 : ' . $student2->get_nik() . '<br>';
	echo 'Name 		 : ' . $student2->get_nama() . '<br>';
	echo 'Gender 	 : ' . $student2->get_gender() . '<br>';
	echo 'University : ' . $student2->get_univ() . '<br>';
	echo 'email 	 : ' . $student2->get_email() . '<br>';
	echo 'NIM 		 : ' . $student2->get_nim() . '<br>';
	echo 'Degree 	 : ' . $student2->get_prodi() .'<br>';
	echo 'Faculty 	 : ' . $student2->get_fakultas() . '<br>';
	

?>