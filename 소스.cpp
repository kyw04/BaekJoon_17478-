#include <iostream>
using namespace std;

string bar(int, string);
void recursion(int, int);

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
	recursion(n, 0);
	return 0;
}

string bar(int i, string text)
{
	if (i == 0)
		return text;
	text += "____";
	return bar(i - 1, text);
}
void recursion(int n, int i)
{
	string temp = bar(i, "");

	cout << temp << "\"����Լ��� ������?\"\n";

	if (i == n)
	{
		cout << temp << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
		cout << temp << "��� �亯�Ͽ���.\n";
		return;
	}

	cout << temp << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
	cout << temp << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
	cout << temp << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";

	recursion(n, i + 1);

	cout << temp << "��� �亯�Ͽ���.\n";
}