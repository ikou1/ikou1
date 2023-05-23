#define  _CRT_SECURE_NO_WARNINGS 1
#include"Date.h"
ostream& operator<<(ostream& out,const Date& d)
{
	out << d._year << "Äê" << d._month << "ÔÂ" << d._day << "ÈÕ";
	return out;
}

istream& operator>>(istream& in, Date& d)
{
	in >> d._year >> d._month >> d._day;
	return in;
}








    //char arr1[10];
    //int arr11[10];
    //char arr2[10];
    //int arr22[10];
    //cin >> arr1 >> arr2;
    //for (int i = 0; i <= 7; i++)
    //{
    //    arr11[i] = arr1[i] - '0';
    //    arr22[i] = arr2[i] - '0';
    //}
    //Date d1(arr11[0] * 1000 + arr11[1] * 100 + arr11[2] * 10 + arr11[3], arr11[4] * 10 + arr11[5], arr11[6] * 10 + arr11[7]);
    //Date d2(arr22[0] * 1000 + arr22[1] * 100 + arr22[2] * 10 + arr22[3], arr22[4] * 10 + arr22[5], arr22[6] * 10 + arr22[7]);
    ///*cout << d1 << endl;*/
    ////cout << d2 << endl;
    //int ret = abs(d1.difference(d2)) + 1;
    //cout << ret;
    int main()
    {
        int year, n;
        cin>> year >> n;
        Date d1(year, 1, 1);
        d1 += n - 1;
        d1.print();
    }
