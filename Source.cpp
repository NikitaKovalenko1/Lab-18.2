#include <iostream>
using namespace std;

class Computer
{

public:
	string proc;
	int OP, JD;

	Computer(string proctype, int OPsize, int JDsize)
	{
		proc = proctype;
		OP = OPsize;
		JD = JDsize;
	};

	void Print()
	{
		cout << "\n" << "��� ����������: " << proc << "\n����� ��: " << OP << "\n����� ��: " << JD;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	string proc;
	int OP, JD;
	cout << "����� �������� ����������, ����� �� � ��" << endl;
	cin >> proc >> OP >> JD;
	Computer a(proc, OP, JD);
	a.Print();
}