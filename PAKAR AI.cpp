// SISTEM PAKAR PENYAKIT HIPORTEMIA

// G01 Kulit bayi anda terasa dingin ketika disentuh (1)
// G02 Kulit bayi anda terlihat pucat/kebiruan pada bibir dan ujung jari (1)
// G03 Bayi anda tampak lemas atau banyak tidur (0.8)
// G04 Bayi anda menangis merintih dan Menyusu yang buruk (0.8)
// G05 Kulit bayi anda kemerahan (0)
// G06 Bayi anda pusing dan menggigil (0)
// G07 Bayi anda kesulitan bicara (0)
// G08 Bayi anda mengalami kesulitan bergerak (0)
// G09 Bayi anda menggigil berlebihan sehingga tidak bisa terkontrol (0)
// G10 Pupil bayi anda melebar (0)
// G11 Aktifitas bayi anda menurun (1)

// P01 Ringan
// P02 Sedang
// P03 Berat

// Tidak yakin 		0
// Tidak tahu		0,2
// Sedikit yakin	0,4
// Cukup yakin 		0,6
// Yakin 			0,8
// Sangat Yakin 	1

#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
#include<windows.h>
using namespace std;

int main()
{
    int jwb1, jwb2, jwb3, jwb4, jwb5, jwb6, jwb7, jwb8, jwb9, jwb10, jwb11, jwb12,
		jwb13, jwb14, jwb15;
    char nama[50],jwb;
    float a=0, b=0.2, c=0.4, d=0.6, e=0.8, f=1;
    float pilihan1=0, pilihan2=0, pilihan3=0, pilihan4=0, pilihan5=0, pilihan6=0, pilihan7=0, pilihan8=0, pilihan9=0, pilihan10=0, pilihan11=0, pilihan12=0,
		pilihan13=0, pilihan14=0, pilihan15=0;

    awal:
    system("cls");
        cout<<"   ********************************************************************"<<endl;
        cout<<"   ********************************************************************"<<endl;
        cout<<"   **          SISTEM PAKAR DIAGNOSA PENYAKIT HIPORTEMIA             **"<<endl;
        cout<<"   ********************************************************************"<<endl;
        cout<<"   **                         SELAMAT DATANG                         **"<<endl;
        cout<<"   ********************************************************************"<<endl;
        cout<<"   ********************************************************************"<<endl;
        cout<<endl;
        cout<<"   Masukkan nama anda : ";
        cin.getline(nama,50);
        cout<<endl;
        system("cls");
        cout<<"   Halo "<<nama<<"! Anda akan memulai tes tipe kepribadian."<<endl;
        cout<<"   Silakan mengikuti intruksi berikut untuk menjawab pertanyaan" <<endl<<endl;
        cout<<"   *************************************"<<endl;
        cout<<"   *************************************"<<endl;
        cout<<"   ** [1] Tidak                       **"<<endl;
        cout<<"   ** [2] Kemungkinan tidak           **"<<endl;
        cout<<"   ** [3] Tidak tahu                  **"<<endl;
        cout<<"   ** [4] Cukup Yakin                 **"<<endl;
        cout<<"   ** [5] Yakin                       **"<<endl;
        cout<<"   ** [6] Sangat Yakin                **"<<endl;
        cout<<"   *************************************"<<endl;
        cout<<"   *************************************"<<endl;

    ul1:
    	cout<<endl;
        cout<<"   1. Seberapa yakin anda bahwa kulit bayi anda terasa dingin ketika disentuh?"<<endl;
        cout<<"      [1/2/3/4/5/6] : ";cin>>jwb1;
        if (jwb1!=1)
        {
            if (jwb1==1)
            {
                pilihan1=a*1;
            }
            if (jwb1==2)
            {
                pilihan1=b*1;
            }
            else if (jwb1==3)
            {
                pilihan1=c*1;
            }
            else if (jwb1==4)
            {
                pilihan1=d*1;
            }
            else if (jwb1==5)
            {
                pilihan1=e*1;
            }
            else if (jwb1==6)
            {
                pilihan1=f*1;
            }
            else
            {
            	cout<<"      Jawaban tidak sesuai"<<endl;
				goto ul1;
            }
        }

    ul2:
    	cout<<endl;
        cout<<"   2. Apakah kulit bayi anda terlihat pucat atau kebiruan pada bibir dan ujung jari?"<<endl;
        cout<<"      [1/2/3/4/5/6] : ";cin>>jwb2;
        if (jwb2!=1)
	    {
	        if (jwb2==1)
	        {
	            pilihan2=a*1;
	        }
	        if (jwb2==2)
	        {
	            pilihan2=b*1;
	        }
	        else if (jwb2==3)
	        {
	             pilihan2=c*1;
	        }
	        else if (jwb2==4)
	        {
	             pilihan2=d*1;
	        }
	        else if (jwb2==5)
	        {
	             pilihan2=e*1;
	        }
	        else if (jwb2==6)
	        {
	            pilihan2=f*1;
	        }
	        else
	        {
	        	cout<<"      Jawaban tidak sesuai"<<endl;
				goto ul2;
	        }
	    }

	ul3:
    	cout<<endl;
        cout<<"   3. Apakah bayi anda tampak lemas atau banyak tidur?"<<endl;
        cout<<"      [1/2/3/4/5/6] : ";cin>>jwb3;
        if (jwb3!=1)
	    {
	        if (jwb3==1)
	        {
	            pilihan3=a*0.8;
	        }
	        if (jwb3==2)
	        {
	            pilihan3=b*0.8;
	        }
	        else if (jwb3==3)
	        {
	             pilihan3=c*0.8;
	        }
	        else if (jwb3==4)
	        {
	             pilihan3=d*0.8;
	        }
	        else if (jwb3==5)
	        {
	             pilihan3=e*0.8;
	        }
	        else if (jwb3==6)
	            {
	                pilihan3=f*0.8;
	            }
	        else
	        {
	        	cout<<"      Jawaban tidak sesuai"<<endl;
				goto ul3;
	        }
	    }

	ul4:
    	cout<<endl;
        cout<<"   4. Apakah bayi anda menangis merintih dan menyusu yang buruk?"<<endl;
        cout<<"      [1/2/3/4/5/6] : ";cin>>jwb4;
        if (jwb4!=1)
	    {
	        if (jwb4==1)
	        {
	            pilihan4=a*0.8;
	        }
	        if (jwb4==2)
	        {
	            pilihan4=b*0.8;
	        }
	        else if (jwb4==3)
	        {
	             pilihan4=c*0.8;
	        }
	        else if (jwb4==4)
	        {
	             pilihan4=d*0.8;
	        }
	        else if (jwb4==5)
	        {
	             pilihan4=e*0.8;
	        }
	        else if (jwb4==6)
	            {
	                pilihan4=f*0.8;
	            }
	        else
	        {
	        	cout<<"      Jawaban tidak sesuai"<<endl;
				goto ul4;
	        }
	    }

	ul5:
    	cout<<endl;
        cout<<"   5. Apakah kulit bayi anda kemerahan?"<<endl;
        cout<<"      [1/2/3/4/5/6] : ";cin>>jwb5;
        if (jwb5!=1)
	    {
	        if (jwb5==1)
	        {
	            pilihan5=a*0.1;
	        }
	        if (jwb5==2)
	        {
	            pilihan5=b*0.1;
	        }
	        else if (jwb5==3)
	        {
	             pilihan5=c*0.1;
	        }
	        else if (jwb5==4)
	        {
	             pilihan5=d*0.1;
	        }
	        else if (jwb5==5)
	        {
	             pilihan5=e*0.1;
	        }
	        else if (jwb5==6)
	            {
	                pilihan5=f*0.1;
	            }
	        else
	        {
	        	cout<<"      Jawaban tidak sesuai"<<endl;
				goto ul5;
	        }
	    }

	ul6:
    	cout<<endl;
        cout<<"   6. Apakah bayi anda pusing dan menggigil?"<<endl;
        cout<<"      [1/2/3/4/5/6] : ";cin>>jwb6;
        if (jwb6!=1)
	    {
	        if (jwb6==1)
	        {
	            pilihan6=a*0.1;
	        }
	        if (jwb6==2)
	        {
	            pilihan6=b*0.1;
	        }
	        else if (jwb6==3)
	        {
	             pilihan6=c*0.1;
	        }
	        else if (jwb6==4)
	        {
	             pilihan6=d*0.1;
	        }
	        else if (jwb6==5)
	        {
	             pilihan6=e*0.1;
	        }
	        else if (jwb6==6)
	            {
	                pilihan6=f*0.1;
	            }
	        else
	        {
	        	cout<<"      Jawaban tidak sesuai"<<endl;
				goto ul6;
	        }
	    }

	ul7:
    	cout<<endl;
        cout<<"   7. Apakah bayi anda kesulitan bicara?"<<endl;
        cout<<"      [1/2/3/4/5/6] : ";cin>>jwb7;
        if (jwb7!=1)
	    {
	        if (jwb7==1)
	        {
	            pilihan7=a*0.1;
	        }
	        if (jwb7==2)
	        {
	            pilihan7=b*0.1;
	        }
	        else if (jwb7==3)
	        {
	             pilihan7=c*0.1;
	        }
	        else if (jwb7==4)
	        {
	             pilihan7=d*0.1;
	        }
	        else if (jwb7==5)
	        {
	             pilihan7=e*0.1;
	        }
	        else if (jwb7==6)
	            {
	                pilihan7=f*0.1;
	            }
	        else
	        {
	        	cout<<"      Jawaban tidak sesuai"<<endl;
				goto ul7;
	        }
	    }

	ul8:
    	cout<<endl;
        cout<<"   8. Apakah bayi anda mengalami kesulitan bergerak?"<<endl;
        cout<<"      [1/2/3/4/5/6] : ";cin>>jwb8;
        if (jwb8!=1)
	    {
	        if (jwb8==1)
	        {
	            pilihan8=a*0.1;
	        }
	        if (jwb8==2)
	        {
	            pilihan8=b*0.1;
	        }
	        else if (jwb8==3)
	        {
	             pilihan8=c*0.1;
	        }
	        else if (jwb8==4)
	        {
	             pilihan8=d*0.1;
	        }
	        else if (jwb8==5)
	        {
	             pilihan8=e*0.1;
	        }
	        else if (jwb8==6)
	            {
	                pilihan8=f*0.1;
	            }
	        else
	        {
	        	cout<<"      Jawaban tidak sesuai"<<endl;
				goto ul8;
	        }
	    }

	ul9:
    	cout<<endl;
        cout<<"   9. Apakah bayi anda menggigil berlebihan sehingga tidak bisa terkontrol?"<<endl;
        cout<<"      [1/2/3/4/5/6] : ";cin>>jwb9;
        if (jwb9!=1)
	    {
	        if (jwb9==1)
	        {
	            pilihan9=a*0.1;
	        }
	        if (jwb9==2)
	        {
	            pilihan9=b*0.1;
	        }
	        else if (jwb9==3)
	        {
	             pilihan9=c*0.1;
	        }
	        else if (jwb9==4)
	        {
	             pilihan9=d*0.1;
	        }
	        else if (jwb9==5)
	        {
	             pilihan9=e*0.1;
	        }
	        else if (jwb9==6)
	            {
	                pilihan9=f*0.1;
	            }
	        else
	        {
	        	cout<<"      Jawaban tidak sesuai"<<endl;
				goto ul9;
	        }
	    }

	ul10:
    	cout<<endl;
        cout<<"   10. Apakah pupil bayi anda melebar?"<<endl;
        cout<<"      [1/2/3/4/5/6] : ";cin>>jwb10;
        if (jwb10!=1)
	    {
	        if (jwb10==1)
	        {
	            pilihan10=a*0.1;
	        }
	        if (jwb10==2)
	        {
	            pilihan10=b*0.1;
	        }
	        else if (jwb10==3)
	        {
	             pilihan10=c*0.1;
	        }
	        else if (jwb10==4)
	        {
	             pilihan10=d*0.1;
	        }
	        else if (jwb10==5)
	        {
	             pilihan10=e*0.1;
	        }
	        else if (jwb10==6)
	            {
	                pilihan10=f*0.1;
	            }
	        else
	        {
	        	cout<<"      Jawaban tidak sesuai"<<endl;
				goto ul10;
	        }
	    }

	ul11:
    	cout<<endl;
        cout<<"   11. Apakah aktifitas bayi anda menurun?"<<endl;
        cout<<"      [1/2/3/4/5/6] : ";cin>>jwb11;
        if (jwb11!=1)
        {
            if (jwb11==1)
            {
                pilihan11=a*1;
            }
            if (jwb11==2)
            {
                pilihan11=b*1;
            }
            else if (jwb11==3)
            {
                pilihan11=c*1;
            }
            else if (jwb11==4)
            {
                pilihan11=d*1;
            }
            else if (jwb11==5)
            {
                pilihan11=e*1;
            }
            else if (jwb11==6)
            {
                pilihan11=f*1;
            }
            else
            {
            	cout<<"      Jawaban tidak sesuai"<<endl;
				goto ul11;
            }
        }

        ul12:
    	cout<<endl;
        cout<<"   12. Apakah Bayi anda kehilangan kesadaran?"<<endl;
        cout<<"      [1/2/3/4/5/6] : ";cin>>jwb12;
        if (jwb12!=1)
        {
            if (jwb12==1)
            {
                pilihan12=a*0.1;
            }
            if (jwb12==2)
            {
                pilihan12=b*0.1;
            }
            else if (jwb12==3)
            {
                pilihan12=c*0.1;
            }
            else if (jwb12==4)
            {
                pilihan12=d*0.1;
            }
            else if (jwb12==5)
            {
                pilihan12=e*0.1;
            }
            else if (jwb12==6)
            {
                pilihan12=f*0.1;
            }
            else
            {
            	cout<<"      Jawaban tidak sesuai"<<endl;
				goto ul12;
            }
        }

        ul13:
    	cout<<endl;
        cout<<"   13. Apakah Detak jantung bayi anda dibawah 60?"<<endl;
        cout<<"      [1/2/3/4/5/6] : ";cin>>jwb13;
        if (jwb13!=1)
        {
            if (jwb13==1)
            {
                pilihan13=a*0.1;
            }
            if (jwb13==2)
            {
                pilihan13=b*0.1;
            }
            else if (jwb13==3)
            {
                pilihan13=c*0.1;
            }
            else if (jwb13==4)
            {
                pilihan13=d*0.1;
            }
            else if (jwb13==5)
            {
                pilihan13=e*0.1;
            }
            else if (jwb13==6)
            {
                pilihan13=f*0.1;
            }
            else
            {
            	cout<<"      Jawaban tidak sesuai"<<endl;
				goto ul13;
            }
        }

        ul14:
    	cout<<endl;
        cout<<"   14. Apakah Denyut nadi pada bayi anda samar sehingga sulit dideteksi?"<<endl;
        cout<<"      [1/2/3/4/5/6] : ";cin>>jwb14;
        if (jwb14!=1)
        {
            if (jwb14==1)
            {
                pilihan14=a*0.1;
            }
            if (jwb14==2)
            {
                pilihan14=b*0.1;
            }
            else if (jwb14==3)
            {
                pilihan14=c*0.1;
            }
            else if (jwb14==4)
            {
                pilihan14=d*0.1;
            }
            else if (jwb14==5)
            {
                pilihan14=e*0.1;
            }
            else if (jwb14==6)
            {
                pilihan14=f*0.1;
            }
            else
            {
            	cout<<"      Jawaban tidak sesuai"<<endl;
				goto ul14;
            }
        }

        ul15:
    	cout<<endl;
        cout<<"   15. Apakah Bayi kehilangan berat badan?"<<endl;
        cout<<"      [1/2/3/4/5/6] : ";cin>>jwb15;
        if (jwb15!=1)
        {
            if (jwb15==1)
            {
                pilihan15=a*0.1;
            }
            if (jwb15==2)
            {
                pilihan15=b*0.1;
            }
            else if (jwb15==3)
            {
                pilihan15=c*0.1;
            }
            else if (jwb15==4)
            {
                pilihan15=d*0.1;
            }
            else if (jwb15==5)
            {
                pilihan15=e*0.1;
            }
            else if (jwb15==6)
            {
                pilihan15=f*0.1;
            }
            else
            {
            	cout<<"      Jawaban tidak sesuai"<<endl;
				goto ul15;
            }
        }

        system("cls");

	float CF1 = 0, CF2 = 0, CF3 = 0, CF4 = 0, CF5 = 0, CF6 = 0;
    float CE1 = 0, CD1 = 0, CD6 = 0, CD7 = 0, CD8 = 0, CD9 = 0, CD13 = 0, CD14 = 0, CD16 = 0, CD19 = 0;
    float CB1 = 0, CB9 = 0, CB10 = 0, CB11 = 0, CB12 = 0, CB13 = 0, CB14 = 0;


    //PERHITUNGAN Hipotermian Ringan
    CF1=pilihan1+ (pilihan2)*(1-pilihan1);
    CF2=CF1+ (pilihan3)*(1- CF1);
    CF3=CF2+ (pilihan4)*(1- CF2);
    CF4=CF3+ (pilihan5)*(1- CF3);
    CF5=CF4+ (pilihan6)*(1- CF4);

    //PERHITUNGAN Hipotermian Sedang
    CD1=pilihan7+ (pilihan8)*(1-pilihan7);
    CD6=CD1+ (pilihan9)*(1- CD1);


    //PERHITUNGAN Hipotermian Berat
    CB1=pilihan10+ (pilihan11)*(1-pilihan10);
    CB9=CB1+ (pilihan12)*(1- CB1);
    CB10=CB9+ (pilihan13)*(1- CB9);
    CB11=CB10+ (pilihan14)*(1- CB10);
    CB12=CB11+ (pilihan15)*(1- CB11);


        cout<<"***********************************************************************"<<endl;
        cout<<"                   Hasil Diagnosa Penyakit Hipotermia                     "<<endl;
        cout<<"***********************************************************************"<<endl;
        cout<<"    Hipotermia Ringan   : "<<CF5*100<<"%                       "<<endl;
        cout<<"    Hipotermia Sedang   : "<<CD6*100<<"%                       "<<endl;
        cout<<"    Hipotermia Berat    : "<<CB12*100<<"%                       "<<endl;
        cout<<"***********************************************************************"<<endl;
        cout<<endl<<endl;
        if(CF5<0.2 && CD6<0.2 && CB12<0.2)
        {
        	cout<<"Selamat anda aman dari penyakit Hipotermia \n";

		}
        else if(CF5>CD6 && CF5>CB12)
        {
            cout<<"Penyakit yang anda alami dengan persentase tertinggi adalah Hipotermia Ringan, dengan persentase "<<CF5*100<<"%"<<endl;
            cout<<"Solusi       :"<<endl;
            cout<<"1.Cek suhu tubuh pada bayi"<<endl;
            cout<<"2.Bayi harus segera dibersihkan setelah basah, lalu dibungkus dengan handuk kering yang hangat"<<endl;
            cout<<"3.Keringkan kepala bayi"<<endl;
            cout<<"4.Memakai pakaian yang hangat atau pakaian berlapis"<<endl;
            cout<<"5.Matikan AC, Kipas Angina tau sumber daya lainnya yang membuat bayi kedinginan"<<endl;
            cout<<"6.Pertahankan kontak kulit-ke-kulit dengan orang tua saat menyusui karena bayi baru lahir perlu mengeluarkan energi untuk menghasilkan panas"<<endl;
        }


        else if(CD6>CF5 && CD6>CB12)
        {
            cout<<"Penyakit yang anda alami dengan persentase tertinggi adalah Hipotermia Sedang, dengan persentase "<<CD6*100<<"%"<<endl;
            cout<<"Solusi       :"<<endl;
            cout<<"1.Cek suhu tubuh pada bayi"<<endl;
            cout<<"2.Menghangatkan bayi"<<endl;
            cout<<"3.Memberikan bayi pakaian yang hangat dan lembut"<<endl;
            cout<<"4.Hangatkan tangan sebelum menyentuh bayi"<<endl;
            cout<<"5.Menggendong bayi dan membawa bayi keruangan suhu yang lebih hangat"<<endl;
            cout<<"6.Pertahankan kontak kulit-ke-kulit dengan orang tua saat menyusui karena bayi baru lahir perlu mengeluarkan energi untuk menghasilkan panas"<<endl;
        }


        else if(CB12>CF5 && CB12>CD6)
        {
            cout<<"Penyakit yang anda alami dengan persentase tertinggi adalah Hipotermia Berat, dengan persentase "<<CB12*100<<"%"<<endl;
            cout<<"Solusi       :"<<endl;
            cout<<"1.Cek suhu tubuh pada bayi"<<endl;
            cout<<"2.Ganti pakaian basah dengan pakaian hangat dan topi."<<endl;
            cout<<"3.Menghangatkan dan menyelimuti bayi"<<endl;
        }

    }
