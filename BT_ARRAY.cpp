#include<iostream>
using namespace std;

#define MAX 50

void Nhap_ma_tran_2_chieu(int a[MAX][MAX], int n, int m);
void Xuat_ma_tran_2_chieu(int a[MAX][MAX], int n, int m);
void Tim_kiem_mot_phan_tu(int a[MAX][MAX], int n, int m);
void Tim_max(int a[MAX][MAX], int n, int m);
void Tim_min(int a[MAX][MAX], int n, int m);


int main()
{

	int arr[MAX][MAX];
	int n, m;

	cout << "Nhap kich thuoc cua mang hai chieu: ";
	cin >> n >> m;
	Nhap_ma_tran_2_chieu(arr,n,m);
	Xuat_ma_tran_2_chieu(arr,n,m);
	Tim_kiem_mot_phan_tu(arr,n,m);
	Tim_max(arr, n, m);
	Tim_min(arr, n, m);
	return 0;
}

void Nhap_ma_tran_2_chieu(int a[MAX][MAX], int n, int m)
{
	cout << "Vui long nhap gia tri cua mang: " << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
			cout << endl;
		}
	}
}

void Xuat_ma_tran_2_chieu(int a[MAX][MAX], int n, int m)
{
	cout << "Mang 2 chieu ban vua nhap la: " << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout<< a[i][j];
		}
		cout << endl;
	}

}

void Tim_kiem_mot_phan_tu(int a[MAX][MAX], int n, int m)
{
	int find;
	int check =0;
	//std::string vi_tri;
	cout << "Nhap gia tri can tim kiem: ";
	cin >> find;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			
			if (find == a[i][j])
			{
				check = 1;
				//vi_tri = "a[" << i << "][" << j << "]: ";
			}
		}
		cout << endl;
	}
	if (check ==1)
	{
		cout << "Gia tri ton tai trong mang";
	}
	else { cout << "Gia tri KHONG ton tai trong mang." << endl; }
}

void Tim_max(int a[MAX][MAX], int n, int m)
{
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] > max) { max = a[i][j]; }
		}
		cout << endl;
	}
	cout << "Gia tri lon nhat la: " << max;
}
void Tim_min(int a[MAX][MAX], int n, int m)
{
	int min = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] < min) { min = a[i][j]; }
		}
		cout << endl;
	}
	cout << "Gia tri nho nhat la: " << min;

}