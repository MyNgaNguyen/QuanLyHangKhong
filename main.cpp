#include <iostream>
#include <stdio.h>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <sstream>
#include <conio.h>
#include <windows.h>
using namespace std;
class MayBay
{
	private:
		string soHieu;
	    int soCho;
	public:
		MayBay()
		{
		}
		MayBay(string soHieu,int soCho)
		{
			this->soCho=soCho;
			this->soHieu=soHieu;
		}
		void setSoCho(int soCho)
		{
			this->soCho=soCho;
		}
		void setSoHieu(string soHieu)
		{
			this->soHieu=soHieu;
		}
		string getSoHieu()
		{
			return soHieu;
		}
		int getSoCho()
		{
			return soCho;
		}
		~MayBay()
		{
		}
};
class KhachHang
{
	private:
		int soThuTu;
		string chungMinhNhanDan;
		string hoTen;
	public:
		KhachHang()
		{
			chungMinhNhanDan="";
			hoTen="";
			soThuTu=0;
		}
		KhachHang(int soThuTu,string chungMinhNhanDan,string hoTen)
		{
			this->soThuTu=soThuTu;
			this->chungMinhNhanDan=chungMinhNhanDan;
			this->hoTen=hoTen;
		}
		void setStt(int soThuTu)
		{
			this->soThuTu=soThuTu;
		}
		void setCmnd(string chungMinhNhanDan)
		{
			this->chungMinhNhanDan=chungMinhNhanDan;
		}
		void setHoTen(string hoTen)
		{
			this->hoTen=hoTen;
		}
		int getSoThuTu()
		{
			return soThuTu;
		}
		string getCmnd()
		{
			return chungMinhNhanDan;
		}
		string getHoTen()
		{
			return hoTen;
		}
		~KhachHang()
		{
		}
};
class VE
{
	private:
		string maVe;
		string maCB;
		string cmnd;
		string hoTen;
		int soThuTuGhe;
	public:
		VE()
		{
		}
		VE(string maVe,string maCB,string cmnd,string hoTen,int soThuTuGhe)
		{
			this->maVe=maVe;
			this->maCB=maCB;
			this->cmnd=cmnd;
			this->hoTen=hoTen;
			this->soThuTuGhe=soThuTuGhe;
		}
		void setMaVe(string maVe)
		{
			this->maVe=maVe;
		}
		void setMaCB(string maCB)
		{
			this->maCB=maCB;
		}
		void setCmnd(string cmnd)
		{
			this->cmnd=cmnd;
		}
		void setSoThuTuGhe(int soThuTuGhe)
		{
			this->soThuTuGhe=soThuTuGhe;
		}
		void setHoTen(string hoTen)
		{
			this->hoTen=hoTen;
		}
		string getMaVe()
		{
			return maVe;
		}
		string getMaCB()
		{
			return maCB;
		}
		string getCmnd()
		{
			return cmnd;
		}
		string getHoTen()
		{
			return hoTen;
		}
		int getSoThuTuGhe()
		{
			return soThuTuGhe;
		}
		~VE()
		{
		}
};
class ChuyenBay
{
	private:
		string maCB;
		string soHieuMB;
		string ngayKhoiHanh;
		string sanBayDen;
		int trangThai;
		int soCho;
		int gheTrong[500];
		VE dsVe[500];
		int soVeDaDat;
	public:
		ChuyenBay()
		{
		}
		ChuyenBay(string maCB,string soHieuMB,string ngayKhoiHanh,string sanBayDen,int trangThai,int soCho,int gtr[500],VE dsVe[500],int soVeDaDat)
		{
			this->maCB=maCB;
			this->soHieuMB=soHieuMB;
			this->ngayKhoiHanh=ngayKhoiHanh;
			this->sanBayDen=sanBayDen;
			this->trangThai=trangThai;
			this->soCho=soCho;
			this->soVeDaDat=soVeDaDat;
			for(int i=0;i<soCho;i++)
				this->gheTrong[i]=gtr[i];
			for(int i=0;i<soVeDaDat;i++)
				this->dsVe[i]=dsVe[i];
		}
		void setGtr(int gtr[500])
		{
			for(int i=0;i<soCho;i++)
				this->gheTrong[i]=gtr[i];
		}
		void setDsVe(VE dsVe[500])
		{
			for(int i=0;i<soVeDaDat;i++)
				this->dsVe[i]=dsVe[i];
		}
		VE* getDsVe()
		{
			return dsVe;
		}
		int* getGtr()
		{
			return gheTrong;
		}
		int getSoCho()
		{
			return soCho;
		}
		void setSoVeDaDat(int soVeDaDat)
		{
			this->soVeDaDat=soVeDaDat;
		}
		void themVe(VE v)
		{
			dsVe[soVeDaDat++]=v;
		}
		void setTrangThai(int trangThai)
		{
			this->trangThai=trangThai;
		}
		string getSoHieuMB()
		{
			return soHieuMB;
		}
		string getMaCB()
		{
			return maCB;
		}
		string getNgayKhoiHanh()
		{
			return ngayKhoiHanh;
		}
		string getSanBayDen()
		{
			return sanBayDen;
		}
		int getSoVeDaDat()
		{
			return soVeDaDat;
		}
		int getTrangThai()
		{
			return trangThai;
		}
		~ChuyenBay()
		{
		}
};
typedef struct
{
		string user;
		char *password=new char [20];
} Admin;

KhachHang kh[10000];
MayBay mb[100];
VE Ve[10000];
VE Vecho[5000];
ChuyenBay cb[1000];
Admin ad;
int somb=0,socb=0,soVe=0,sokh=0,e,soVecho=0;
string tam;

void luu()
{   
	int i,j;
    ofstream f("KhachHang.txt");
    f<<sokh<<"\n";
    for(i=0;i<sokh;i++)
    f<<kh[i].getSoThuTu()<<" "<<kh[i].getCmnd()<<" "<<kh[i].getHoTen()<<"\n";
    f.close();
    ofstream f1("ChuyenBay.txt");
    f1<<socb<<"\n";
	for(i=0;i<socb;i++)
	    {
		f1<<cb[i].getMaCB()<<" "<<cb[i].getSoHieuMB()<<" "<<cb[i].getNgayKhoiHanh()<<" "<<cb[i].getSanBayDen()<<" "<<cb[i].getTrangThai()<<" "<<cb[i].getSoVeDaDat()<<"\n";
		for(j=0;j<cb[i].getSoVeDaDat();j++)
		{
		    f1<<cb[i].getDsVe()[j].getMaVe()<<" ";
		}
		f1<<"\n";
		}
	f1.close();
}

void doc()
{
    int i,j;
	fstream f;
    f.open("MayBay.txt",ios::in);
    f>>somb;
    for(i=0;i<somb;i++)
    {
	    int soCho;
	    string soHieu;
		f>>soHieu>>soCho;
		mb[i]=MayBay(soHieu,soCho);
	}
    f.close();
    f.open("KhachHang.txt",ios::in);
    f>>sokh;
    for(i=0;i<sokh;i++)
    {
	    string hoTen,cmnd;
	    int soThuTu;;
		f>>soThuTu>>cmnd>>hoTen;
		kh[i]=KhachHang(soThuTu,cmnd,hoTen);
	}
    f.close();

    f.open("ChuyenBay.txt",ios::in);
    f>>socb;
    for(i=0;i<socb;i++)
    {
	    string soHieu,maCB,ngayKhoiHanh,sanBayDen;
		int trangThai,soCho,gtr[500],soVeDaDat;
		VE dsVe[500];
		f>>maCB>>soHieu>>ngayKhoiHanh>>sanBayDen>>trangThai>>soVeDaDat;
		for(j=0;j<soVeDaDat;j++)
	    {
	        string maVe;
			f>>maVe;
			dsVe[j].setMaVe(maVe);
	        tam=dsVe[j].getMaVe();
	        tam.erase(0,cb[i].getMaCB().size());
	        dsVe[j].setSoThuTuGhe(0);
	        for(e=0;e<tam.size();e++)
	        	dsVe[j].setSoThuTuGhe(dsVe[j].getSoThuTuGhe()*10+(int)tam[e]-48);
	        tam=dsVe[j].getMaVe()+".txt";
	        char* tenfile=new char[tam.size()+1];
	        std::strcpy (tenfile, tam.c_str());
	        ifstream f1(tenfile);
	        int soThuTuGhe;
	        string cmnd,hoTen;
            f1>>soThuTuGhe>>cmnd>>hoTen;
            dsVe[j].setCmnd(cmnd);
            dsVe[j].setHoTen(hoTen);
            dsVe[j].setSoThuTuGhe(soThuTuGhe);
            f1.close();
	    }
	    for(j=0;j<somb;j++)
	        if(soHieu==mb[j].getSoHieu()) 
				break;
	    soCho=mb[j].getSoCho();
	    for(e=0;e<soCho;e++)
	        gtr[e]=1;
	    for(j=0;j<soVeDaDat;j++)
	    	for(e=0;e<soCho;e++)
	        	if(dsVe[j].getSoThuTuGhe()==e+1)
	        	{
					gtr[e]=0;
					break;
				}
		cb[i]=ChuyenBay(maCB,soHieu,ngayKhoiHanh,sanBayDen,trangThai,soCho,gtr,dsVe,soVeDaDat);
    }
    f.close();
    f.open("Admin.txt",ios::in);
    f>>ad.user>>ad.password;
    f.close();

}

void menu()
{
	cout<<"He thong quan ly hang khong\n";
	cout<<"1. Hien thi danh sach chuyen bay\n";
	cout<<"2. Dat Ve\n";
	cout<<"3. Quan ly\n";
	cout<<"4. Thoat\n";
	cout<<"Hay chon....";
}

void hienThiDSChuyenBay()
{
	int i,j;
	if(socb==0)
		cout<<"Hien tai chua co chuyen bay nao de hien thi\n";
		else
		{
		    cout<<"Danh sach cac chuyen bay:\n";
			for(i=0;i<socb;i++)
			{
				cout<<"\n\n\n"<<i+1<<". Thong tin chuyen bay "<<cb[i].getMaCB()<<" : "<<endl;
				cout<<"|"<<setw(15)<<"Ma chuyen bay"<<"|"<<setw(20)<<"Ngay khoi hanh"<<"|"<<setw(30)<<"San bay den"<<"|"<<setw(15)<<"Trang thai"<<"|"<<endl;
				string trangThai="Con Ve";
				if(cb[i].getTrangThai()==0)
					trangThai="Da huy";
				if(cb[i].getTrangThai()==2)
					trangThai="Het Ve";
				if(cb[i].getTrangThai()==3)
					trangThai="Da hoan tat";
				cout<<"|"<<setw(15)<<cb[i].getMaCB()<<"|"<<setw(20)<<cb[i].getNgayKhoiHanh()<<"|"<<setw(30)<<cb[i].getSanBayDen()<<"|"<<setw(15)<<trangThai<<"|"<<endl;
				cout<<"\n		Danh sach Ve : \n";
				cout<<"		|"<<setw(6)<<"STT"<<"|"<<setw(15)<<"Ma Ve"<<"|"<<setw(15)<<"CMND"<<"|"<<setw(30)<<"Ho ten"<<"|"<<setw(15)<<"STT ghe"<<"|"<<endl;
				for(j=0;j<cb[i].getSoVeDaDat();j++)
					cout<<"		|"<<setw(6)<<j+1<<"|"<<setw(15)<<cb[i].getDsVe()[j].getMaVe()<<"|"<<setw(15)<<cb[i].getDsVe()[j].getCmnd()<<"|"<<setw(30)<<cb[i].getDsVe()[j].getHoTen()<<"|"<<setw(15)<<cb[i].getDsVe()[j].getSoThuTuGhe()<<"|"<<endl;
			}
		}
}

void datVe()
{
	int i,j;
	int demCB=0;
	for(i=0;i<socb;i++)
		if(cb[i].getTrangThai()==1)
			demCB++;
	if(demCB==0)
	{
		cout<<"Hien tai chua co chuyen bay nao co the dat Ve\n";
		return;
	}
	bool k=false;
	cout<<"Ban dang dat Ve \n";
	do
	{
		hienThiDSChuyenBay();
		int choice21;
		string macb_tam;
		cout<<"\n1. Nhap ma chuyen bay \n2. Huy dat Ve\nHay chon : ";
		cin>>choice21;
		if(choice21==1)
		{
			cout<<"Nhap ma chuyen bay : ";
			cin>>macb_tam;
			for(i=0;i<socb;i++)
				if(macb_tam==cb[i].getMaCB())
					break;
			if(i==socb)
			{
				cout<<"Ma chuyen bay ban nhap khong ton tai, hay nhap lai!\n";
			 	k=false;
			}
			else
			{
				if(cb[i].getTrangThai()==0)
					cout<<"Chuyen bay ban vua nhap da bi huy, hay hay chon chuyen bay khac!\n";
					else
						if(cb[i].getTrangThai()==2)
							cout<<"Chuyen bay ban vua nhap da het Ve, hay hay chon chuyen bay khac!\n";
							else
								if(cb[i].getTrangThai()==3)
						            cout<<"Chuyen bay ban vua nhap da hoan tat, hay chon chuyen bay khac!\n";
									else
									{
					                    string cmnd_tam;
										int choice22;
										do
										{
											cout<<"\n1. Nhap so CMND \n2. Huy dat Ve\nHay chon : ";
											cin>>choice22;
											if(choice22==2)
												k=true;
											if(choice22==1)
											{
												cout<<"Nhap CMND (Khong duoc de trong - Khong nhap khoang trang) : ";
												fflush(stdin);
												getline(cin,cmnd_tam);
												if(cmnd_tam.size()==0)
													cout<<"Vui long khong duoc de trong ";
													else
													{
														for(j=0;j<cmnd_tam.size();j++)
															if(cmnd_tam[j]==' ')
																break;
														if(j!=cmnd_tam.size())
															cout<<"Vui long khong nhap ky tu trang";
															else
															{
																int choice23;
																do
																{
																	cout<<"\n1. Nhap ho va ten \n2. Huy dat Ve\nHay chon : ";
																	cin>>choice23;
																	if(choice23!=2 && choice23!=1)
					                                                    cout<<"Ban da chon sai, vui long chon lai !\n";
																	if(choice23==2)
														                k=true;
														            if(choice22==1)
														            {
														                string ten_tam;
																		cout<<"Nhap ho va ten (Khong duoc de trong - Khong nhap khoang trang) : ";
														                fflush(stdin);
														                getline(cin,ten_tam);
														                if(ten_tam.size()==0)
														                    cout<<"Vui long khong duoc de trong ";
														                    else
														                    {
															    	            for(j=0;j<ten_tam.size();j++)
																                    if(ten_tam[j]==' ')
																                        break;
																                if(j!=ten_tam.size())
																                    cout<<"Vui long khong nhap ky tu trang";
																                    else
																                    {
																                        int choice24;
																                        do
																                        {
																				            cout<<"\n1. Nhap so thu tu ghe \n2. Huy dat Ve\nHay chon : ";
																				            cin>>choice24;
																				            if(choice24!=2 && choice24!=1)
					                                                                            cout<<"Ban da chon sai, vui long chon lai !\n";
																				                if(choice24==2)
														                                            k=true;
														                                        if(choice24==1)
														                                        {
														                                            int soghe_tam;
																					                printf("Nhap so thu tu ghe (Tu %d den %d) : ",1,cb[i].getSoCho());
														                                            cin>>soghe_tam;
																									if(soghe_tam<1 || soghe_tam>cb[i].getSoCho())
														                                                cout<<"Vui long nhap trong khoang gia tri ";
														                                                else
														                                                {
															    	                                        if(cb[i].getGtr()[soghe_tam-1]==0)
																                                                printf("Ghe %d da co nguoi khac dat, vui long nhap lai! ",soghe_tam);
																                                                else
																                                                {
																													string chuoi_ghe;
														                        	                                ostringstream conVert;
																													Vecho[soVecho].setSoThuTuGhe(soghe_tam);
                                                                                                                    conVert<<soghe_tam;
                                                                                                                    chuoi_ghe=conVert.str();
                                                                                                                    Vecho[soVecho].setMaVe(macb_tam+chuoi_ghe);
                                                                                                                    Vecho[soVecho].setMaCB(macb_tam);
                                                                                                                    Vecho[soVecho].setCmnd(cmnd_tam);
                                                                                                                    Vecho[soVecho].setHoTen(ten_tam);
                                                                                                                    soVecho++;
														                        	                                cout<<"Dat Ve thanh cong \n";
														                        	                                k=true;
																				                                }
																				                        }
																			                	}
																			            }while(k==false);
																					}
																			}
																	}
																}while(k==false);
															}
														}
											}
											if(choice22!=2 && choice22!=1)
					                            cout<<"Ban da chon sai, vui long chon lai !\n";
										}while(k==false);
									}
			}
		}
		if(choice21==2)
			k=true;
		if(choice21!=2 && choice21!=1)
			cout<<"Ban da chon sai, vui long chon lai !\n";
	}while(k==false);
}

void quanLy()
{
	int i,j;
	system("CLS");
	bool k=false;
	int dem=0;
	do
	{
		dem++;
		cout<<"\n* * * * * * * * * * * * * * * * * * * * *\n*       DANG   NHAP   HE   THONG        *\n* * * * * * * * * * * * * * * * * * * * *\nUser:        ";
		string user_tam;
		bool ktrql=true;
		char *password_tam=new char[strlen(ad.password)];
		cin>>user_tam;
		cout<<"Password:    ";
		char tmp;
		i=0;
		do
		{ 
			tmp = getch();
			if(tmp!=13)
			{
            	password_tam[i] = tmp;
            	cout<<"*";
				i++;
			}
		}while(tmp!=13);
		for(j=0;j<i;j++)
			if(ad.password[j]!=password_tam[j])
                ktrql=false;
        if(i!=strlen(ad.password))
            ktrql=false;
		if(user_tam==ad.user && ktrql==true)
		{
			k=true;
			int choice3;
			do
			{
				system("CLS");
				cout<<"\n1. Xu ly dat Ve\n2. Xu ly tra Ve\n3. Thong ke\n4. Thoat\nHay chon : ";
				cin>>choice3;
				switch(choice3)
				{
				    case 1:
				    	{
							system("CLS");
							int choice31;
							do
							{
								if(soVecho==0)
								{
									cout<<"Hien khong co Ve cho nao !\n";
									break;
								}
								cout<<"Danh sach Ve cho ";
				    			printf("\n %4s%15s%15s%20s%20s","STT","Ma chuyen bay","CMND","Ho ten","So thu tu ghe");
					            for(i=0;i<soVecho;i++)
					            cout<<"\n   "<<setw(9)<<left<<i+1<<setw(14)<<left<<Vecho[i].getMaCB()<<setw(17)<<left<<Vecho[i].getCmnd()<<setw(20)<<left<<Vecho[i].getHoTen()<<setw(20)<<left<<Vecho[i].getSoThuTuGhe();
								cout<<"\n1.Duyet Ve cho\n2. Thoat\nHay chon : ";
								cin>>choice31;
								if(choice31==2)
									break;
								if(choice31!=1 && choice31!=2)
									cout<<"Ban da chon sai, vui long chon lai !\n";
								if(choice31==1)
								{
									int stt1;
									do
									{
										printf("Nhap so thu tu Ve can duyet (Tu %d den %d): ",1,soVecho);
										cin>>stt1;
										if(stt1>soVecho || stt1<1)
											cout<<"Vui long nhap trong khoang gia tri ";
									}while(stt1>soVecho || stt1<1);
									for(i=0;i<socb;i++)
										if(Vecho[stt1-1].getMaCB()==cb[i].getMaCB())
										    break;
									VE dsVe[500];
									for(int z=0;z<cb[i].getSoVeDaDat();z++)
										dsVe[z]=cb[i].getDsVe()[z];
									int gtr[500];
									for(int z=0;z<cb[i].getSoCho();z++)
										gtr[z]=cb[i].getGtr()[z];
									gtr[Vecho[stt1-1].getSoThuTuGhe()-1]=0;
									dsVe[cb[i].getSoVeDaDat()].setMaVe(Vecho[stt1-1].getMaVe());
									dsVe[cb[i].getSoVeDaDat()].setMaCB(Vecho[stt1-1].getMaCB());
									dsVe[cb[i].getSoVeDaDat()].setCmnd(Vecho[stt1-1].getCmnd());
									dsVe[cb[i].getSoVeDaDat()].setHoTen(Vecho[stt1-1].getHoTen());
									dsVe[cb[i].getSoVeDaDat()].setSoThuTuGhe(Vecho[stt1-1].getSoThuTuGhe());
	                                cb[i].setSoVeDaDat(cb[i].getSoVeDaDat()+1);
	                                cb[i].setGtr(gtr);
	                                cb[i].setDsVe(dsVe);
									string ten;
	                                int soghe1;
                                    ostringstream conVert;
	                                soghe1=Vecho[stt1-1].getSoThuTuGhe();
                                    conVert<<soghe1;
                                    ten=conVert.str();
                                    string tenfile=Vecho[stt1-1].getMaCB()+ten+".txt";
                                 	char* tam=new char[tenfile.size()+1];
                                    std::strcpy (tam, tenfile.c_str());
	                                ofstream f(tam);
	                                f<<Vecho[stt1-1].getSoThuTuGhe()<<" "<<Vecho[stt1-1].getCmnd()<<" "<<Vecho[stt1-1].getHoTen();
	                                f.close();
									for(j=0;j<sokh;j++)
									if(Vecho[stt1].getCmnd()==kh[i].getCmnd())
										break;
									if(j==sokh)
									{
										kh[sokh].setCmnd(Vecho[stt1-1].getCmnd());
										kh[sokh].setHoTen(Vecho[stt1-1].getHoTen());
										kh[sokh].setStt(sokh+1);
										cout<<"\n"<<Vecho[stt1].getCmnd();
										sokh++;
									}
									for(j=stt1-1;j<soVecho;j++)
										Vecho[j]=Vecho[j+1];
									soVecho--;
									cout<<"\nDuyet Ve thanh cong \n";
								}
					        }while(choice31!=2);
					        cout<<"Nhan phim bat ky de tiep tuc....";
					        getch();
				    		break;
				    	}
				    	case 2:
				    	{
				    		system("CLS");
							int choice32;
							do
							{
								if(soVecho==0)
								{
									cout<<"Hien khong co Ve cho nao !\n";
									break;
								}
								cout<<"Danh sach Ve cho ";
				    			printf("\n %4s%15s%15s%20s%20s","STT","Ma chuyen bay","CMND","Ho ten","So thu tu ghe");
					            for(i=0;i<soVecho;i++)
					                cout<<"\n   "<<setw(9)<<left<<i+1<<setw(14)<<left<<Vecho[i].getMaCB()<<setw(17)<<left<<Vecho[i].getCmnd()<<setw(20)<<left<<Vecho[i].getHoTen()<<setw(20)<<left<<Vecho[i].getSoThuTuGhe();
								cout<<"\n1.Xoa Ve cho\n2. Thoat\nHay chon : ";
								cin>>choice32;
								if(choice32==2)
									break;
								if(choice32!=1 && choice32!=2)
									cout<<"Ban da chon sai, vui long chon lai !\n";
								if(choice32==1)
								{
									int stt1;
									do
									{
										printf("\nNhap so thu tu Ve can xoa (Tu %d den %d): ",1,soVecho);
										cin>>stt1;
										if(stt1>soVecho || stt1<1)
											cout<<"Vui long nhap trong khoang gia tri ";
									}while(stt1>soVecho || stt1<1);
									for(j=stt1-1;j<soVecho;j++)
										Vecho[j]=Vecho[j+1];
									soVecho--;
									cout<<"\nXoa Ve thanh cong \n";
								}
							}while(choice32!=2);
							cout<<"Nhan phim bat ky de tiep tuc....";
					        getch();
				    		break;
				    	}
				    	case 3:
				    	{
				    		system("CLS");
							int choice33;
				    		do
				    		{
				    			system("CLS");
								cout<<"\n1. Hien thi danh sach khach cua mot chuyen bay.\n2. Hien thi danh sach ghe con trong cua mot chuyen bay \n3. Thong ke so luong thuc chuyen bay cua mot may may\n4. Thoat \nHay chon : ";
				    			cin>>choice33;
				    			switch(choice33)
				    			{
									case 4:
										break;
									case 1:
									{
										system("CLS");
										string macb_tam;
										cout<<"\nNhap ma chuyen bay can tim : ";
										cin>>macb_tam;
										for(i=0;i<socb;i++)
											if(macb_tam==cb[i].getMaCB())
												break;
										if(i==socb)
											cout<<"\nKhong ton tai chuyen bay co ma la "<<macb_tam;
											else
											{
												cout<<"\nDanh sach Ve : \n";
												cout<<"|"<<setw(6)<<"STT"<<"|"<<setw(15)<<"Ma Ve"<<"|"<<setw(15)<<"CMND"<<"|"<<setw(30)<<"Ho ten"<<"|"<<setw(15)<<"STT ghe"<<"|"<<endl;
												for(j=0;j<cb[i].getSoVeDaDat();j++)
													cout<<"|"<<setw(6)<<j+1<<"|"<<setw(15)<<cb[i].getDsVe()[j].getMaVe()<<"|"<<setw(15)<<cb[i].getDsVe()[j].getCmnd()<<"|"<<setw(30)<<cb[i].getDsVe()[j].getHoTen()<<"|"<<setw(15)<<cb[i].getDsVe()[j].getSoThuTuGhe()<<"|"<<endl;
											}
										cout<<"Nhan phim bat ky de tiep tuc....";
					        			getch();
										break;
									}
									case 2:
									{
										system("CLS");
										string macb_tam;
										cout<<"\nNhap ma chuyen bay can tim : ";
										cin>>macb_tam;
										for(i=0;i<socb;i++)
											if(macb_tam==cb[i].getMaCB())
												break;
										if(i==socb)
											cout<<"\nKhong ton tai chuyen bay co ma la "<<macb_tam;
											else
											{
												cout<<"\nDanh sach ghe trong : ";
					                            for(j=0;j<cb[i].getSoCho();j++)
					                                if(cb[i].getGtr()[j]==true)
					                                    cout<<j+1<<" ";
					                            cout<<"\n";
											}
										cout<<"Nhan phim bat ky de tiep tuc....";
					        			getch();
										break;
									}
									case 3:
									{
										system("CLS");
										string mamb_tam;
										cout<<"\nNhap so hieu may bay can thong ke : ";
										cin>>mamb_tam;
										for(i=0;i<somb;i++)
											if(mamb_tam==mb[i].getSoHieu())
												break;
										if(i==somb)
											cout<<"\nKhong ton tai may bay co so hieu la "<<mamb_tam;
											else
											{
												int dem=0;
					                            for(j=0;j<socb;j++)
					                                if(mamb_tam==cb[j].getSoHieuMB())
					                                    dem++;
					                            cout<<"\nMay bay co so hieu "<<mamb_tam<<" da thuc hien "<<dem<<" chuyen bay ";
											}
										break;
										cout<<"Nhan phim bat ky de tiep tuc....";
					        			getch();
									}
									default:
				    				cout<<"Ban da chon sai, vui long chon lai !\n";
								}
				    		}while(choice33!=4);
				    		cout<<"Nhan phim bat ky de tiep tuc....";
					        getch();
				    		break;
				    	}
				    	case 4:
				    		break;
				    	default:
				    		cout<<"Ban da chon sai, vui long chon lai !\n";
					}
				}while(choice3!=4);
			}
			else
				if(dem<3) printf("\nBan da nhap sai tai khoan hoac mat khau %d lan (Sai 3 lan se thoat khoi he thong)\n",dem);
					else
					    printf("\nBan da nhap sai tai khoan hoac mat khau qua 3 lan, ban bi thoat khoi he thong\n");
	}while(dem<3 && k==false);
}
int main()
{   int choice;
    doc();
    system("color 9");
    do
    {
		system("CLS");
		menu();
        cin>>choice;
        switch(choice)
        {
		    case 1:
		    {
		    	system("CLS");
				hienThiDSChuyenBay();	
				cout<<"\nNhap phim bat ky de tiep tuc....";
				getch();
				break;
		    }
		    case 2:
		    {
		    	system("CLS");
				datVe();
				luu();
				cout<<"Nhap phim bat ky de tiep tuc....";
				getch();
			    break;
			}
			case 3:
			{
				system("CLS");
				quanLy();
				luu();
				cout<<"Nhap phim bat ky de tiep tuc....";
				getch();
			    break;
			}
			case 4:
			{
				system("CLS");	
				luu();
				cout<<"Good bye ";
			    break;
			}
			default:
			    cout<<"Ban da chon sai, vui long chon lai !\n";
		}
    }while(choice!=4);
    return 0;
}

