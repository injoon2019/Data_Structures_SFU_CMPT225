#include <iostream>

using namespace std;

int main()
{
	int x = 2018;                                   // integer ���� x �ʱ�ȭ
	int* pointer_to_x = &x;                         // x�� ����Ű�� pointer variable
	int& reference_of_x = x;                        // x�� reference

	cout << "value of variable x : " << x << endl;  // x�� ���� ���
	cout << "pointed value by pointer_to_x : " << *pointer_to_x << endl;
	// pointer_to_x�� �ּҸ� ���
	cout << "value of reference_of_x : " << reference_of_x << endl << endl;
	// reference_of_x�� ���� ���

	cout << "size of variable x : " << sizeof(x) << endl;
	// x�� ũ�⸦ ���
	cout << "address of variable x : " << &x << endl << endl;
	// x�� �ּҸ� ���

	cout << "size of pointer_to_x : " << sizeof(pointer_to_x) << endl;
	// pointer_to_x�� ũ�⸦ ���
	cout << "value of pointer_to_x : " << pointer_to_x << endl;
	// pointer_to_x�� ���� ���
	cout << "address of pointer_to_x : " << &pointer_to_x << endl << endl;
	// pointer_to_x�� �ּҸ� ���

	cout << "size of reference_of_x : " << sizeof(reference_of_x) << endl;
	// reference_of_x�� ũ�⸦ ���
	cout << "address of reference_of_x : " << &reference_of_x << endl << endl;
	// reference_of_x�� �ּҸ� ���
	cout << "----------------------------------------" << endl;
	double y = 3.141592;
	double* pointer_to_y = &y;                      // y�� ����Ű�� pointer variable
	double& reference_of_y = y;                     // y�� reference

	cout << "value of variable y : " << y << endl;  // y�� ���� ���
	cout << "pointed value by pointer_to_y : " << *pointer_to_y << endl;
	// pointer_to_y�� �ּҸ� ���
	cout << "value of reference_of_y : " << reference_of_y << endl << endl;
	// reference_of_y�� ���� ���

	cout << "size of variable y : " << sizeof(y) << endl;
	// y�� ũ�⸦ ���
	cout << "address of variable y : " << &y << endl << endl;
	// y�� �ּҸ� ���

	cout << "size of pointer_to_y : " << sizeof(pointer_to_y) << endl;
	// p_pointer_to_y�� ũ�⸦ ���
	cout << "value of pointer_to_y : " << pointer_to_y << endl;
	// pointer_to_y�� ���� ���
	cout << "address of pointer_to_y : " << &pointer_to_y << endl << endl;
	// pointer_to_y�� �ּҸ� ���

	cout << "size of reference_of_y : " << sizeof(reference_of_y) << endl;
	// pointer_to_y�� ũ�⸦ ���
	cout << "address of reference_of_y : " << &reference_of_y << endl << endl;
	// reference_of_y�� �ּҸ� ���
	cout << "----------------------------------------" << endl;
	int score[] = { 75,90,70,80,55 };
	int* pointer_to_score = score;                  // int* pointer_to_score = &score[0];�� ������ �ڵ�
	int(&reference_of_score)[sizeof(score) / sizeof(int)] = score;
	// ���� score ��Ҹ� ����Ű�� reference

	for (int i = 0; i < sizeof(score) / sizeof(int); i++)
	{
		cout << "value of variable score[" << i << "] : " << score[i] << endl;
	}
	cout << endl;
	cout << "size of variable score : " << sizeof(score) << endl; // score�� ũ�⸦ ���
	cout << "size of variable score[0] : " << sizeof(score[0]) << endl << endl; // score�� ũ�⸦ ���

	cout << "value of variable score : " << score << endl << endl;
	// score�� ���� ���

	cout << "address of variable score : " << &score << endl << endl;

	for (int i = 0; i < sizeof(score) / sizeof(int); i++)
	{
		cout << "address of variable score[" << i << "] : " << &score[i] << endl;
	}
	cout << endl;

	cout << "value of pointer_to_score : " << pointer_to_score << endl;
	// pointer_to_score�� ���� ���
	cout << "pointed value by pointer_to_score : " << *pointer_to_score << endl << endl;
	// pointer_to_score�� ����Ű�� value
	//    cout << "value of reference_of_score : " <<  reference_of_score << endl << endl;
	//                                                    // reference_of_score�� ���� ���
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
	cout << endl << "size of pointer_to_score : " << sizeof(pointer_to_score) << endl << endl; // p_pointer_to_score�� ũ�⸦ ���
																							   // cout << & score;�� ������ �ڵ�


	cout << "address of reference_of_score : " << &reference_of_score << endl; // reference_of_score�� �ּҸ� ���
	cout << "size of reference_of_score : " << sizeof(reference_of_score) << endl << endl; // pointer_to_score�� ũ�⸦ ���

	for (int i = 0; i < sizeof(score) / sizeof(int); i++)
		cout << "value of reference_of_score[" << i << "] : " << reference_of_score[i] << endl;
	system("pause");
	return 0;
}
