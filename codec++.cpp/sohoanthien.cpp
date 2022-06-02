//Cho mảng 1 chiều các số nguyên. Viết hàm tìm số hoàn thiện nhỏ nhất trong mảng.

#include<iostream>
using namespace std;

// hàm nhập mảng
void Nhap_Mang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap a[" << i << "] = ";
		cin >> a[i];
	}
}

// hàm xuất mảng
void Xuat_Mang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "  ";
	}
}

// hàm kiểm tra số hoàn thiện
bool Kiem_Tra_So_Hoan_Thien(int n)
{
	int tong = 1;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			tong += i;
		}

	}
	if (tong == n)
	{
		return true;
	}
	return false;
}


// hàm tìm số hoàn thiện nhỏ nhất
int Tim_So_Hoan_Thien_Nho_Nhat(int a[], int n)
{
	// BƯỚC 1: Tìm số hoàn thiện đầu tiên trong cái mảng để giả sử nó là số hoàn thiện nhỏ nhất
	int min = 0; // nếu biến min mà thay đổi giá trị thì mảng có phần tử là số hoàn thiện nhỏ nhất
	for (int i = 0; i < n; i++)
	{
		if (Kiem_Tra_So_Hoan_Thien(a[i]) == true)
		{
			min = a[i];
			// BƯỚC 2: Kiểm tra tiếp tục với các phần tử từ vị trí thứ i đến cuối mảng
			for (int j = i + 1; j < n; j++)
			{
				if (Kiem_Tra_So_Hoan_Thien(a[j]) == true)
				{
					if (min > a[j])
					{
						min = a[j]; // cập nhật lại số hoàn thiện nhỏ nhất
					}
				}
			}
			break; // thoát khỏi vòng lặp for lớn
		}
	}
	return min;
}

int main()
{
	int n;
	int a[100];
	do
	{
		cout << "\nNhap so luong phan tu mang: ";
		cin >> n;

	} while (n <= 0 || n > 100);

	cout << "\n\t\tNHAP MANG\n";
	Nhap_Mang(a, n);
	cout << "\n\t\tXUAT MANG\n";
	Xuat_Mang(a, n);

	int min = Tim_So_Hoan_Thien_Nho_Nhat(a, n);
	if (min == 0)
	{
		cout << "\nMang khong ton tai so hoan thien";
	}
	else
	{
		cout << "\nSo hoan thien nho nhat la: " << min;
	}
	system("pause");
	return 0;
}