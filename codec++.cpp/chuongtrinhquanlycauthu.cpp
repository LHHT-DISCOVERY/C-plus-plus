 #include<iostream>
 using namespace std;
 #include<cstring>

 class CauThu{
	friend void xapxep(CauThu[] , float);
    private:
    string hoten,quequan ,vitrithidau;
    float tuoi , cannang , chieucao;
    int soao;
    public:
    CauThu()
	{
	    this->hoten ="" ;
		this->quequan ="" ;
		this->soao = 0;
	    this->tuoi = 0;
	    this->cannang = 0;
		this->chieucao = 0;
	}
    CauThu(string hoten,string quequan,string vitrithidau, int soao,float tuoi, float cannang, float chieucao)
    {
        this->hoten = hoten;
        this->quequan = quequan;
        this->vitrithidau = vitrithidau;
        this->soao = soao;
        this->tuoi = tuoi;
        this->cannang = cannang;
        this->chieucao = chieucao;
        }
    ~CauThu()
    {
        this->hoten = ""; 
        this->quequan = ""; 
        this->vitrithidau = "";
        this->tuoi = 0;this->soao = 0;
        this->cannang = this->chieucao = 0;
    }
    friend istream &operator>>(istream &is, CauThu &ct)
    {
        cin.ignore();
        cout << "Nhap Ho va Ten: ";
		fflush(stdin); 
		getline(is, ct.hoten);
        cout << "Nhap Que Quan: "; 
		fflush(stdin);
		getline(is, ct.quequan);
        cout << "Vi Tri Thi Dau: "; 
		fflush(stdin); 
		getline(is, ct.vitrithidau);
        cout << "So Ao Thi Dau : ";
		is >> ct.soao; 
        cout << "Nhap Tuoi: "; 
		is >> ct.tuoi;
        cout << "Nhap Can Nang: ";
		is >> ct.cannang;
        cout << "Nhap Chieu Cao: "; 
		is >> ct.chieucao;
        return is;
    }
 
    friend ostream &operator<<(ostream &os, CauThu  ct)
    {
        cout << "\t\t\t Ho va Ten: " << ct.hoten << endl;
        cout << "\t\t\t Que Quan: " << ct.quequan << endl;
        cout << "\t\t\t Vi Tri Thi Dau : " << ct.vitrithidau << endl;
        cout << "\t\t\t So Ao Thi Dau: " << ct.soao << endl;
        cout << "\t\t\t Tuoi: " << ct.tuoi << endl;
        cout << "\t\t\t Can Nang: " << ct.cannang << endl;
        cout << "\t\t\t Chieu cao: " << ct.chieucao << endl;
        return os;
    }
    
    
    
   void xapxep(CauThu arr[] , int n ){
   CauThu temp;
	for (int i= 0 ; i < n-1 ; i++ ){
	for (int  j = i+1 ; j < n ; j++){
	if ( arr[i].chieucao < arr[j].chieucao){
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
	}}}
	}
 
 };
 int main (){
 cout << endl ;
 cout << "\t\t\t-||--XIN MOI NHAP DANH SACH CAC CAU THU--||-" << endl << "\n\n";
 cout << "\t VI DU:"<< endl;
 CauThu h ( "Nguyen Van A" ,"Quang Nam","Tien Dao" ,7 , 32, 57, 180);
 cout << h;
 cout <<"\t\t\t... " <<endl << endl;
 cout << " \t\t\t\t BAT DAU NHAP : " << endl;
 cout << "\n\n";
 int n;
 cout << " + NHAP SO LUONG CAU THU TRONG CAU LAC BO : " ;
 cin >> n;
 CauThu *arr = new CauThu[n];
    for (int i = 0; i < n; ++i) {
    	cout << " \t\t\t Cau Thu Thu " << i+1 << " la : " << endl;
    	cin >> arr[i]; 
	} 
	cout << endl << endl;
	cout << " \t\t\t\t XUAT DANH SACH CAC CAU THU : " << endl;
    for (int i = 0; i < n; ++i) {
    	cout << "\t\t --------------------------------------" << endl ;
		cout << "\t\t\tThong Tin Cau Thu Thu " << i+1 <<" la: " << endl <<arr[i] << endl;
	}
	//cout << " chieu cao cua cau thu sap xep tu lon den be la : " << ct.xapxep(ct,n);

 return 0;}
 

