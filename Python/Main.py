from Mahasiswa import Mahasiswa
from Crud import Crud

#Dicki Fathurohman_2103842_Ilmu Komputer LATIHAN2DPBO2023
# Saya Dicki Fathurohman [2103842] mengerjakan LATIHAN2DPBO2023 dalam mata kuliah DPBO
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikan.
# Aamiin

#Main

ex = Crud() #objek crud

temp = Mahasiswa() #objek mahasiswa dengan tampungan temp untuk menampung masukan value untuk atribut

# Hardcode

#mengset masukan atribut
temp.set_nik("32041221345678")
temp.set_nama("DickiF")
temp.set_gender("Male")
temp.set_univ("UPI")
temp.set_email("dickif@upi.edu")
temp.set_nim("2103842")
temp.set_fakultas("FPMIPA")
temp.set_prodi("Computer_Science")

ex.add(temp) #kemudian ditambahkan ke list

temp = Mahasiswa()

#set masukan atribut
temp.set_nik("01234567891011")
temp.set_nama("Gatsby")
temp.set_gender("Male")
temp.set_univ("UPI")
temp.set_email("gatsby@upi.edu")
temp.set_nim("6666666")
temp.set_fakultas("FPBS")
temp.set_prodi("English_Literature")

ex.add(temp) #tambahkan ke list

print("Please insert your command (add/show/exit) : ")

command = str(input()) #meminta masukan perintah

#masukan manual

while(command != "exit"):


	if(command == "show"): #jika show
		ex.show() #panggil crud show untuk menampilkan data

	elif(command == "add"): #jika add

		temp = Mahasiswa()
		
		#minta masukan data
		print("\nPlease input your data correctly!")
		print("NIK : ")
		masukan = str(input()) 
		temp.set_nik(masukan)
		print("Name : ")
		masukan = str(input()) 
		temp.set_nama(masukan)
		print("Gender : ")
		masukan = str(input()) 
		temp.set_gender(masukan)
		print("University : ")
		masukan = str(input()) 
		temp.set_univ(masukan)
		print("Email : ")
		masukan = str(input()) 
		temp.set_email(masukan)
		print("NIM : ")
		masukan = str(input()) 
		temp.set_nim(masukan)
		print("Degree : ")
		masukan = str(input()) 
		temp.set_prodi(masukan)
		print("Faculty : ")
		masukan = str(input()) 
		temp.set_fakultas(masukan)

		ex.add(temp) #kemudian panggil prosedur untuk menambahkan data

	command = str(input()) #meminta masukan perintah