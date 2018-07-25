// porker.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int hand[5] = {};
int suit[5] = {};
int num[5] = {};
int card[53] ={}; //0-12,13-25,26-38,39-51,52
int point = 0;
int ppoint = 0;//player-point
void changecard(int choose);
int flash();
int straight();
int pair();
int jpair();
int jflash();
int jstraight();
void vscpu();
void turn();
void showhand();
void sort();
void changing();
void judge();


/*

--���̋���--

10 ���C�����t���b�V��(A-K-Q-J-10)
9  �t�@�C�u�J�[�h
8  �X�g���[�g�t���b�V��(2-A �͌q����Ȃ�)
7  �t�H�[�J�[�h
6  �t���n�E�X
5  �t���b�V��
4  �X�g���[�g(2-A �͌q����Ȃ�)
3  �X���[�J�[�h
2  �c�[�y�A
1  �����y�A
0  �n�C�J�[�h
*�����A�X�[�g�ɂ�铯�����̒��ł̋���͂Ȃ�
*�W���[�J�[������ꍇ�A���C�����t���b�V���ɂȂ�Ȃ�
*2-A�ŃX�g���[�g���q����Ȃ��͎̂d�l�ł��B

*/


void changecard(int choose){//choose-1 �Ԗڂ̃J�[�h������
	int i=0;
	int rnd = 0;
	srand(time(NULL));
	while(i<1){
		rnd = rand() % 53;
		if(card[rnd] != 1){
			hand[choose] = rnd;
			card[rnd]=1;
			i++;
		}
	}
}

void sort(){//��D��ʂ��ԍ����Ƀ\�[�g
	int i=0;
	int temp;
	for(i=0; i<5; i++){//�o�u���\�[�g(����)
		int j=0;
		for(j=0; j<4; j++){
			if(hand[j]>hand[j+1]){
				temp = hand[j];
				hand[j] = hand[j+1];
				hand[j+1] = temp;
			}
		}
	}
	for(i=0; i<5; i++){//num(0-12)
		num[i] = hand[i] % 13;
	}
	for(i=0; i<5; i++){//suit(0-4)
		suit[i] = hand[i] / 13;
	}
}

int straight(){
	int i = 0;
	int dif=0;
	for(i=0; i<5; i++){//A��14�Ƃ��Ĉ���
		if(num[i]==0){
			num[i] = 13;
		}
	}
	for(i=0; i<5; i++){//��D�𐔎����Ƀ\�[�g
		int j=0;
		int temp=0;
		for(j=0; j<4; j++){
			if(num[j]>num[j+1]){
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
	}
	for(i=0; i<4; i++){//"���"��"��+1"�Ȃ�dif�������A����
		int temp=0;
		temp = num[i];
		temp++;
		if(temp != num[i+1]){
			dif++;
		}
	}
	if(dif==0){
		if (num[4] == 13) {
			printf("���C�����t���b�V��");
			return 10;
		}
		else {
			printf("�X�g���[�g\n");
			return 4;
		}
	}else{
		printf("�X�g���[�g�Ȃ�\n");
		return 0;
	}
}

int jstraight() {
	int i = 0;
	int dif = 0;
	int joker = 0;
	for (i = 0; i<4; i++) {
		if (num[i] == 0) {
			num[i] = 13;
		}
	}
	for (i = 0; i<4; i++) {//��D�𐔎����Ƀ\�[�g
		int j = 0;
		int temp = 0;
		for (j = 0; j<4; j++) {
			if (num[j]>num[j + 1]) {
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}
	for (i = 0; i<3; i++) {
		if (num[i]+2 == num[i + 1]) {//"���"="��+2"�Ȃ�joker��1��������B2�ȏ�ɂȂ�ƕ���
			joker++;
		}
		else if(num[i]+1 != num[i+1]){//"���"="��+1"�łȂ��Ȃ�dif�������A����
			dif++;
		}
	}
	if (dif == 0 && joker < 2) {
		printf("�X�g���[�g\n");
		return 4;
	}
	else {
		printf("�X�g���[�g�Ȃ�\n");
		return 0;
	}
}

int flash(){
	int i =0;
	int j =0;
	int dif=0;
	for(i=0; i<4; i++){//"���"��"��"�Ȃ�dif�������A����
		if(suit[i] != suit[i+1]){
			dif++;
		}
	}
	if(dif == 0){//����\��
		if(suit[1] == 0){
			printf("�X�y�[�h�̃t���b�V��\n");
			return 5;
		}else if(suit[1] == 1){
			printf("�n�[�g�̃t���b�V��\n");
			return 5;
		}else if(suit[1] == 2){
			printf("�N���[�o�[�̃t���b�V��\n");
			return 5;
		}else if(suit[1] == 3){
			printf("�_�C���̃t���b�V��\n");
			return 5;
		}
	}else{
		printf("�t���b�V���Ȃ�\n");
		return 0;
	}
}

int jflash() {//�߂�l�̎g�p��Ȃ�(����)
	int i = 0;
	int j = 0;
	int dif = 0;
	for (i = 0; i<3; i++) {//1-4���ڂ݂̂Ŕ���(�W���[�J�[�͊m���5����)
		if (suit[i] != suit[i + 1]) {
			dif++;
		}
	}
	if (dif == 0) {//����\��
		if (suit[1] == 0) {
			printf("�X�y�[�h�̃t���b�V��\n");
			return 5;
		}
		else if (suit[1] == 1) {
			printf("�n�[�g�̃t���b�V��\n");
			return 5;
		}
		else if (suit[1] == 2) {
			printf("�N���[�o�[�̃t���b�V��\n");
			return 5;
		}
		else if (suit[1] == 3) {
			printf("�_�C���̃t���b�V��\n");
			return 5;
		}
	}
	else {
		printf("�t���b�V���Ȃ�\n");
		return 0;
	}
}

void showhand(){
	int i = 0;
	for(i=0; i<5; i++){
		if(suit[i] == 0){
			printf("�X�y�[�h��%d\n", num[i] + 1);
		}else if(suit[i] == 1){
			printf("�n�[�g��%d\n", num[i] + 1);
		}else if(suit[i] == 2){
			printf("�N���[�o�[��%d\n", num[i] + 1);
		}else if(suit[i] == 3){
			printf("�_�C����%d\n", num[i] + 1);
		}
		else {
			printf("�W���[�J�[\n");
		}
	}
}

int pair(){
	int i=0;
	int j=0;
	int pair=0;
	for(i=0; i<5; i++){//�g�ݍ��킹�I�ȃy�A����
		for(j=0; j<5; j++){
			if(num[i]==num[j]){
				pair++;
			}
		}
	}
	if(pair==5){
		printf("�m�[�y�A\n");
		return 0;
	}else if(pair==7){
		printf("�����y�A\n");
		return 1;
	}else if(pair==9){
		printf("�c�[�y�A\n");
		return 2;
	}else if(pair==11){
		printf("�X���[�J�[�h\n");
		return 3;
	}else if(pair==13){
		printf("�t���n�E�X\n");
		return 6;
	}else if(pair==17){
		printf("�t�H�[�J�[�h\n");
		return 7;
	}
}

int jpair() {
	int i = 0;
	int j = 0;
	int pair = 0;
	for (i = 0; i<4; i++) {//�W���[�J�[�ȊO(1-4���ڂ݂̂Ŕ���)
		for (j = 0; j<4; j++) {
			if (num[i] == num[j]) {
				pair++;
			}
		}
	}
	if (pair == 4) {//�m�[�y�A->�����y�A
		printf("�����y�A\n");
		return 1;
	}
	else if (pair == 6) {//�����y�A->�X���[�J�[�h
		printf("�X���[�J�[�h\n");
		return 3;
	}
	else if (pair == 8) {//�c�[�y�A->�t���n�E�X
		printf("�t���n�E�X\n");
		return 6;
	}
	else if (pair == 10) {//�X���[�J�[�h->�t�H�[�J�[�h
		printf("�t�H�[�J�[�h\n");
		return 7;
	}
	else if (pair == 16) {//�t�H�[�J�[�h->�t�@�C�u�J�[�h
		printf("�t�@�C�u�J�[�h\n");
		return 9;
	}
}

void changing(){
	int i=0;
	char ans[64];
	for(i=0; i<5; i++){
		printf("%d���ڂ��������܂����H(y/n)",i+1);
		scanf("%s",ans);
		if(ans[0] == 'y'){
			changecard(i);
		}
	}
}
/*
"y"�ȊO�͂��ׂ�no�ł�
�ꕶ���ڂ̂ݔ��肷��̂�"yes"�ł�"y"�ł�ok�ł�
�ł�ans�̔z��[64]��������ƃI�[�o�[�t���[���܂��B�������āB
*/

void judge(){
	int fl;
	int st;
	int pa;
	if(hand[4] == 52){//�W���[�J�[�����݂���Ƃ��̔���
		fl = jflash();
		pa = jpair();
		st = jstraight();
		point = fl;
		if(pa > fl){
			point = pa;
		}else if (st > fl) {
			point = st;
		}
		//printf("%d\n", point);
	}else{//�W���[�J�[�����݂��Ȃ��Ƃ��̔���
		fl = flash();
		st = straight();
		pa = pair();
		point = fl;
		if (pa > fl) {
			point = pa;
		}
		else if (st > fl) {
			point = st;
		}
		//printf("%d\n", point);
	}
}

void vscpu() {//cpu�ɂ͏�����D�Ő���Ă��炢�܂�
	int i;
	for (i = 0; i<5; i++) {
		changecard(i);
	}
	printf("-----CPU�̖�-----\n");
	sort();
	showhand();
	printf("\n");
	judge();
	printf("-----------------\n");
	if (point > ppoint) {
		printf("�Q�[���I���A���Ȃ��̕����ł�\n");
	}
	else if(point < ppoint) {
		printf("�Q�[���I���A���Ȃ��̏����ł�\n");
	}
	else {
		printf("�Q�[���I���A���������ł�\n");
	}
}

void turn() {
	sort();
	printf("-----���Ȃ��̎�D-----\n");
	showhand();
	printf("\n");
	judge();
	printf("----------------------\n");
	printf("\n");
}

int main(){
	int i=0;
	printf("-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
	printf(" �|�[�J�[(�W���[�J�[����) \n");
	printf("+-+-+-+-+-+-+-+-+-+-+-+-+-\n\n");
	for(i=0; i<5; i++){//������D
		changecard(i);
	}
	turn();
	changing();
	printf("\n");
	turn();
	changing();
	printf("\n");
	turn();
	ppoint = point;
	printf("\n");
	vscpu();
	return 0;
}


