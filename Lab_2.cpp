#include <iostream>
#include <Windows.h>
using namespace std;
void outp(char* str) {
	printf("%s\n%d - размер строки\n", str, strlen(str));
}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char str[256];
	cin.getline(str, 256);
	outp(str);
	int l = strlen(str);
	int count = 0;
	for (int i = 0; i < l; i++)
		if (str[i] == str[0])
			count++; // count = count + 1; <=> count +=1;
		else
			if (str[i] == '.')
				str[i] = str[0];
	printf("%d - кол-во символов, равных первому в строке.\nНовую строку после замены '.' на %c\n%s - новая строка\n", count, str[0], str);
	system("pause");
	return 0;
}
