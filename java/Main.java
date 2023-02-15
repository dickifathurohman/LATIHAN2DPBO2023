import java.util.Scanner;
import java.util.ArrayList;

//Dicki Fathurohman_2103842_Ilmu Komputer LATIHAN2DPBO2023
/* Saya Dicki Fathurohman [2103842] mengerjakan LATIHAN2DPBO2023 dalam mata kuliah DPBO
   untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikan.
   Aamiin.*/
   
//Main
public class Main{

	public static void main(String[] args){

		ArrayList<Mahasiswa> list = new ArrayList<>(); //membuat list untuk menampung data-data mahasiwa
		
		Mahasiswa temp = new Mahasiswa(); //membuat tampungan temp, untuk menampung masukan atribut-atribut mahasiswa

		//mengset masukan atribut
		temp.set_nik("32041221345678");
		temp.set_nim("2103842");
		temp.set_nama("DickiF");
		temp.set_gender("Male");
		temp.set_univ("UPI");
		temp.set_email("dickif@upi.edu");
		temp.set_fakultas("FPMIPA");
		temp.set_prodi("Computer_Science");

		list.add(temp); //kemudian ditambahkan ke list

		temp = new Mahasiswa(); //buat tampungan yang baru lagi

		//set masukan atribut
		temp.set_nik("01234567891011");
		temp.set_nim("6666666");
		temp.set_nama("Gatsby");
		temp.set_gender("Male");
		temp.set_univ("UPI");
		temp.set_email("gatsby@upi.edu");
		temp.set_fakultas("FPBS");
		temp.set_prodi("English_Literature");

		list.add(temp); //tambahkan ke list

		System.out.println("Daftar Mahasiswa : ");
		int i;

		//print data sebanyak jumlahnya data
		for(i=0; i<list.size(); i++){
			System.out.println(Integer.toString(i+1) + ". " + list.get(i).get_nik() + " | " + list.get(i).get_nim() + " | " 
				+ list.get(i).get_nama() + " | " + list.get(i).get_gender() + " | " + list.get(i).get_univ() + " | " + list.get(i).get_email() 
				+ " | " + list.get(i).get_fakultas() + " | " + list.get(i).get_prodi());
		}

	}
}