#define _CRT_SECURE_NO_WARNINGS 1
#define MAX 1025

#include <stdio.h>
#include <stdlib.h>

int board[MAX][MAX];
int tile = 1;

void ChessBoard(int tr, int tc,int dr, int dc, int size)
{
	if (size == 1)return;
	int t = tile++;
	int s = size / 2;;

	//���Ͻ�����
	if (dr < tr + s && dc < tc + s)
		ChessBoard(tr, tc, dr, dc, s);
	else
	{
		board[tr + s - 1][tc + s - 1] = t;
		ChessBoard(tr, tc, tr + s - 1, tc + s - 1, s);

	}

	//���Ͻ�
	if (dr < tr + s && dc >= tc + s)
		ChessBoard(tr, tc + s, dr, dc, s);
	else
	{
		board[tr + s - 1][tc + s] = t;
		ChessBoard(tr, tc+s, tr + s - 1,tc + s, s);
	}

	//���½�
	if (dr >= tr + s && dc >= tc + s)
		ChessBoard(tr+s, tc, dr, dc, s);
	else
	{
		board[tr +s][tc + s-1] = t;
		ChessBoard(tr+s, tc, tr + s,tc + s-1, s);
	}

	//���½�
	if (dr >= tr + s && dc >= tc + s)
		ChessBoard(tr + s, tc+s, dr, dc, s);
	else
	{
		board[tr + s][tc + s] = t;
		ChessBoard(tr + s, tc+s, tr + s, tc + s, s);
	}

}

int main()
{
	int k = 3;
	int x = 1;
	int y = 2;
	int size = 1 << k;

	ChessBoard(0, 0, x, y, size);

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
			printf("%4d", board[i][j]);
		printf("\n");
	}

	return 0;
}


//c++ʵ��
//#include <iostream>
//#include <stdio.h>
//
//using namespace std;
//
//int def[101][101] = { 0 };
//static int t = 0;
//
//void chess(int a, int b, int aa, int bb, int length) {//a,bΪ���������Ͻ����꣬aa,bbΪ��������꣬lengthΪ�����̳���
//    if (length == 1) {
//        return;
//    }
//    t++;
//    int tem = t;
//    int l = length / 2;
//
//    if (aa < a + l && bb < b + l) { //����������ϵ���������
//        chess(a, b, aa, bb, l);
//    }
//    else {
//        def[a + l - 1][b + l - 1] = tem;
//        //cout<<"����  "<<l<<"  "<<l<<"  "<<def[l][l]<<endl;
//        chess(a, b, a + l - 1, b + l - 1, l);
//    }
//
//    if (aa >= a + l && bb < b + l) {//���½ǵ�������
//        chess(a + l, b, aa, bb, l);
//    }
//    else {
//        def[a + l][b + l - 1] = tem;
//        //cout<<"����  "<<a+l<<" "<<b+l-1<<"  "<<def[a+l-1][b+l]<<endl;
//        chess(a + l, b, a + l, b + l - 1, l);
//    }
//
//    if (aa < a + l && bb >= b + l) {//���Ͻǵ�������
//        chess(a, b + l, aa, bb, l);
//    }
//    else {
//        def[a + l - 1][b + l] = tem;
//        //cout<<"����  "<<a+l-1<<"  "<<b+l<<"  "<<def[a+l][b+l-1]<<endl;
//        chess(a, b + l, a + l - 1, b + l, l);
//    }
//
//    if (aa >= a + l && bb >= b + l) {
//        chess(a + l, b + l, aa, bb, l);
//    }
//    else {
//        def[a + l][b + l] = tem;
//        //cout<<"����  "<<a+l<<"  "<<b+l<<"  "<<def[a+l][b+l]<<endl;
//        chess(a + l, b + l, a + l, b + l, l);
//    }
//}
//
//int main() {
//    int n, a, b, aa, bb, length, m;
//    //a,b�����������Ͻǵ��кź��к�
//    //aa,bb���������кź��к�
//    cout << "������1-100֮���������";
//    cin >> length;
//    cout << "������������к�aa:";
//    cin >> aa;
//    cout << "������������к�bb:";
//    cin >> bb;
//    a = b = 1;
//    m = length;
//
//    chess(a, b, aa, bb, length);
//
//    for (int i = 1; i <= m; i++) { //������
//        for (int j = 1; j <= m; j++) {
//            cout.width(3);
//            cout << def[i][j];
//            if (j == m) {
//                cout << endl;
//            }
//        }
//    }
//}

