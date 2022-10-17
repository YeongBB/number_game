#include<iostream>
#include<ctime>			// 시간

using namespace std;

void main()
{
	char yn = NULL;						// 다시하기 여부
	srand(time(NULL));
	while (yn != 'n')					// 1번
	{
		int count = 0;					// 횟수
		int input = 0;						// 사용자 입력 변수
		int Rnum = (rand() % 100);		// 0~99 난수
		clock_t start = clock();
		cout << " 난수 설정 완료! 게임을 시작합니다" << endl;
		cout << " 0 ~ 99 사이의 숫자를 사용합니다" << endl;
		cout << "-------------------------------" << endl;
		while (input != Rnum)		// 2번
		{
			cout << " 정답을 입력하세요 : ";
			cin >> input;
			if (input < Rnum)
				cout << " 제시한 정답은 낮습니다" << endl;
			else if (input > Rnum)
				cout << " 제시한 정답은 높습니다" << endl;
			count++;
		}				// ~ 2번

		if (count <= 3)
			cout << " 축하합니다. 시도횟수 = " << count << " 금메달!" << endl;
		else if (count >= 4 && count <= 6)
			cout << " 축하합니다. 시도횟수 = " << count << " 은메달!" << endl;
		else if (count >= 7 && count <= 10)
			cout << " 축하합니다. 시도횟수 = " << count << " 동메달!" << endl;
		else
			cout << " 축하합니다. 시도횟수 = " << count << endl;
		cout << " 소요시간 : " << (float)(clock() - start) / CLOCKS_PER_SEC << "초" << endl;
		cout << " 다시 하시겠습니까?(y/n) : ";
		cin >> yn;
		cout << "-------------------------------" << endl;
		cout << endl;
	}									//~ 1번
	cout << "---종료---" << endl << endl;
}