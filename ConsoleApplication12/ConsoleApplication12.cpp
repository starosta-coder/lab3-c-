#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

void BaseTask()
{
	cout << "Базовый уровень" << endl;
	char str[80] = "abcgbe q$1  b56bcg#r4 6c aeg ";
	char token[4] = "abc";
	char* p = str;
	size_t count = 0, tsize = strlen(token); // OR (sizeof(token)-1)

	while (*p)
	{
		if (!memcmp(p, token, tsize))
		{
			count++;
			p += tsize;
		}
		else p++;
	}
	cout << count << '\n';
}

void get_upper_lower_part(const char* str, float* upper, float* lower) 
{
	int len = 0;
	int u = 0;
	int l = 0;
	char c;
	while (c = *str++) {
		++len;
		if (c >= 'A' && c <= 'Z') {
			++u;
		}
		else if (c >= 'a' && c <= 'z') {
			++l;
		}
		if (len) {
			*upper = u * 100.0f / len;
			*lower = l * 100.0f / len;
		}
	}
}

void MediumTask()
{
	cout << "Средний уровень:" << endl;
	char str[] = "Hello world";
	float upper = 0.0f;
	float lower = 0.0f;
	get_upper_lower_part(str, &upper, &lower);
	printf("upper: %f\nlower: %f\n", upper, lower);
}

int main()
{
	setlocale(LC_ALL, "Rus");
	BaseTask();
	MediumTask();
}