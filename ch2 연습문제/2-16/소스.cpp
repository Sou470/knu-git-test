#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int i;
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n텍스트의 끝은 ; 입니다. 10000개까지 가능합니다.\n";
	char input[10000] = { '\0' };
	int num_count = 0;
	char alpha = 'a';
	int char_count;

	cin.getline(input, 10000, ';');
	//입력받은 내용을 전부 영어 소문자로 바꾸면서 총알파벳 숫자 세기
	for (i = 0; input[i] != '\0'; ++i) {
		if (input[i] >= 'A' && input[i] <= 'Z')
			input[i] = tolower(input[i]);

		if (isalpha(input[i]) != 0)
			num_count += 1;
	}
	cout << "총 알파벳 수 " << num_count << endl;

	// a부터 z까지 각각의 알파벳 카운팅하고 *로 찍기
	while (true) {
		char_count = 0;
		//각 알파벳 카운팅
		for (i = 0; input[i] != '\0'; i++) {
			if (alpha == input[i])
				char_count += 1;
		}
		cout << alpha << " (";
		cout.width(2);
		cout << char_count << ")";
		cout << " : ";

		//카운팅 된 숫자만큼 * 표기하기
		for (i = 0; i < char_count; ++i) {
			cout << "*";
		}
		cout << endl;
		++alpha;

		if (alpha > 'z')
			break;
	}
	return 0;
}