#include <iostream>
#include "Stack.h"
#include "ArithmeticExpression.h"
using namespace std;

int main()
{
	
	setlocale(LC_ALL, "rus");
	
	cout << "�������� ������ Stack" << endl;
	int n, c, p;
	cout << "����������� ���� � �����: ";
	cin >> n;
	TStack<int> prov(n);
	bool w;
	cout << "������ ��������� ����? (0 - ���, 1 - ��): ";
	cin >> w;
	if (w == true) 
	{
		cout << "������� �������� ������ ���������?: ";
		cin >> c;
		for (int i = 1; i < c+1; i++)
		{
			cout << "������� " << i << " ��������: ";
			cin >> p;
			prov.Push(p);
		}
	}
	cout << "���� ������"<< endl;

	cout << "������ ������� �������� �� �����? (0 - ���, 1 - ��): ";
	cin >> w;
	if (w == true)
	{
		cout << "������� �������� ������ �������?: ";
		cin >> c;
		for (int i = 1; i < c + 1; i++)
		{
			cout << prov.Pop() << " ";
		}
	}
	cout << "\n\n\n";



	cout << "�������� ������ ArithmeticExpression" << endl;
	string exprStr;
	cout << "������� ���������: ";
	cin >> exprStr;
	TArithmeticExpression expr(exprStr);
	cout << "\n��������� �����: " << expr.GetInfix() << endl;
	cout << "����������� �����: " << expr.GetPostfix() << "\n" << endl;
	vector<string> operands = expr.GetOperands();
	map<string, double> values;
	double val;

	for (const auto& op : operands)
	{
		cout << "������� �������� ��������� " << op << ": ";
		cin >> val;
		values[op] = val;
	}

	cout << "����: " << expr.Calculate(values) << endl;

	return 0;
}