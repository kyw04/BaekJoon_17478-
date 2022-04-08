#include <iostream>
using namespace std;

string bar(int, string);
void recursion(int, int);

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n";
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

	cout << temp << "\"재귀함수가 뭔가요?\"\n";

	if (i == n)
	{
		cout << temp << "\"재귀함수는 자기 자신을 호출하는 함수라네\"\n";
		cout << temp << "라고 답변하였지.\n";
		return;
	}

	cout << temp << "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n";
	cout << temp << "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n";
	cout << temp << "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n";

	recursion(n, i + 1);

	cout << temp << "라고 답변하였지.\n";
}