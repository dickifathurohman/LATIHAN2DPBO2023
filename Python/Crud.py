#deklarasi kelas crud
class Crud:
	
	__mhslist = [] #untuk list yang berisikan atribut mahasiswa (karena dia keturunan terakhir maka dia mewarisi semua atribut dati parent parentnya)
	__niklist = [] #untuk list yang berisikan hanya atribut nik nya saja sebagai primary key


	#prosedur untuk menampilkan data dalam list
	def show(self):
		if len(self.__mhslist) == 0:
			print("There is no data, please add data first");
		else:
			print ("List of Student :")

			#print datanya sebanyak data dalam list mahasiswa

			for i in range(len(self.__mhslist)):
				print ("Student no ", i+1)
				print ("NIK 		: " , self.__mhslist[i].get_nik())
				print ("Name 		: " , self.__mhslist[i].get_nama())
				print ("Gender 		: " , self.__mhslist[i].get_gender())
				print ("University 	: " , self.__mhslist[i].get_univ())
				print ("email 		: " , self.__mhslist[i].get_email())
				print ("NIM 		: " , self.__mhslist[i].get_nim())
				print ("Degree 		: " , self.__mhslist[i].get_prodi())
				print ("Faculty 	: " , self.__mhslist[i].get_fakultas(), "\n")

	#prosedur untuk menambahkan data
	def add(self, temp):
		#jika nik sudah ada pada data
		if(temp.get_nik() in self.__niklist):
			#karena nik yang ingin ditambahkan sudah ada pada data
			#maka tampilkan pesan nik sudah digunakan
			print("\nNIK is already used, please use another NIK")
		else: #jika tidak
			self.__mhslist.append(temp); #masukkan semua atribut ke dalam list mahasiswa
			self.__niklist.append(temp.get_nik()); #dan masukan nik saja ke dalam list nik