#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){

	int a;
	int b;
	int c[2];/*���Ă��[�[*/
	int d[2];//���[�v�Ŏg���ϐ�
	int e[2];//���͂���ϐ�

	e[3]=0;

	while(1){

//-------------------------------------------------------------------------------------------------------------------------------

		printf("�u�P�v(���񂽂�H���[�h)\n�u�Q�v(�ӂ����[�h)\n�u�R�v(�ނ��������H���[�h)\n�u�P�v�Ɓu�R�v�͓����H\n�ǂꂩ���͂��Ăˁ@");
		scanf("%d",&e[0]);
		 
		if(e[0]==1){
			printf("\n�Ȃ�قǁc�u���񂽂�v���[�h���ˁH\n�Q�[������\n0�`100,000�܂ł̍D���Ȑ�������͂��Ăˁ@");

			a=100001;
			b=100001;
			c[1]=0;

				while(a>100000){
					scanf("%d",&a);
					if(a>100000){
						printf("\n���͂���������100,000�����傫���ˁH\n�Ⴄ��������͂��Ăˁ@");}
					else{break;}
				}
				printf("\n���������͂��Ăˁ@");

				while(b>100000){
					scanf("%d",&b);
					if(b>100000){
						printf("\n���͂���������100,000�����傫���ˁH\n�Ⴄ��������͂��Ăˁ@");}
					else{break;}
				}
				if(a>b){
					c[1]=a-b;}
				else if(a<b){
					c[1]=b-a;}
				else{
				c[1]=a/2+b/2;}

		//a,b,c�܂Ŏg�p

			printf("\n����͐������ăQ�[������\n0�`100,000�܂ł̐�������͂��Ăˁ@");

			for(d[1]=0; d[1]<20; d[1]++){
			scanf("%d",&e[1]);
			if(e[1]>100000){
				printf("\n������100,000�����傫���ˁH100,000�����̐�������͂��Ă�");}
			else if(e[1]>c[1]){
				printf("\n�w%d�x ���c�傫���˂��c�������̂�����������������͂��Ă�",e[1]);}
			else if(e[1]<c[1]){
				printf("\n�w%d  ���c�������˂��c�������̂����傫����������͂��Ă�",e[1]);}
			else{
				printf("\n������ˁI�����肾��I���߂łƂ��I�I");
			break;}

			if(d[1]==4){
				printf("\n\n�A�h�o�C�X�F�ŏ��ɓ��͂�����̐������v���o���Ăˁ@");
			}
			else if(d[1]==9){
				printf("\n\n�q���g�P�F�ŏ��ɓ��͂��������������Ȃ�A\n���ꂼ��̐����𔼕��ɂ��āi�����_�ȉ��؎̂āj���瑫���Ă��@");
			}
			else if(d[1]==14){
				printf("\n\n�q���g�Q�F�ŏ��ɓ��͂����Q�̐����́w���x����������@");
			}
			else if(d[1]==19){
				printf("\n\n�������߂��c�c�����܂������c�c�@");
				d[1]=20;
				break;
			}
			else{
				printf("\n�c��%d��@",19-d[1]);}
			}

			switch(d[1])
			{
			case 0:printf("\n�ꔭ�c�c���Ɓc�c�H\n��Ղ��I�l�͐M���Ȃ����I�I\n");
				break;
			case 1:printf("\n�Ȃ�c�c���Ɓc�c�H\n");
				break;
			case 2:printf("\n�Ȃ�c�c���Ɓc�c�H\n");
				break;
			case 3:printf("\n�Ȃ�c�c���Ɓc�c�H\n");
				break;
			case 4:printf("\n�Ȃ�c�c���Ɓc�c�H\n");
				break;
			case 5:printf("\n���̃q���g�ŗ�������Ƃ́c�c\n��邶��Ȃ���\n");
				break;
			case 6:printf("\n����Ȃ͂��ł́I�H\n");
				break;
			case 7:printf("\n����Ȃ͂��ł́I�H\n");
				break;
			case 8:printf("\n����Ȃ͂��ł́I�H\n");
				break;
			case 9:printf("\n����Ȃ͂��ł́I�H\n");
				break;
			case 10:printf("\n���Ȃ��̓��͂��������͓�Ƃ������������̂��c\n�Ⴄ�����ł�����Ă݂���H\n");
				break;
			case 11:printf("\n�N���c�c�Ȃ��Ȃ���邶��Ȃ���\n");
				break;
			case 12:printf("\n�N���c�c�Ȃ��Ȃ���邶��Ȃ���\n");
				break;
			case 13:printf("\n�N���c�c�Ȃ��Ȃ���邶��Ȃ���\n");
				break;
			case 14:printf("\n�N���c�c�Ȃ��Ȃ���邶��Ȃ���\n");
				break;
			case 15:printf("\n���̃q���g�Ő�������Ƃ́c�c\n�N�͗���͂��ǂ��悤���c�c\n");
				break;
			case 16:printf("\n�v��ʂ�\n");
				break;
			case 17:printf("\n�v��ʂ�\n");
				break;
			case 18:printf("\n�v��ʂ�\n");
				break;
			case 19:printf("\n��Ȃ������˂��c\n");
				break;
			case 20:printf("\n�h���}�C�~�Q\n������΂��Ăˁ�\n������ %d �������񂾂��\n",c[1]);
				break;
			}
		}

//----------------------------------------------------------------------------------------------------------

		else if(e[0]==2){

			srand(time(NULL));
			c[2]=rand()%5000+1;

			printf("\n�ق��ق��c�u�ӂ��v���[�h���ˁH\n����͐������ăQ�[������\n1�`5,000�܂ł̐�������͂��Ăˁ@");

			for(d[2]=0; d[2]<20; d[2]++){
			scanf("%d",&e[2]);
			if(e[2]>5000){
				printf("\n������5,000�����傫���ˁH5,000�����̐�������͂��Ă�");}
			else if(e[2]==0){
				printf("\n0�����āI�H�@1�ȏゾ��H");}
			else if(e[2]>c[2]){
				printf("\n�w%d�x ���c�傫���˂��c�������̂�����������������͂��Ă�",e[2]);}
			else if(e[2]<c[2]){
				printf("\n�w%d�x ���c�������˂��c�������̂����傫����������͂��Ă�",e[2]);}
			else{
				printf("\n������ˁI�����肾��I���߂łƂ��I�I");
			break;}

			if(d[2]==19){
				printf("\n\n�������߂��c�c�����܂������c�c�@");
				d[2]=20;
				break;
			}
			else{
				printf("\n�c��%d��@",19-d[2]);}
			}

			switch(d[2])
			{
			case 0:printf("\n�ꔭ�c�c���Ɓc�c�H\n��Ղ��I�l�͐M���Ȃ����I�I\n");
				break;
			case 1:printf("\n�Ȃ�c�c���Ɓc�c�H\n");
				break;
			case 2:printf("\n�Ȃ�c�c���Ɓc�c�H\n");
				break;
			case 3:printf("\n�Ȃ�c�c���Ɓc�c�H\n");
				break;
			case 4:printf("\n�Ȃ�c�c���Ɓc�c�H\n");
				break;
			case 5:printf("\n�Ȃ�c�c���Ɓc�c�H\n");
				break;
			case 6:printf("\n����Ȃ͂��ł́I�H\n");
				break;
			case 7:printf("\n����Ȃ͂��ł́I�H\n");
				break;
			case 8:printf("\n����Ȃ͂��ł́I�H\n");
				break;
			case 9:printf("\n����Ȃ͂��ł́I�H\n");
				break;
			case 10:printf("\n����Ȃ͂��ł́I�H\n");
				break;
			case 11:printf("\n�N���c�c�Ȃ��Ȃ���邶��Ȃ���\n�����A�B�����[�h�����邩������Ȃ�\n");
				break;
			case 12:printf("\n�N���c�c�Ȃ��Ȃ���邶��Ȃ���\n�����A�B�����[�h�����邩������Ȃ�\n");
				break;
			case 13:printf("\n�N���c�c�Ȃ��Ȃ���邶��Ȃ���\n�����A�B�����[�h�����邩������Ȃ�\n");
				break;
			case 14:printf("\n�N���c�c�Ȃ��Ȃ���邶��Ȃ���\n�����A�B�����[�h�����邩������Ȃ�\n");
				break;
			case 15:printf("\n�v��ʂ�\n");
				break;
			case 16:printf("\n�v��ʂ�\n");
				break;
			case 17:printf("\n�v��ʂ�\n");
				break;
			case 18:printf("\n�v��ʂ�\n");
				break;
			case 19:printf("\n��Ȃ������˂��c\n");
				break;
			case 20:printf("\n�h���}�C�~�Q\n������΂��Ăˁ�\n������ %d �������񂾂��\n",c[2]);
				break;
			}
		}

//----------------------------------------------------------------------------------------------------------

		else if(e[0]==3){

			srand(time(NULL));
			c[2]=rand()%50000+1;

			printf("\n�u�ނ��������v���c����΂��H\n����͐������ăQ�[������\n1�`50,000�܂ł̐�������͂��Ă�\n���肪�t�����璍�ӂ��ĂˁH  ");

			for(d[2]=0; d[2]<20; d[2]++){
			scanf("%d",&e[2]);		
			if(e[2]>50000){
				printf("\n������50,000�����傫���ˁH50,000�����̐�������͂��Ă�");}
			else if(e[2]==0){
				printf("\n0�����āI�H�@1�ȏゾ��H");}
			else if(e[2]<c[2]){
				printf("\n�w%d�x ���c�傫���˂��c�������̂�����������������͂��Ă�",e[2]);}
			else if(e[2]>c[2]){
				printf("\n�w%d�x ���c�������˂��c�������̂����傫����������͂��Ă�",e[2]);}
			else{
				printf("\n������ˁI�����肾��I���߂łƂ��I�I");
			break;}

			if(d[2]==19){
				printf("\n\n�������߂��c�c�����܂������c�c�@");
				d[2]=20;
				break;
			}
			else{
				printf("\n�c��%d��@",19-d[2]);}
			}

			switch(d[2])
			{
			case 0:printf("\n�ꔭ�c�c���Ɓc�c�H\n��Ղ��I�l�͐M���Ȃ����I�I\n");
				break;
			case 1:printf("\n�Ȃ�c�c���Ɓc�c�H\n");
				break;
			case 2:printf("\n�Ȃ�c�c���Ɓc�c�H\n");
				break;
			case 3:printf("\n�Ȃ�c�c���Ɓc�c�H\n");
				break;
			case 4:printf("\n�Ȃ�c�c���Ɓc�c�H\n");
				break;
			case 5:printf("\n�Ȃ�c�c���Ɓc�c�H\n");
				break;
			case 6:printf("\n����Ȃ͂��ł́I�H\n");
				break;
			case 7:printf("\n����Ȃ͂��ł́I�H\n");
				break;
			case 8:printf("\n����Ȃ͂��ł́I�H\n");
				break;
			case 9:printf("\n����Ȃ͂��ł́I�H\n");
				break;
			case 10:printf("\n����Ȃ͂��ł́I�H\n");
				break;
			case 11:printf("\n�N���c�c�Ȃ��Ȃ���邶��Ȃ���\n");
				break;
			case 12:printf("\n�N���c�c�Ȃ��Ȃ���邶��Ȃ���\n");
				break;
			case 13:printf("\n�N���c�c�Ȃ��Ȃ���邶��Ȃ���\n");
				break;
			case 14:printf("\n�N���c�c�Ȃ��Ȃ���邶��Ȃ���\n");
				break;
			case 15:printf("\n�v��ʂ�\n�ŏ��̉�ʂłS���ē��͂��Ă݂āH\n���Ԃ�����Ȃ��\n");
				break;
			case 16:printf("\n�v��ʂ�\n�ŏ��̉�ʂłS���ē��͂��Ă݂āH\n���Ԃ�����Ȃ��\n");
				break;
			case 17:printf("\n�v��ʂ�\n�ŏ��̉�ʂłS���ē��͂��Ă݂āH\n���Ԃ�����Ȃ��\n");
				break;
			case 18:printf("\n�v��ʂ�\n�ŏ��̉�ʂłS���ē��͂��Ă݂āH\n���Ԃ�����Ȃ��\n");
				break;
			case 19:printf("\n��Ȃ������˂��c\n");
				break;
			case 20:printf("\n�h���}�C�~�Q\n������΂��Ăˁ�\n������ %d �������񂾂��\n",c[2]);
				break;
			}
		}
		else if(e[0]==4){
			srand(time(NULL));
			c[2]=rand()%500000+1;

			printf("\n�B�����[�h�ɂ悤�����I\n�������ăQ�[�����Ǝv����H\n1�`500,000�܂ł̐�������͂��Ă�\n���肪�ς�邩�璍�ӂ��ĂˁH\n�ŏ��͕��ʂ���H  ");

			for(d[2]=0; d[2]<40; d[2]++){
				scanf("%d",&e[2]);	
				if(d[2]== 0 || d[2]== 1 || d[2]== 2 || d[2]== 3 || d[2]== 4 || d[2]== 10 || d[2]== 11 || d[2]== 12 || d[2]== 13 || d[2]== 14 || d[2]== 20 || d[2]== 21 || d[2]== 22 || d[2]== 23 || d[2]== 24 || d[2]== 30 || d[2]== 31 || d[2]== 32 || d[2]== 33 || d[2]== 34){
					if(e[2]>500000){
						printf("\n������500,000�����傫���ˁH500,000�����̐�������͂��Ă�");}
					else if(e[2]==0){
						printf("\n0�����āI�H�@1�ȏゾ��H");}
					else if(e[2]>c[2]){
						printf("\n�w%d�x ���c�傫���˂��c�������̂�����������������͂��Ă�",e[2]);}
					else if(e[2]<c[2]){
						printf("\n�w%d�x ���c�������˂��c�������̂����傫����������͂��Ă�",e[2]);}
					else{
						printf("\n������ˁI�����肾��I���߂łƂ��I�I");
					break;}
				}
				else if(d[2]== 5 || d[2]== 6 || d[2]== 7 || d[2]== 8 || d[2]== 9 || d[2]== 15 || d[2]== 16 || d[2]== 17 || d[2]== 18 || d[2]== 19 || d[2]== 25 || d[2]== 26 || d[2]== 27 || d[2]== 28 || d[2]== 29 || d[2]== 35 || d[2]== 36 || d[2]== 37 || d[2]== 38 || d[2]== 39){
					if(e[2]>500000){
						printf("\n������500,000�����傫���ˁH500,000�����̐�������͂��Ă�");}
					else if(e[2]==0){
						printf("\n0�����āI�H�@1�ȏゾ��H");}
					else if(e[2]<c[2]){
						printf("\n�w%d�x ���c�傫���˂��c�������̂�����������������͂��Ă�",e[2]);}
					else if(e[2]>c[2]){
						printf("\n�w%d�x ���c�������˂��c�������̂����傫����������͂��Ă�",e[2]);}
					else{
						printf("\n������ˁI�����肾��I���߂łƂ��I�I");
					break;}
				}
				if(d[2]== 4 ||d[2]== 9 ||d[2]== 14 ||d[2]== 19 ||d[2]== 24 ||d[2]== 29 ||d[2]== 34){
					printf("\n\n���肪���]����!\n�c��%d��@",39-d[2]);}
				else if(d[2]==39){
					printf("\n\n�������߂��c�c�����܂������c�c�@");
					d[2]=40;
					break;}
				else{
					printf("\n�c��%d��@",39-d[2]);
					if(d[2]==40){
						break;
					}
				}
			}
			
			switch(d[2])
			{
			case 0:printf("\n�ꔭ�c�c���Ɓc�c�H\n��Ղ��I�l�͐M���Ȃ����I�I\n");
				break;
			case 1:printf("\n�Ȃ�c�c���Ɓc�c�H\n");
				break;
			case 2:printf("\n�Ȃ�c�c���Ɓc�c�H\n");
				break;
			case 3:printf("\n�Ȃ�c�c���Ɓc�c�H\n");
				break;
			case 4:printf("\n�Ȃ�c�c���Ɓc�c�H\n");
				break;
			case 5:printf("\n�Ȃ�c�c���Ɓc�c�H\n");
				break;
			case 6:printf("\n�Ȃ�c�c���Ɓc�c�H\n");
				break;
			case 7:printf("\n����Ȃ͂��ł́I�H\n");
				break;
			case 8:printf("\n����Ȃ͂��ł́I�H\n");
				break;
			case 9:printf("\n����Ȃ͂��ł́I�H\n");
				break;
			case 10:printf("\n����Ȃ͂��ł́I�H\n");
				break;
			case 11:printf("\n����Ȃ͂��ł́I�H\n");
				break;
			case 12:printf("\n����Ȃ͂��ł́I�H\n");
				break;
			case 13:printf("\n�N���c�c�Ȃ��Ȃ���邶��Ȃ���\n");
				break;
			case 14:printf("\n�N���c�c�Ȃ��Ȃ���邶��Ȃ���\n");
				break;
			case 15:printf("\n�N���c�c�Ȃ��Ȃ���邶��Ȃ���\n");
				break;
			case 16:printf("\n�N���c�c�Ȃ��Ȃ���邶��Ȃ���\n");
				break;
			case 17:printf("\n�N���c�c�Ȃ��Ȃ���邶��Ȃ���\n");
				break;
			case 18:printf("\n�N���c�c�Ȃ��Ȃ���邶��Ȃ���\n");
				break;
			case 19:printf("\n����ł͏펯�Ɏ����Ă͂����Ȃ��̂ł��ˁI\n");
				break;
			case 20:printf("\n����ł͏펯�Ɏ����Ă͂����Ȃ��̂ł��ˁI\n");
				break;
			case 21:printf("\n����ł͏펯�Ɏ����Ă͂����Ȃ��̂ł��ˁI\n");
				break;
			case 22:printf("\n����ł͏펯�Ɏ����Ă͂����Ȃ��̂ł��ˁI\n");
				break;
			case 23:printf("\n����ł͏펯�Ɏ����Ă͂����Ȃ��̂ł��ˁI\n");
				break;
			case 24:printf("\n����ł͏펯�Ɏ����Ă͂����Ȃ��̂ł��ˁI\n");
				break;
			case 25:printf("\n����ł͏펯�Ɏ����Ă͂����Ȃ��̂ł��ˁI\n");
				break;
			case 26:printf("\n�N�ASimeji���Ēm���Ă邩���H\n");
				break;
			case 27:printf("\n�N�ASimeji���Ēm���Ă邩���H\n");
				break;
			case 28:printf("\n�N�ASimeji���Ēm���Ă邩���H\n");
				break;
			case 29:printf("\n�N�ASimeji���Ēm���Ă邩���H\n");
				break;
			case 30:printf("\n�N�ASimeji���Ēm���Ă邩���H\n");
				break;
			case 31:printf("\n�N�ASimeji���Ēm���Ă邩���H\n");
				break;
			case 32:printf("\n�N�ASimeji���Ēm���Ă邩���H\n");
				break;
			case 33:printf("\n�v��ʂ�\n");
				break;
			case 34:printf("\n�v��ʂ�\n");
				break;
			case 35:printf("\n�v��ʂ�\n");
				break;
			case 36:printf("\n�v��ʂ�\n");
				break;
			case 37:printf("\n�v��ʂ�\n");
				break;
			case 38:printf("\n�v��ʂ�\n");
				break;
			case 39:printf("\n��Ȃ������˂��c\n");
				break;
			case 40:printf("\n�h���}�C�~�Q\n������΂��Ăˁ�\n������ %d �������񂾂��\n",c[2]);
				break;
			}
		}
	else{
		printf("\n�u1�v���u2�v���u3�v�u4�v����͂��Ă�");
	}
	puts("");
	} 
}