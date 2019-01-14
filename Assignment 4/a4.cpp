#include <iostream>

using namespace std;

int main()
{
	int x = 2018;                                   // integer 변수 x 초기화
	int* pointer_to_x = &x;                         // x를 가리키는 pointer variable
	int& reference_of_x = x;                        // x의 reference

	cout << "value of variable x : " << x << endl;  // x의 값을 출력
	cout << "pointed value by pointer_to_x : " << *pointer_to_x << endl;
	// pointer_to_x의 주소를 출력
	cout << "value of reference_of_x : " << reference_of_x << endl << endl;
	// reference_of_x의 값을 출력

	cout << "size of variable x : " << sizeof(x) << endl;
	// x의 크기를 출력
	cout << "address of variable x : " << &x << endl << endl;
	// x의 주소를 출력

	cout << "size of pointer_to_x : " << sizeof(pointer_to_x) << endl;
	// pointer_to_x의 크기를 출력
	cout << "value of pointer_to_x : " << pointer_to_x << endl;
	// pointer_to_x의 값을 출력
	cout << "address of pointer_to_x : " << &pointer_to_x << endl << endl;
	// pointer_to_x의 주소를 출력

	cout << "size of reference_of_x : " << sizeof(reference_of_x) << endl;
	// reference_of_x의 크기를 출력
	cout << "address of reference_of_x : " << &reference_of_x << endl << endl;
	// reference_of_x의 주소를 출력
	cout << "----------------------------------------" << endl;
	double y = 3.141592;
	double* pointer_to_y = &y;                      // y를 가리키는 pointer variable
	double& reference_of_y = y;                     // y의 reference

	cout << "value of variable y : " << y << endl;  // y의 값을 출력
	cout << "pointed value by pointer_to_y : " << *pointer_to_y << endl;
	// pointer_to_y의 주소를 출력
	cout << "value of reference_of_y : " << reference_of_y << endl << endl;
	// reference_of_y의 값을 출력

	cout << "size of variable y : " << sizeof(y) << endl;
	// y의 크기를 출력
	cout << "address of variable y : " << &y << endl << endl;
	// y의 주소를 출력

	cout << "size of pointer_to_y : " << sizeof(pointer_to_y) << endl;
	// p_pointer_to_y의 크기를 출력
	cout << "value of pointer_to_y : " << pointer_to_y << endl;
	// pointer_to_y의 값을 출력
	cout << "address of pointer_to_y : " << &pointer_to_y << endl << endl;
	// pointer_to_y의 주소를 출력

	cout << "size of reference_of_y : " << sizeof(reference_of_y) << endl;
	// pointer_to_y의 크기를 출력
	cout << "address of reference_of_y : " << &reference_of_y << endl << endl;
	// reference_of_y의 주소를 출력
	cout << "----------------------------------------" << endl;
	int score[] = { 75,90,70,80,55 };
	int* pointer_to_score = score;                  // int* pointer_to_score = &score[0];와 동일한 코드
	int(&reference_of_score)[sizeof(score) / sizeof(int)] = score;
	// 개별 score 요소를 가리키는 reference

	for (int i = 0; i < sizeof(score) / sizeof(int); i++)
	{
		cout << "value of variable score[" << i << "] : " << score[i] << endl;
	}
	cout << endl;
	cout << "size of variable score : " << sizeof(score) << endl; // score의 크기를 출력
	cout << "size of variable score[0] : " << sizeof(score[0]) << endl << endl; // score의 크기를 출력

	cout << "value of variable score : " << score << endl << endl;
	// score의 값을 출력

	cout << "address of variable score : " << &score << endl << endl;

	for (int i = 0; i < sizeof(score) / sizeof(int); i++)
	{
		cout << "address of variable score[" << i << "] : " << &score[i] << endl;
	}
	cout << endl;

	cout << "value of pointer_to_score : " << pointer_to_score << endl;
	// pointer_to_score의 값을 출력
	cout << "pointed value by pointer_to_score : " << *pointer_to_score << endl << endl;
	// pointer_to_score가 가리키는 value
	//    cout << "value of reference_of_score : " <<  reference_of_score << endl << endl;
	//                                                    // reference_of_score의 값을 출력
	for (int i = 0; i < sizeof(score) / sizeof(int); i++)
	{
		cout << "value of pointer_to_score + " << i << " : " << *(pointer_to_score + i) << endl;
	}
	cout << endl;

	cout << "address of pointer_to_score : " << &(pointer_to_score) << endl << endl;

	for (int i = 0; i < sizeof(score) / sizeof(int); i++)
	{
		cout << "address of pointer_to_score + " << i << " : " << &(*(pointer_to_score + i)) << endl;
	}
	cout << endl;

	for (int i = 0; i < sizeof(score) / sizeof(int); i++)
	{
		cout << "address of pointer_to_score[" << i << "] : " << &pointer_to_score[i] << endl;
	}
	cout << endl << "size of pointer_to_score : " << sizeof(pointer_to_score) << endl << endl; // p_pointer_to_score의 크기를 출력
																							   // cout << & score;와 동일한 코드


	cout << "address of reference_of_score : " << &reference_of_score << endl; // reference_of_score의 주소를 출력
	cout << "size of reference_of_score : " << sizeof(reference_of_score) << endl << endl; // pointer_to_score의 크기를 출력

	for (int i = 0; i < sizeof(score) / sizeof(int); i++)
		cout << "value of reference_of_score[" << i << "] : " << reference_of_score[i] << endl;
	system("pause");
	return 0;
}
