// [P1046 ����ժƻ��] https://www.luogu.org/problemnew/show/P1046
#include <iostream>
using namespace std;
int main()
{
    int a[12];     // 10 ��ƻ���ĸ߶�
    int height;    // ���յĸ߶�
    int sum;       // ������ժ��ƻ��������
    for (int i = 0; i < 10; i++) // ѭ�� 10 ��
    {
        cin >> a[i]; // ����ʮ��ƻ���ĸ߶�
    }
    cin >> height;   // �������յĸ߶�

    height+=30;    // ������ô�����͵�����ʱ�����˰�ʰɡ�

    for (int i = 0; i < 10; i++)
    {
        if (height >= a[i])   // ��������ܴﵽƻ���ĸ߶ȣ��Ǿ��ۼ���++
        {
            sum++;
        }
    }
    cout << sum << endl;   // ���������ժ��ƻ��������
    return 0;   // �ͳ���˵�ټ�
}