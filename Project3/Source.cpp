#include <iostream>
using namespace std;

int main() {
	string a[7] = {"SUNDAY","MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY"};
	int date;
	int i=0,j=0;
	for (i = 0;1;i++)
	{
		cin >> date;
		if (date < 1 || date > 31)
		{
			cout << "ERROR" << endl;
			break;
		}else
		for (j = 0;1> j;j++)
		{
			cout << a[(date + 3) % 7] << endl;
		}
	
		
	}
	
	


}