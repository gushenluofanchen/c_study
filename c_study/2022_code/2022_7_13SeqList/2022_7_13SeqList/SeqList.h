#pragma once

#include<stdio.h>
#include<stdlib.h>

//#define N 100
//typedef int SLDataType;
//
//
////��̬˳���
//typedef struct SeqList {
//
//	SLDataType a[N];
//	int size;//��ʾ�������ж�������
//
//}SL;
////��̬�ص�:������˾Ͳ��ò���
////ȱ��:�����ٿռ������,����ȷ��
////N��С�˲�����,�������˷�
//
//
////�ӿں���------��������Ǹ���c++STL���ݵ�,�������ѧϰSTL
//void SeqListInit(SL* ps, SLDataType x);//��ʼ��
//void SeqListPushBack(SL* ps, SLDataType x);//β��
//void SeqListPopBack(SL* ps);//βɾ
//void SeqListPushFront(SL* ps, SLDataType x);//ͷ��
//void SeqListPopFront(SL* ps);//ͷɾ





//--------------------------------------------------------------------






typedef int SLDataType;


//��̬˳���
typedef struct SeqList {

	SLDataType* a;
	int size;//��ʾ�������ж�������
	int capacity;//��ʾʵ���ܴ����ݵĿռ�����
}SL;

//�ӿں���------��������Ǹ���c++STL���ݵ�,�������ѧϰSTL
void SeqListInit(SL* ps, SLDataType x);//��ʼ��
void SeqListPushBack(SL* ps, SLDataType x);//β��
void SeqListPopBack(SL* ps);//βɾ
void SeqListPushFront(SL* ps, SLDataType x);//ͷ��
void SeqListPopFront(SL* ps);//ͷɾ
