#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand(time(NULL));
	int card[4][13] = { 0 };
	int hand[2][13];
	int i, j, n, m, a = 0, b = 6, k, hiku = 0;
	int c = 0, d;
	int kazu = 0;
	int iti = 1, ni = 1, sann = 1, yonn = 1;
	int np = 4, tp = 1;
	int itii = 0, nii = 0, sanni = 0, yonni = 0;

	printf("�ꔲ�����n�߂悤\n");
	printf("YES 1 : NO 2\n");
	scanf("%d", &n);
	if (n > 1) {
		printf("�Q�[�����I�����܂��I�I\n");
		return 0;
	}
	else if (n == 0) {
		printf("�Q�[�����I�����܂��I�I\n");
		return 0;
	}

	printf("���Ȃ��̓v���C���[1�ł�\n");
	printf("OK 1 : NO 2\n");
	scanf("%d", &m);
	if (m > 1) {
		printf("�Q�[�����I�����܂��I�I\n");
		return 0;
	}
	else if (m == 0) {
		printf("�Q�[�����I�����܂��I�I\n");
		return 0;
	}

	while (a < 52) {
		//printf("%d\n",a);
		i = rand() % 4;
		j = rand() % 13;
		if (card[i][j] == 0) {
			card[i][j] = b;
			b++;
			a++;
			if (b > 4) {
				b = 1;
			}
		}
	}


	/*		for(i=0; i<4; i++){
	for(j=0; j<13; j++){
	if(card[i][j] == 1){
	printf("%d,%d\n",i,j);
	}
	}
	}
	printf("p1\n");

	for(i=0; i<4; i++){
	for(j=0; j<13; j++){
	if(card[i][j] == 2){
	printf("%d,%d\n",i,j);
	}
	}
	}
	printf("p2\n");

	for(i=0; i<4; i++){
	for(j=0; j<13; j++){
	if(card[i][j] == 3){
	printf("%d,%d\n",i,j);
	}
	}
	}
	printf("p3\n");

	for(i=0; i<4; i++){
	for(j=0; j<13; j++){
	if(card[i][j] == 4){
	printf("%d,%d\n",i,j);
	}
	}
	}
	printf("p4\n");*/


	c = 0;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 13; j++) {
			if (card[i][j] == 1) {
				hand[0][c] = i;
				hand[1][c] = j;
				c++;
			}
		}
	}

	for (c = 0; c < 13; c++) {
		for (d = c + 1; d < 13; d++) {
			if (hand[1][c] == hand[1][d] && (hand[1][c] != 1000 || hand[1][d] != 1000)) {
				card[hand[0][c]][hand[1][d]] = 5;
				card[hand[0][d]][hand[1][d]] = 5;
				hand[1][c] = 1000;
				hand[1][d] = 1000;
			}
		}
	}

	c = 0;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 13; j++) {
			if (card[i][j] == 2) {
				hand[0][c] = i;
				hand[1][c] = j;
				c++;
			}
		}
	}

	for (c = 0; c < 13; c++) {
		for (d = c + 1; d < 13; d++) {
			if (hand[1][c] == hand[1][d] && (hand[1][c] != 1000 || hand[1][d] != 1000)) {
				card[hand[0][c]][hand[1][d]] = 5;
				card[hand[0][d]][hand[1][d]] = 5;
				hand[1][c] = 1000;
				hand[1][d] = 1000;
			}
		}
	}

	c = 0;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 13; j++) {
			if (card[i][j] == 3) {
				hand[0][c] = i;
				hand[1][c] = j;
				c++;
			}
		}
	}

	for (c = 0; c < 13; c++) {
		for (d = c + 1; d < 13; d++) {
			if (hand[1][c] == hand[1][d] && (hand[1][c] != 1000 || hand[1][d] != 1000)) {
				card[hand[0][c]][hand[1][d]] = 5;
				card[hand[0][d]][hand[1][d]] = 5;
				hand[1][c] = 1000;
				hand[1][d] = 1000;
			}
		}
	}

	c = 0;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 13; j++) {
			if (card[i][j] == 4) {
				hand[0][c] = i;
				hand[1][c] = j;
				c++;
			}
		}
	}

	for (c = 0; c < 13; c++) {
		for (d = c + 1; d < 13; d++) {
			if (hand[1][c] == hand[1][d] && (hand[1][c] != 1000 || hand[1][d] != 1000)) {
				card[hand[0][c]][hand[1][d]] = 5;
				card[hand[0][d]][hand[1][d]] = 5;
				hand[1][c] = 1000;
				hand[1][d] = 1000;
			}
		}
	}

	iti = 0;
	ni = 0;
	sann = 0;
	yonn = 0;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 13; j++) {
			if (card[i][j] == 1) {
				iti++;
			}
			else if (card[i][j] == 2) {
				ni++;
			}
			else if (card[i][j] == 3) {
				sann++;
			}
			else if (card[i][j] == 4) {
				yonn++;
			}
		}
	}

	if (iti == 0 || ni == 0 || sann == 0 || yonn == 0) {
		if (iti == 0) {
			printf("----------------------------------------\n");
			printf("�v���C���|1�̎�D��0�ɂȂ�܂���\n");
			itii = 1;
			system("pause");
		}
		else if (ni == 0) {
			printf("----------------------------------------\n");
			printf("�v���C���|2�̎�D��0�ɂȂ�܂���\n");
			itii = 2;
			system("pause");
		}
		else if (sann == 0) {
			printf("----------------------------------------\n");
			printf("�v���C���|3�̎�D��0�ɂȂ�܂���\n");
			itii = 3;
			system("pause");
		}
		else if (yonn == 0) {
			printf("----------------------------------------\n");
			printf("�v���C���|4�̎�D��0�ɂȂ�܂���\n");
			itii = 4;
			system("pause");
		}
	}

	if (iti > 0 && ni > 0 && sann > 0 && yonn > 0) {
		printf("----------------------------------------\n");
		printf("���Ȃ��̎�D��\n");
		for (i = 0; i < 4; i++) {
			for (j = 0; j < 13; j++) {
				if (card[i][j] == 1) {
					switch (i) {
					case 0: printf("�n�|�g��"); break;
					case 1: printf("�_�C����"); break;
					case 2: printf("�N���|�o�|��"); break;
					case 3: printf("�X�y�|�h��"); break;
					}
					switch (j) {
					case 0: printf("A\n"); break;
					case 10: printf("J\n"); break;
					case 11: printf("Q\n"); break;
					case 12: printf("K\n"); break;
					default: printf("%d\n", j + 1); break;
					}
				}
			}
		}
		system("pause");
	}


	while (iti > 0 && ni > 0 && sann > 0 && yonn > 0) {

		hiku = 0;
		while (hiku == 0) {
			i = rand() % 4;
			j = rand() % 13;
			if (card[i][j] == np) {
				card[i][j] = tp;
				hiku++;
			}
		}


		for (j = 0; j < 13; j++) {
			for (i = 0; i < 4; i++) {
				if (card[i][j] == tp) {
					for (k = i + 1; k < 4; k++) {
						if (card[i][j] == card[k][j]) {
							card[i][j] = 5;
							card[k][j] = 5;
						}
					}
				}
			}
		}

		iti = 0;
		ni = 0;
		sann = 0;
		yonn = 0;

		for (i = 0; i < 4; i++) {
			for (j = 0; j < 13; j++) {
				if (card[i][j] == 1) {
					iti++;
				}
				else if (card[i][j] == 2) {
					ni++;
				}
				else if (card[i][j] == 3) {
					sann++;
				}
				else if (card[i][j] == 4) {
					yonn++;
				}
			}
		}

		if (iti > 0 && ni > 0 && sann > 0 && yonn > 0) {
			if (tp == 1 || tp == 2) {
				printf("----------------------------------------\n");
				if (tp == 1) {
					printf("�v���C���[4����1�������܂���\n");
					printf("���Ȃ��̎�D��\n");
				}
				else if (tp == 2) {
					printf("�v���C���[2��1��������܂���\n");
					printf("���Ȃ��̎�D��\n");
				}
				for (i = 0; i < 4; i++) {
					for (j = 0; j < 13; j++) {
						if (card[i][j] == 1) {
							switch (i) {
							case 0: printf("�n�|�g��"); break;
							case 1: printf("�_�C����"); break;
							case 2: printf("�N���|�o�|��"); break;
							case 3: printf("�X�y�|�h��"); break;
							}
							switch (j) {
							case 0: printf("A\n"); break;
							case 10: printf("J\n"); break;
							case 11: printf("Q\n"); break;
							case 12: printf("K\n"); break;
							default: printf("%d\n", j + 1); break;
							}
						}
					}
				}
				system("pause");
			}
		}

		np = tp;
		tp++;
		if (tp == 5) {
			tp = 1;
		}

		if (iti == 0 || ni == 0 || sann == 0 || yonn == 0) {
			if (iti == 0) {
				printf("----------------------------------------\n");
				printf("�v���C���|1�̎�D��0�ɂȂ�܂���\n");
				itii = 1;
				system("pause");
			}
			else if (ni == 0) {
				printf("----------------------------------------\n");
				printf("�v���C���|2�̎�D��0�ɂȂ�܂���\n");
				itii = 2;
				system("pause");
			}
			else if (sann == 0) {
				printf("----------------------------------------\n");
				printf("�v���C���|3�̎�D��0�ɂȂ�܂���\n");
				itii = 3;
				system("pause");
			}
			else if (yonn == 0) {
				printf("----------------------------------------\n");
				printf("�v���C���|4�̎�D��0�ɂȂ�܂���\n");
				itii = 4;
				system("pause");
			}
		}
	}

	while (iti == 0 && ni > 0 && sann > 0 && yonn > 0) {
		if (tp == 1) {
			tp = 2;
			np = 4;
		}
		else if (tp == 2) {
			tp = 3;
			np = 2;
		}

		hiku = 0;
		while (hiku == 0) {
			i = rand() % 4;
			j = rand() % 13;
			if (card[i][j] == np) {
				card[i][j] = tp;
				hiku++;
			}
		}


		for (j = 0; j < 13; j++) {
			for (i = 0; i < 4; i++) {
				if (card[i][j] == tp) {
					for (k = i + 1; k < 4; k++) {
						if (card[i][j] == card[k][j]) {
							card[i][j] = 5;
							card[k][j] = 5;
						}
					}
				}
			}
		}

		iti = 0;
		ni = 0;
		sann = 0;
		yonn = 0;

		for (i = 0; i < 4; i++) {
			for (j = 0; j < 13; j++) {
				if (card[i][j] == 1) {
					iti++;
				}
				else if (card[i][j] == 2) {
					ni++;
				}
				else if (card[i][j] == 3) {
					sann++;
				}
				else if (card[i][j] == 4) {
					yonn++;
				}
			}
		}
		np = tp;
		tp++;
		if (tp == 5) {
			tp = 1;
		}

		if (ni == 0 || sann == 0 || yonn == 0) {
			if (ni == 0) {
				printf("----------------------------------------\n");
				printf("�v���C���|2�̎�D��0�ɂȂ�܂���\n");
				nii = 2;
				system("pause");
			}
			else if (sann == 0) {
				printf("----------------------------------------\n");
				printf("�v���C���|3�̎�D��0�ɂȂ�܂���\n");
				nii = 3;
				system("pause");
			}
			else if (yonn == 0) {
				printf("----------------------------------------\n");
				printf("�v���C���|4�̎�D��0�ɂȂ�܂���\n");
				nii = 4;
				system("pause");
			}
		}
	}

	while (iti > 0 && ni == 0 && sann > 0 && yonn > 0) {
		if (tp == 2) {
			tp = 3;
			np = 1;
		}
		else if (tp == 3) {
			tp = 4;
			np = 3;
		}

		hiku = 0;
		while (hiku == 0) {
			i = rand() % 4;
			j = rand() % 13;
			if (card[i][j] == np) {
				card[i][j] = tp;
				hiku++;
			}
		}


		for (j = 0; j < 13; j++) {
			for (i = 0; i < 4; i++) {
				if (card[i][j] == tp) {
					for (k = i + 1; k < 4; k++) {
						if (card[i][j] == card[k][j]) {
							card[i][j] = 5;
							card[k][j] = 5;
						}
					}
				}
			}
		}

		iti = 0;
		ni = 0;
		sann = 0;
		yonn = 0;

		for (i = 0; i < 4; i++) {
			for (j = 0; j < 13; j++) {
				if (card[i][j] == 1) {
					iti++;
				}
				else if (card[i][j] == 2) {
					ni++;
				}
				else if (card[i][j] == 3) {
					sann++;
				}
				else if (card[i][j] == 4) {
					yonn++;
				}
			}
		}

		if (iti > 0 && sann > 0 && yonn > 0) {
			if (tp == 1 || tp == 3) {
				printf("----------------------------------------\n");
				if (tp == 1) {
					printf("�v���C���[4����1�������܂���\n");
					printf("���Ȃ��̎�D��\n");
				}
				else if (tp == 3) {
					printf("�v���C���[3��1��������܂���\n");
					printf("���Ȃ��̎�D��\n");
				}
				for (i = 0; i < 4; i++) {
					for (j = 0; j < 13; j++) {
						if (card[i][j] == 1) {
							switch (i) {
							case 0: printf("�n�|�g��"); break;
							case 1: printf("�_�C����"); break;
							case 2: printf("�N���|�o�|��"); break;
							case 3: printf("�X�y�|�h��"); break;
							}
							switch (j) {
							case 0: printf("A\n"); break;
							case 10: printf("J\n"); break;
							case 11: printf("Q\n"); break;
							case 12: printf("K\n"); break;
							default: printf("%d\n", j + 1); break;
							}
						}
					}
				}
				system("pause");
			}
		}

		np = tp;
		tp++;
		if (tp == 5) {
			tp = 1;
		}
		if (iti == 0 || sann == 0 || yonn == 0) {
			if (iti == 0) {
				printf("----------------------------------------\n");
				printf("�v���C���|1�̎�D��0�ɂȂ�܂���\n");
				nii = 1;
				system("pause");
			}
			else if (sann == 0) {
				printf("----------------------------------------\n");
				printf("�v���C���|3�̎�D��0�ɂȂ�܂���\n");
				nii = 3;
				system("pause");
			}
			else if (yonn == 0) {
				printf("----------------------------------------\n");
				printf("�v���C���|4�̎�D��0�ɂȂ�܂���\n");
				nii = 4;
				system("pause");
			}
		}
	}

	while (iti > 0 && ni > 0 && sann == 0 && yonn > 0) {
		if (tp == 3) {
			tp = 4;
			np = 2;
		}
		else if (tp == 4) {
			tp = 1;
			np = 4;
		}

		hiku = 0;
		while (hiku == 0) {
			i = rand() % 4;
			j = rand() % 13;
			if (card[i][j] == np) {
				card[i][j] = tp;
				hiku++;
			}
		}


		for (j = 0; j < 13; j++) {
			for (i = 0; i < 4; i++) {
				if (card[i][j] == tp) {
					for (k = i + 1; k < 4; k++) {
						if (card[i][j] == card[k][j]) {
							card[i][j] = 5;
							card[k][j] = 5;
						}
					}
				}
			}
		}

		iti = 0;
		ni = 0;
		sann = 0;
		yonn = 0;

		for (i = 0; i < 4; i++) {
			for (j = 0; j < 13; j++) {
				if (card[i][j] == 1) {
					iti++;
				}
				else if (card[i][j] == 2) {
					ni++;
				}
				else if (card[i][j] == 3) {
					sann++;
				}
				else if (card[i][j] == 4) {
					yonn++;
				}
			}
		}

		if (iti > 0 && ni > 0 && yonn > 0) {
			if (tp == 1 || tp == 2) {
				printf("----------------------------------------\n");
				if (tp == 1) {
					printf("�v���C���[4����1�������܂���\n");
					printf("���Ȃ��̎�D��\n");
				}
				else if (tp == 2) {
					printf("�v���C���[2��1��������܂���\n");
					printf("���Ȃ��̎�D��\n");
				}
				for (i = 0; i < 4; i++) {
					for (j = 0; j < 13; j++) {
						if (card[i][j] == 1) {
							switch (i) {
							case 0: printf("�n�|�g��"); break;
							case 1: printf("�_�C����"); break;
							case 2: printf("�N���|�o�|��"); break;
							case 3: printf("�X�y�|�h��"); break;
							}
							switch (j) {
							case 0: printf("A\n"); break;
							case 10: printf("J\n"); break;
							case 11: printf("Q\n"); break;
							case 12: printf("K\n"); break;
							default: printf("%d\n", j + 1); break;
							}
						}
					}
				}
				system("pause");
			}
		}

		np = tp;
		tp++;
		if (tp == 5) {
			tp = 1;
		}

		if (iti == 0 || ni == 0 || yonn == 0) {
			if (iti == 0) {
				printf("----------------------------------------\n");
				printf("�v���C���|1�̎�D��0�ɂȂ�܂���\n");
				nii = 1;
				system("pause");
			}
			else if (ni == 0) {
				printf("----------------------------------------\n");
				printf("�v���C���|2�̎�D��0�ɂȂ�܂���\n");
				nii = 2;
				system("pause");
			}
			else if (yonn == 0) {
				printf("----------------------------------------\n");
				printf("�v���C���|4�̎�D��0�ɂȂ�܂���\n");
				nii = 4;
				system("pause");
			}
		}
	}

	while (iti > 0 && ni > 0 && sann > 0 && yonn == 0) {
		if (tp == 4) {
			tp = 1;
			np = 3;
		}
		else if (tp == 1) {
			tp = 2;
			np = 1;
		}

		hiku = 0;
		while (hiku == 0) {
			i = rand() % 4;
			j = rand() % 13;
			if (card[i][j] == np) {
				card[i][j] = tp;
				hiku++;
			}
		}


		for (j = 0; j < 13; j++) {
			for (i = 0; i < 4; i++) {
				if (card[i][j] == tp) {
					for (k = i + 1; k < 4; k++) {
						if (card[i][j] == card[k][j]) {
							card[i][j] = 5;
							card[k][j] = 5;
						}
					}
				}
			}
		}

		iti = 0;
		ni = 0;
		sann = 0;
		yonn = 0;

		for (i = 0; i < 4; i++) {
			for (j = 0; j < 13; j++) {
				if (card[i][j] == 1) {
					iti++;
				}
				else if (card[i][j] == 2) {
					ni++;
				}
				else if (card[i][j] == 3) {
					sann++;
				}
				else if (card[i][j] == 4) {
					yonn++;
				}
			}
		}

		if (iti > 0 && ni > 0 && sann > 0) {
			if (tp == 1 || tp == 2) {
				printf("----------------------------------------\n");
				if (tp == 1) {
					printf("�v���C���[3����1�������܂���\n");
					printf("���Ȃ��̎�D��\n");
				}
				else if (tp == 2) {
					printf("�v���C���[2��1��������܂���\n");
					printf("���Ȃ��̎�D��\n");
				}
				for (i = 0; i < 4; i++) {
					for (j = 0; j < 13; j++) {
						if (card[i][j] == 1) {
							switch (i) {
							case 0: printf("�n�|�g��"); break;
							case 1: printf("�_�C����"); break;
							case 2: printf("�N���|�o�|��"); break;
							case 3: printf("�X�y�|�h��"); break;
							}
							switch (j) {
							case 0: printf("A\n"); break;
							case 10: printf("J\n"); break;
							case 11: printf("Q\n"); break;
							case 12: printf("K\n"); break;
							default: printf("%d\n", j + 1); break;
							}
						}
					}
				}
				system("pause");
			}
		}

		np = tp;
		tp++;
		if (tp == 5) {
			tp = 1;
		}

		if (iti == 0 || ni == 0 || sann == 0) {
			if (iti == 0) {
				printf("----------------------------------------\n");
				printf("�v���C���|1�̎�D��0�ɂȂ�܂���\n");
				nii = 1;
				system("pause");
			}
			else if (ni == 0) {
				printf("----------------------------------------\n");
				printf("�v���C���|2�̎�D��0�ɂȂ�܂���\n");
				nii = 2;
				system("pause");
			}
			else if (sann == 0) {
				printf("----------------------------------------\n");
				printf("�v���C���|3�̎�D��0�ɂȂ�܂���\n");
				nii = 3;
				system("pause");
			}
		}
	}

	while (iti == 0 && ni == 0 && sann > 0 && yonn > 0) {
		if (tp == 1 || tp == 2) {
			tp = 3;
			np = 4;
		}
		else if (tp == 3) {
			tp = 4;
			np = 3;
		}

		hiku = 0;
		while (hiku == 0) {
			i = rand() % 4;
			j = rand() % 13;
			if (card[i][j] == np) {
				card[i][j] = tp;
				hiku++;
			}
		}


		for (j = 0; j < 13; j++) {
			for (i = 0; i < 4; i++) {
				if (card[i][j] == tp) {
					for (k = i + 1; k < 4; k++) {
						if (card[i][j] == card[k][j]) {
							card[i][j] = 5;
							card[k][j] = 5;
						}
					}
				}
			}
		}

		iti = 0;
		ni = 0;
		sann = 0;
		yonn = 0;

		for (i = 0; i < 4; i++) {
			for (j = 0; j < 13; j++) {
				if (card[i][j] == 1) {
					iti++;
				}
				else if (card[i][j] == 2) {
					ni++;
				}
				else if (card[i][j] == 3) {
					sann++;
				}
				else if (card[i][j] == 4) {
					yonn++;
				}
			}
		}
		np = tp;
		tp++;
		if (tp == 5) {
			tp = 1;
		}

		if (sann == 0 || yonn == 0) {
			if (sann == 0) {
				printf("----------------------------------------\n");
				printf("�v���C���|3�̎�D��0�ɂȂ�܂���\n");
				sanni = 3;
				yonni = 4;
				system("pause");
			}
			else if (yonn == 0) {
				printf("----------------------------------------\n");
				printf("�v���C���|4�̎�D��0�ɂȂ�܂���\n");
				sanni = 4;
				yonni = 3;
				system("pause");
			}
		}
	}

	while (iti == 0 && ni > 0 && sann == 0 && yonn > 0) {
		if (tp == 2 || tp == 3) {
			tp = 4;
			np = 2;
		}
		else if (tp == 1 || tp == 4) {
			tp = 2;
			np = 4;
		}

		hiku = 0;
		while (hiku == 0) {
			i = rand() % 4;
			j = rand() % 13;
			if (card[i][j] == np) {
				card[i][j] = tp;
				hiku++;
			}
		}


		for (j = 0; j < 13; j++) {
			for (i = 0; i < 4; i++) {
				if (card[i][j] == tp) {
					for (k = i + 1; k < 4; k++) {
						if (card[i][j] == card[k][j]) {
							card[i][j] = 5;
							card[k][j] = 5;
						}
					}
				}
			}
		}

		iti = 0;
		ni = 0;
		sann = 0;
		yonn = 0;

		for (i = 0; i < 4; i++) {
			for (j = 0; j < 13; j++) {
				if (card[i][j] == 1) {
					iti++;
				}
				else if (card[i][j] == 2) {
					ni++;
				}
				else if (card[i][j] == 3) {
					sann++;
				}
				else if (card[i][j] == 4) {
					yonn++;
				}
			}
		}
		np = tp;
		tp++;
		if (tp == 5) {
			tp = 1;
		}

		if (ni == 0 || yonn == 0) {
			if (ni == 0) {
				printf("----------------------------------------\n");
				printf("�v���C���|2�̎�D��0�ɂȂ�܂���\n");
				sanni = 2;
				yonni = 4;
				system("pause");
			}
			else if (yonn == 0) {
				printf("----------------------------------------\n");
				printf("�v���C���|4�̎�D��0�ɂȂ�܂���\n");
				sanni = 4;
				yonni = 2;
				system("pause");
			}
		}
	}

	while (iti == 0 && ni > 0 && sann > 0 && yonn == 0) {
		if (tp == 1 || tp == 2) {
			tp = 3;
			np = 2;
		}
		else if (tp == 4 || tp == 3) {
			tp = 2;
			np = 3;
		}

		hiku = 0;
		while (hiku == 0) {
			i = rand() % 4;
			j = rand() % 13;
			if (card[i][j] == np) {
				card[i][j] = tp;
				hiku++;
			}
		}


		for (j = 0; j < 13; j++) {
			for (i = 0; i < 4; i++) {
				if (card[i][j] == tp) {
					for (k = i + 1; k < 4; k++) {
						if (card[i][j] == card[k][j]) {
							card[i][j] = 5;
							card[k][j] = 5;
						}
					}
				}
			}
		}

		iti = 0;
		ni = 0;
		sann = 0;
		yonn = 0;

		for (i = 0; i < 4; i++) {
			for (j = 0; j < 13; j++) {
				if (card[i][j] == 1) {
					iti++;
				}
				else if (card[i][j] == 2) {
					ni++;
				}
				else if (card[i][j] == 3) {
					sann++;
				}
				else if (card[i][j] == 4) {
					yonn++;
				}
			}
		}
		np = tp;
		tp++;
		if (tp == 5) {
			tp = 1;
		}

		if (ni == 0 || sann == 0) {
			if (ni == 0) {
				printf("----------------------------------------\n");
				printf("�v���C���|2�̎�D��0�ɂȂ�܂���\n");
				sanni = 2;
				yonni = 3;
				system("pause");
			}
			else if (sann == 0) {
				printf("----------------------------------------\n");
				printf("�v���C���|3�̎�D��0�ɂȂ�܂���\n");
				sanni = 3;
				yonni = 2;
				system("pause");
			}
		}
	}

	while (iti > 0 && ni == 0 && sann == 0 && yonn > 0) {
		if (tp == 2 || tp == 3) {
			tp = 4;
			np = 1;
		}
		else if (tp == 4) {
			tp = 1;
			np = 4;
		}

		hiku = 0;
		while (hiku == 0) {
			i = rand() % 4;
			j = rand() % 13;
			if (card[i][j] == np) {
				card[i][j] = tp;
				hiku++;
			}
		}


		for (j = 0; j < 13; j++) {
			for (i = 0; i < 4; i++) {
				if (card[i][j] == tp) {
					for (k = i + 1; k < 4; k++) {
						if (card[i][j] == card[k][j]) {
							card[i][j] = 5;
							card[k][j] = 5;
						}
					}
				}
			}
		}

		iti = 0;
		ni = 0;
		sann = 0;
		yonn = 0;

		for (i = 0; i < 4; i++) {
			for (j = 0; j < 13; j++) {
				if (card[i][j] == 1) {
					iti++;
				}
				else if (card[i][j] == 2) {
					ni++;
				}
				else if (card[i][j] == 3) {
					sann++;
				}
				else if (card[i][j] == 4) {
					yonn++;
				}
			}
		}

		if (iti > 0 && yonn > 0) {
			if (tp == 1 || tp == 4) {
				printf("----------------------------------------\n");
				if (tp == 1) {
					printf("�v���C���[4����1�������܂���\n");
					printf("���Ȃ��̎�D��\n");
				}
				else if (tp == 4) {
					printf("�v���C���[4��1��������܂���\n");
					printf("���Ȃ��̎�D��\n");
				}
				for (i = 0; i < 4; i++) {
					for (j = 0; j < 13; j++) {
						if (card[i][j] == 1) {
							switch (i) {
							case 0: printf("�n�|�g��"); break;
							case 1: printf("�_�C����"); break;
							case 2: printf("�N���|�o�|��"); break;
							case 3: printf("�X�y�|�h��"); break;
							}
							switch (j) {
							case 0: printf("A\n"); break;
							case 10: printf("J\n"); break;
							case 11: printf("Q\n"); break;
							case 12: printf("K\n"); break;
							default: printf("%d\n", j + 1); break;
							}
						}
					}
				}
				system("pause");
			}
		}

		np = tp;
		tp++;
		if (tp == 5) {
			tp = 1;
		}
		if (iti == 0 || yonn == 0) {
			if (iti == 0) {
				printf("----------------------------------------\n");
				printf("�v���C���|1�̎�D��0�ɂȂ�܂���\n");
				sanni = 1;
				yonni = 4;
				system("pause");
			}
			else if (yonn == 0) {
				printf("----------------------------------------\n");
				printf("�v���C���|4�̎�D��0�ɂȂ�܂���\n");
				sanni = 4;
				yonni = 1;
				system("pause");
			}
		}
	}

	while (iti > 0 && ni == 0 && sann > 0 && yonn == 0) {
		if (tp == 2 || tp == 1) {
			tp = 3;
			np = 1;
		}
		else if (tp == 3 || tp == 4) {
			tp = 1;
			np = 3;
		}

		hiku = 0;
		while (hiku == 0) {
			i = rand() % 4;
			j = rand() % 13;
			if (card[i][j] == np) {
				card[i][j] = tp;
				hiku++;
			}
		}


		for (j = 0; j < 13; j++) {
			for (i = 0; i < 4; i++) {
				if (card[i][j] == tp) {
					for (k = i + 1; k < 4; k++) {
						if (card[i][j] == card[k][j]) {
							card[i][j] = 5;
							card[k][j] = 5;
						}
					}
				}
			}
		}

		iti = 0;
		ni = 0;
		sann = 0;
		yonn = 0;

		for (i = 0; i < 4; i++) {
			for (j = 0; j < 13; j++) {
				if (card[i][j] == 1) {
					iti++;
				}
				else if (card[i][j] == 2) {
					ni++;
				}
				else if (card[i][j] == 3) {
					sann++;
				}
				else if (card[i][j] == 4) {
					yonn++;
				}
			}
		}

		if (iti > 0 && sann > 0) {
			if (tp == 1 || tp == 3) {
				printf("----------------------------------------\n");
				if (tp == 1) {
					printf("�v���C���[3����1�������܂���\n");
					printf("���Ȃ��̎�D��\n");
				}
				else if (tp == 3) {
					printf("�v���C���[3��1��������܂���\n");
					printf("���Ȃ��̎�D��\n");
				}
				for (i = 0; i < 4; i++) {
					for (j = 0; j < 13; j++) {
						if (card[i][j] == 1) {
							switch (i) {
							case 0: printf("�n�|�g��"); break;
							case 1: printf("�_�C����"); break;
							case 2: printf("�N���|�o�|��"); break;
							case 3: printf("�X�y�|�h��"); break;
							}
							switch (j) {
							case 0: printf("A\n"); break;
							case 10: printf("J\n"); break;
							case 11: printf("Q\n"); break;
							case 12: printf("K\n"); break;
							default: printf("%d\n", j + 1); break;
							}
						}
					}
				}
				system("pause");
			}
		}

		np = tp;
		tp++;
		if (tp == 5) {
			tp = 1;
		}
		if (iti == 0 || sann == 0) {
			if (iti == 0) {
				printf("----------------------------------------\n");
				printf("�v���C���|1�̎�D��0�ɂȂ�܂���\n");
				sanni = 1;
				yonni = 3;
				system("pause");
			}
			else if (sann == 0) {
				printf("----------------------------------------\n");
				printf("�v���C���|3�̎�D��0�ɂȂ�܂���\n");
				sanni = 3;
				yonni = 1;
				system("pause");
			}
		}
	}

	while (iti > 0 && ni > 0 && sann == 0 && yonn == 0) {
		if (tp == 3 || tp == 4) {
			tp = 1;
			np = 2;
		}
		else if (tp == 1) {
			tp = 2;
			np = 1;
		}

		hiku = 0;
		while (hiku == 0) {
			i = rand() % 4;
			j = rand() % 13;
			if (card[i][j] == np) {
				card[i][j] = tp;
				hiku++;
			}
		}


		for (j = 0; j < 13; j++) {
			for (i = 0; i < 4; i++) {
				if (card[i][j] == tp) {
					for (k = i + 1; k < 4; k++) {
						if (card[i][j] == card[k][j]) {
							card[i][j] = 5;
							card[k][j] = 5;
						}
					}
				}
			}
		}

		iti = 0;
		ni = 0;
		sann = 0;
		yonn = 0;

		for (i = 0; i < 4; i++) {
			for (j = 0; j < 13; j++) {
				if (card[i][j] == 1) {
					iti++;
				}
				else if (card[i][j] == 2) {
					ni++;
				}
				else if (card[i][j] == 3) {
					sann++;
				}
				else if (card[i][j] == 4) {
					yonn++;
				}
			}
		}

		if (iti > 0 && ni > 0) {
			if (tp == 1 || tp == 2) {
				printf("----------------------------------------\n");
				if (tp == 1) {
					printf("�v���C���[2����1�������܂���\n");
					printf("���Ȃ��̎�D��\n");
				}
				else if (tp == 2) {
					printf("�v���C���[2��1��������܂���\n");
					printf("���Ȃ��̎�D��\n");
				}
				for (i = 0; i < 4; i++) {
					for (j = 0; j < 13; j++) {
						if (card[i][j] == 1) {
							switch (i) {
							case 0: printf("�n�|�g��"); break;
							case 1: printf("�_�C����"); break;
							case 2: printf("�N���|�o�|��"); break;
							case 3: printf("�X�y�|�h��"); break;
							}
							switch (j) {
							case 0: printf("A\n"); break;
							case 10: printf("J\n"); break;
							case 11: printf("Q\n"); break;
							case 12: printf("K\n"); break;
							default: printf("%d\n", j + 1); break;
							}
						}
					}
				}
				system("pause");
			}
		}

		np = tp;
		tp++;
		if (tp == 5) {
			tp = 1;
		}
		if (iti == 0 || ni == 0) {
			if (iti == 0) {
				printf("----------------------------------------\n");
				printf("�v���C���|1�̎�D��0�ɂȂ�܂���\n");
				sanni = 1;
				yonni = 2;
				system("pause");
			}
			else if (ni == 0) {
				printf("----------------------------------------\n");
				printf("�v���C���|2�̎�D��0�ɂȂ�܂���\n");
				sanni = 2;
				yonni = 1;
				system("pause");
			}
		}
	}

	printf("----------------------------------------\n");
	printf("1�ʂ̓v���C���[%d�ł�\n", itii);
	printf("2�ʂ̓v���C���[%d�ł�\n", nii);
	printf("3�ʂ̓v���C���[%d�ł�\n", sanni);
	printf("4�ʂ̓v���C���[%d�ł�\n", yonni);
	printf("���");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 13; j++) {
			if (card[i][j] == 6) {
				switch (i) {
				case 0: printf("�n�|�g��"); break;
				case 1: printf("�_�C����"); break;
				case 2: printf("�N���|�o�|��"); break;
				case 3: printf("�X�y�|�h��"); break;
				}
				switch (j) {
				case 0: printf("A"); break;
				case 10: printf("J"); break;
				case 11: printf("Q"); break;
				case 12: printf("K"); break;
				default: printf("%d", j + 1); break;
				}
			}
		}

	}
	printf("�ł���\n");
	printf("�ꔲ�����I���܂�\n");

	//printf("iti==%d, ni==%d, sann==%d, yonn==%d\n\n", iti, ni, sann, yonn);
	/*for(i=0; i<4; i++){
	for(j=0; j<13; j++){
	if(card[i][j] == 1){
	printf("%d,%d\n",i,j);
	}
	}
	}*/
}