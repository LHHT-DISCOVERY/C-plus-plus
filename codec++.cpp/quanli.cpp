#include<conio.h>
#include<stdio.h>
#include <iostream>
#include <string.h>
#define MAX 100
using namespace std;

struct HocVien {
    int id;
    char ten[30];
    char gioiTinh[5];
    int tuoi;
    float diemKiemTra1;
    float diemKiemTra2;
    float diemTB = 0;
    char hocluc[10] = "-";
};


typedef HocVien HV;

void printLine(int n);
void nhapThongTinHV(HV &hv, int id);
void nhapHV(HV a[], int id, int n);
void capNhatThongTinHV(HV &hv);
void capNhatHV(HV a[], int id, int n);
int xoaTheoID(HV a[], int id, int n);
void timKiemTheoTen(HV a[], char ten[], int n);
void tinhDTB(HV &sv);
void xeploai(HV &sv);
int idLonNhat(HV a[], int n);
void sapxepTheoDTB(HV a[], int n);
void sapXepTheoTen(HV a[], int n);
void showHocVien(HV a[], int n);
int docFile(HV a[], char fileName[]);
void ghiFile(HV a[], int n, char fileName[]);
void pressAnyKey();

int main() {
    int key;
    char fileName[] = "hocvien.txt";
    HV arrayHV[MAX];
    int soluongHV = 0;
    int idCount = 0;
    
    // nhap danh sach sinh vien tu file
    soluongHV = docFile(arrayHV, fileName);
    idCount = idLonNhat (arrayHV, soluongHV);

    while(true) {
        cout << " < CHUONG TRINH QUAN LY HOC VIEN TIENG ANH > \n";
        cout << "*************************MENU**************************\n";
        cout << "**  1. Them hoc vien.                                **\n";
        cout << "**  2. Cap nhat thong tin hoc vien  boi ID.          **\n";
        cout << "**  3. Xoa hoc vien  boi ID.                         **\n";
        cout << "**  4. Tim kiem hoc vien  theo ten.                  **\n";
        cout << "**  5. Sap xep hoc vien  theo diem trung binh (GPA). **\n";
        cout << "**  6. Sap xep hoc vien  theo ten.                   **\n";
        cout << "**  7. Hien thi danh sach hoc vien .                 **\n";
        cout << "**  8. Ghi danh sach hoc vien  vao file.             **\n";
        cout << "**  0. Thoat                                         **\n";
        cout << "*******************************************************\n";
        cout << "Nhap tuy chon: ";
        cin >> key;
        switch(key){
            case 1:
                cout << "\n1. Them hoc vien.";
                idCount++;
                nhapHV(arrayHV, idCount, soluongHV);
                printf("\nThem hoc vien thanh cong!");
                soluongHV++;
                pressAnyKey();
                break;
            case 2:
                if(soluongHV > 0) {
                    int id;
                    cout << "\n2. Cap nhat thong tin hoc vien. ";
                    cout << "\n Nhap ID: "; cin >> id;
                    capNhatHV(arrayHV, id, soluongHV);
                }else{
                    cout << "\nSanh sach hoc vien trong!";
                }
                pressAnyKey();
                break;
            case 3:
                if(soluongHV > 0) {
                    int id;
                    cout << "\n3. Xoa hoc vien.";
                    cout << "\n Nhap ID: "; cin >> id;
                    if (xoaTheoID(arrayHV, id, soluongHV) == 1) {
                        printf("\nSinh vien co id = %d da bi xoa.", &id);
                        soluongHV--;
                    }
                }else{
                    cout << "\nSanh sach hoc vien trong!";
                }
                pressAnyKey();
                break;
            case 4:
                if(soluongHV > 0) {
                    cout << "\n4. Tim kiem hoc vien theo ten.";
                    char strTen[30];
                    cout << "\nNhap ten de tim kiem: "; fflush(stdin); gets(strTen);
                    timKiemTheoTen(arrayHV, strTen, soluongHV);
                }else{
                    cout << "\nSanh sach hoc vien trong!";
                }
                pressAnyKey();
                break;
            case 5:
                if(soluongHV > 0) {
                    cout << "\n5. Sap xep hoc vien theo diem trung binh (GPA).";
                    sapxepTheoDTB(arrayHV, soluongHV);
                    showHocVien(arrayHV, soluongHV);
                }else{
                    cout << "\nSanh sach hoc vien trong!";
                }
                pressAnyKey();
                break;
            case 6:
                if(soluongHV > 0) {
                    cout << "\n6. Sap xep hoc vien theo ten.";
                    sapXepTheoTen(arrayHV, soluongHV);
                    showHocVien(arrayHV, soluongHV);
                } else {
                    cout << "\nSanh sach hoc vien trong!";
                }
                pressAnyKey();
                break;
            case 7:
                if(soluongHV > 0){
                    cout << "\n7. Hien thi danh sach hoc vien.";
                    showHocVien(arrayHV, soluongHV);
                }else{
                    cout << "\nSanh sach hoc vien trong!";
                }
                pressAnyKey();
                break;
            case 8:
                if(soluongHV > 0){
                    cout << "\n8. Ghi danh sach hoc vien vao file.";
                    ghiFile(arrayHV, soluongHV, fileName);
                }else{
                    cout << "\nSanh sach hoc vien trong!";
                }
                printf("\nGhi danh sach hoc vien vao file %s thanh cong!", fileName);
                pressAnyKey();
                break;
            case 0:
                cout << "\nBan da chon thoat chuong trinh!";
                getch();
                return 0;
            default:
                cout << "\nKhong co chuc nang nay!";
                cout << "\nHay chon chuc nang trong hop menu.";
                pressAnyKey();
                break;
        }
    }
}
 
void tinhDTB(HV &sv) {
    sv.diemTB = (sv.diemKiemTra1 + sv.diemKiemTra2) / 2;    
}

void xeploai(HV &sv) {
    if(sv.diemTB >= 8) strcpy(sv.hocluc, "Gioi");
    else if(sv.diemTB >= 6.5) strcpy(sv.hocluc, "Kha");
    else if(sv.diemTB >= 5) strcpy(sv.hocluc, "Trung binh");
    else strcpy(sv.hocluc, "Yeu");
}
 
void nhapThongTinHV(HV &sv, int id) {
    cout << "\n Nhap ten: "; fflush(stdin); gets(sv.ten);
    cout << " Nhap gioi tinh: "; gets(sv.gioiTinh);
    cout << " Nhap tuoi: "; cin >> sv.tuoi;
    cout << " Nhap diem kiem tra doi 1: "; cin >> sv.diemKiemTra1;
    cout << " Nhap diem kiem tra doi 2: "; cin >> sv.diemKiemTra2;  
    sv.id = id;
    tinhDTB(sv);
    xeploai(sv);
}

void nhapHV(HV a[], int id, int n) {
    printLine(40);
    printf("\n Nhap hoc vien thu %d:", n + 1);
    nhapThongTinHV(a[n], id);
    printLine(40);
}

void capNhatThongTinHV(HV &sv) {
    cout << "\n Nhap ten: "; fflush(stdin); gets(sv.ten);
    cout << " Nhap gioi tinh: "; gets(sv.gioiTinh);
    cout << " Nhap tuoi: "; cin >> sv.tuoi;
    cout << " Nhap diem kiem tra doi 1: "; cin >> sv.diemKiemTra1;
    cout << " Nhap diem kiem tra doi 2: "; cin >> sv.diemKiemTra2; 
    tinhDTB(sv);
    xeploai(sv);
}

void capNhatHV(HV a[], int id, int n) {
    int found = 0;
    for(int i = 0; i < n; i++) {
        if (a[i].id == id) {
            found = 1;
            printLine(40);
            cout << "\n Cap nhat thong tin hoc vien co ID = " << id;
            capNhatThongTinHV(a[i]);
            printLine(40);
            break;
        }
    }
    if (found == 0) {
        printf("\n Sinh vien co ID = %d khong ton tai.", id);
    }
}

int xoaTheoID(HV a[], int id, int n) {
    int found = 0;
    for(int i = 0; i < n; i++) {
        if (a[i].id == id) {
            found = 1;
            printLine(40);
            for (int j = i; j < n; j++) {
                a[j] = a[j+1];
            }
            cout << "\n Da xoa HV co ID = " << id;
            printLine(40);
            break;
        }
    }
    if (found == 0) {
        printf("\n Sinh vien co ID = %d khong ton tai.", id);
        return 0;
    } else {
        return 1;
    }
}

void timKiemTheoTen(HV a[], char ten[], int n) {
    HV arrayFound[MAX];
    char tenHV[30];
    int found = 0;
    for(int i = 0; i < n; i++) {
        strcpy(tenHV, a[i].ten);
        if(strstr(strupr(tenHV), strupr(ten))) {
            arrayFound[found] = a[i];
            found++;
        }
    }
    showHocVien(arrayFound, found);
}

void showHocVien(HV a[], int n) {
    printLine(100);
    cout <<"\n\STT\tID\tHo va ten\tGioi tinh\tTuoi\tDiem kiem tra doi 1\tDiem kiem tra doi 2\tDiem TB\tHoc luc";
    for(int i = 0; i < n; i++) {
        // in hoc vien thu i ra man hinh
        printf("\n %d", i + 1);
        printf("\t%d", a[i].id);
        printf("\t%s", a[i].ten);
        printf("\t\t%s", a[i].gioiTinh);
        printf("\t\t%d", a[i].tuoi);
        printf("\t\t%.2f\t\t\t\t%.2f", a[i].diemKiemTra1, a[i].diemKiemTra2);
        printf("\t%.2f", a[i].diemTB);
        printf("\t%s", a[i].hocluc);
    }
    printLine(100);
}
 
void sapxepTheoDTB(HV a[], int n) {
    //Sap xep theo DTB tang dan
    HV tmp;
    for(int i = 0;i < n;i++) {
        for(int j = i+1; j < n;j++) {
            if(a[i].diemTB > a[j].diemTB) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

void sapXepTheoTen(HV a[], int n) {
    //Sap xep hoc vien theo ten theo thu tu tang dan
    HV tmp;
    char tenHV1[30];
    char tenHV2[30];
    for(int i = 0;i < n; i++) {
    	strcpy(tenHV1, a[i].ten);
        for(int j = i+1; j < n; j++) {
        	strcpy(tenHV2, a[j].ten);
            if(strcmp(strupr(tenHV1), strupr(tenHV2)) > 0) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

int idLonNhat (HV a[], int n) {
    int idMax = 0;
    if (n > 0) {
        idMax = a[0].id;
        for(int i = 0;i < n; i++) {
            if (a[i].id > idMax) {
                idMax = a[i].id;
            }
        }
    }
    return idMax;
}

int docFile(HV a[], char fileName[]) {
    FILE * fp;
    int i = 0;
    fp = fopen (fileName, "r");
    cout << "Chuan bi doc file: "; puts(fileName);
    // doc thong tin hoc vien
    while (fscanf(fp, "%5d%30s%5s%5d%10f%10f%10f%10s\n", &a[i].id, &a[i].ten, 
            &a[i].gioiTinh, &a[i].tuoi, &a[i].diemKiemTra1, &a[i].diemKiemTra2,
            &a[i].diemTB, &a[i].hocluc) != EOF) {
       i++;
       cout << " Doc ban ghi thu: " << i << endl;
    }
    cout << " So luong hoc vien co san trong file la: " << i << endl;
    cout << endl;
    fclose (fp);
    // tra ve so luong hoc vien duoc doc tu file
    return i;
}

void ghiFile(HV a[], int n, char fileName[]) {
    FILE * fp;
    fp = fopen (fileName,"w");
    fprintf(fp, "\n\STT\tID\tHo va ten\tGioi tinh\tTuoi\tDiem kiem tra doi 1\tDiem kiem tra doi 2\t\tDiem TB\t\tHoc luc\n");
    for(int i = 0;i < n;i++){
    	
        fprintf(fp, "%5d%30s%5s%5d\t\t%10f\t\t%10f%10f%10s\n", a[i].id, a[i].ten,a[i].gioiTinh, 
            a[i].tuoi, a[i].diemKiemTra1, a[i].diemKiemTra2, a[i].diemTB, a[i].hocluc);
    }
    fclose (fp);
}

void printLine(int n) {
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << "_";
    }
    cout << endl;
}

void pressAnyKey() {
    cout << "\n\nBam phim bat ky de tiep tuc...";
    getch();
    system("cls");
}

