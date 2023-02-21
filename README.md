# LATIHAN2DPBO2023
Buatlah program berbasis OOP menggunakan bahasa pemrograman C++, Java, Python, dan PHP yang mengimplementasikan konsep Multi-level Inheritance  pada kelas - kelas tersebut:
Mahasiswa: NIM, nama, jenis_kelamin, fakultas, prodi
Human: NIK, nama, jenis_kelamin
SivitasAkademik: asal_universitas, email_edu
## Janji
Dicki Fathurohman_2103842_Ilmu Komputer LATIHAN2DPBO2023
Saya Dicki Fathurohman [2103842] mengerjakan LATIHAN2DPBO2023 dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikan. Aamiin.
## Desain Program
1. Class Human (Super/Base Class)
Class Human memiliki atribut NIK, Nama dan Jenis Kelamin. Class ini menjadi Super / Base Class atau parent dari kelas Sivitas Akademik. Karena semua sivitas akademik merupakan Human atau termasuk kedalam Human seperti mahasiswa dan dosen, dan tidak semua manusia merupakan sivitas akademik. Oleh karena itu, Human menjadi parent dari sivitas akademik.
2. SivitasAkademik (Derived Class 1) -> mewarisi Human
Class SivitasAkademik memiliki atribut asal universitas dan email universitas. Class ini menjadi child dari class Human. Alasannya karena sivitas akademik merupakan manusia pada ruang lingkup akademik, sehingga sivitas akademik bisa dikatakan Human.
3. Mahasiswa (Derived Class 2) -> mewarisi SivitasAkademik
Class Mahasiswa memiliki atribut NIM, Prodi dan Fakultas. Class ini menjadi child dari class sivitas akademik. Alasannya karena Mahasiswa termasuk kedalam sivitas akademik.

Ada class tambahan yaitu Crud untuk menampilkan data mahasiswa dan menambahkan datanya

![dpbo2](https://user-images.githubusercontent.com/100754802/218935207-c6259434-7210-448c-9bb8-f05a68cbf2a2.jpg)


## Alur
Dalam program sudah ada data yang diinputkan secara hardcode, user bisa memanggil perintah show untuk menampilkan data, kemudian ada perintah add untuk menambah data baru dan exit untuk keluar dari program

## Dokumentasi
- Java
![Screenshot (313)](https://user-images.githubusercontent.com/100754802/218935166-1735079f-fe17-41f5-a057-9334fb212953.png)
- Python
![image](https://user-images.githubusercontent.com/100754802/220357242-7e410582-19f3-465c-8980-3489c5e6f15e.png)
- PHP
![image](https://user-images.githubusercontent.com/100754802/220357377-68983019-08ba-4c79-a7f8-b7fa91f79a32.png)

