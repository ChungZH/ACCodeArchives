// [P1051 ˭������ཱѧ��] https://www.luogu.org/problemnew/show/P1051
#include <iostream>
#include <algorithm>
using namespace std;
struct student {
    string name;  // ѧ������
    short pinjun; // ��ĩƽ���ɼ�����ʵ����pingjun������������
    short pingyi; // �༶����ɼ�
    char isGanbu; // �Ƿ���ѧ���ɲ�
    char westStu; // �Ƿ�������ѧ��
    short lunwen; // ����������

    int i;        // �� i ��ѧ��
    int getMoney; // ��õĽ�ѧ��
}; // ��Ҫ���� struct ��βҪ�зֺ�Ŷ~
int main()
{
    int n;      // ѧ������
    int getMoneySum=0; // ѧ���ǻ�õĽ�ѧ������
    cin >> n;
    student a[n];
    for (int i = 0; i < n; i++) // �ֱ�����ÿ��ѧ������Ϣ
    {
        cin >> a[i].name >> a[i].pinjun >> 
               a[i].pingyi >> a[i].isGanbu >> 
               a[i].westStu >> a[i].lunwen;
        a[i].i = i;
        a[i].getMoney = 0;  // Ϊ�˰�ȫ��������ǳ�ʼ�������
        if (a[i].pinjun > 80 && a[i].lunwen >= 1) // Ժʿ��ѧ��
        {
            a[i].getMoney+=8000; 
        }
        if (a[i].pinjun > 85 && a[i].pingyi > 80) // ���Ľ�ѧ��
        {
            a[i].getMoney+=4000;
        }
        if (a[i].pinjun > 90) // �ɼ����㽱
        {
            a[i].getMoney+=2000;
        }
        if (a[i].pinjun > 85 && a[i].westStu == 'Y') // ������ѧ��
        {
            a[i].getMoney+=1000;
        }
        if (a[i].pingyi > 80 && a[i].isGanbu == 'Y') // �༶���׽�
        {
            a[i].getMoney+=850;
        }
        getMoneySum+=a[i].getMoney;

    }

    int maxx = 0; 
    for (int i = 1; i < n; i++) // ��������ཱѧ���ѧ��
    {
        if (a[i].getMoney > a[maxx].getMoney)maxx = i;
    }

    cout << a[maxx].name << endl << a[maxx].getMoney << endl << getMoneySum << endl;

    return 0;   // �ͳ���˵�ټ�
}