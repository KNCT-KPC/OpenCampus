#include<stdio.h>
int main(void){

    int z[9][9] = {{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0}};

	int a=0;
	int b;
	int c=0;
	int d;
	int e=0;
	int f=0;
    int x;
	int y;
	int X;
	int Y;

	printf("PvP(1)か、PvE(2)か選択してね\n");
	while(a==0){
		scanf("%d",&a);
		if(a!=1&&1!=2){
			printf("だめです");
			a=0;
		}
	}
	if(a==1){

		//最下段を"1"に
		for(a=0;a<9;a++){
			z[8][a]=1;
		}//ここまで

		//最上段を"9"に
		for(a=0;a<9;a++){
			z[0][a]=9;
		}//ここまで

		while(e==0){
				
			for(x=0;x<9;x++){
				for(y=0;y<9;y++){
					if(z[x][y]==1){
					  	printf(" ●  |");
					}	    
					else if(z[x][y]==2){
			   			printf(" ○  |");
					}
					else if(z[x][y]==9){
	   					printf(" ■  |");
					}
					else if(z[x][y]==8){
			   			printf(" □  |");
					}
					else{printf("    |");
					}
				}
				printf("   %d\n=============================================\n",9-x);
			}printf(" 一   二   三   四   五   六   七   八   九     味方側%dターン目\n/////////////////////////////////////////////////\n",c+1);
			
			//エリアが"1"なら隣接したどれかのエリアに移動
			for(X=0;X<9;X++){
			  	for(Y=0;Y<9;Y++){
		   			if(z[X][Y]==1){
	   					for(x=0;x<9;x++){
							for(y=0;y<9;y++){	
								if(z[x][y]==1){
									printf(" ●  |");
								}	    
								else if(z[x][y]==2){
								   	printf(" ○  |");
								}
								else if(z[x][y]==9){
					   				printf(" ■  |");
								}
								else if(z[x][y]==8){
			   						printf(" □  |");
								}
								else{printf("    |");
								}
							}
							printf("   %d\n=============================================\n",9-x);
						}printf(" 一   二   三   四   五   六   七   八   九     味方側%dターン目\n/////////////////////////////////////////////////\n",c+1);
						printf("座標%d,%dのエリアのどこにする?数字を入力してね\n(上：1　右：2　下：3　左：4)\n ; ",Y+1,9-X);
						scanf("%d",&d);
						switch(d){
					        case 1:{
								z[X][Y]=0;
								z[X-1][Y]=2;
								break;
							}
					        case 2:{
								z[X][Y]=0;
								z[X][Y+1]=2;
								break;
							}
						    case 3:{
								z[X][Y]=0;
								z[X+1][Y]=2;
								break;
							}
					        case 4:{
							  	z[X][Y]=0;
								z[X][Y-1]=2;
								break;
							}
						}
					}
				}
			}
			for(x=0;x<9;x++){
				for(y=0;y<9;y++){
					if(z[x][y]==2){z[x][y]=1;}
				}
			}
			for(X=0;X<9;X++){
			  	for(Y=0;Y<9;Y++){
		   			if(z[X][Y]==9){
	   					for(x=0;x<9;x++){
							for(y=0;y<9;y++){	
								if(z[x][y]==1){
									printf(" ●  |");
								}	    
								else if(z[x][y]==2){
								   	printf(" ○  |");
								}
								else if(z[x][y]==9){
					   				printf(" ■  |");
								}
								else if(z[x][y]==8){
			   						printf(" □  |");
								}
								else{printf("    |");
								}
							}
							printf("   %d\n=============================================\n",9-x);
						}printf(" 一   二   三   四   五   六   七   八   九     敵側%dターン目\n/////////////////////////////////////////////////\n",c+1);
						printf("座標%d,%dのエリアのどこにする?数字を入力してね\n(上：1　右：2　下：3　左：4)\n ; ",Y+1,9-X);
						scanf("%d",&d);
						switch(d){
					        case 1:{
								z[X][Y]=0;
								z[X-1][Y]=8;
								break;
							}
					        case 2:{
								z[X][Y]=0;
								z[X][Y+1]=8;
								break;
							}
						    case 3:{
								z[X][Y]=0;
								z[X+1][Y]=8;
								break;
							}
					        case 4:{
							  	z[X][Y]=0;
								z[X][Y-1]=8;
								break;
							}
						}
					}
				}
			}
			for(x=0;x<9;x++){
	   			for(y=0;y<9;y++){
					if(z[x][y]==8){z[x][y]=9;}
				}
			}
			c=c+1;
			if(z[0][0]!=1&&z[0][1]!=1&&z[0][2]!=1&&z[0][3]!=1&&z[0][4]!=1&&z[0][5]!=1&&z[0][6]!=1&&z[0][7]!=1&&z[0][8]!=1&&z[1][0]!=1&&z[1][1]!=1&&z[1][2]!=1&&z[1][3]!=1&&z[1][4]!=1&&z[1][5]!=1&&z[1][6]!=1&&z[1][7]!=1&&z[1][8]!=1&&z[2][0]!=1&&z[2][1]!=1&&z[2][2]!=1&&z[2][3]!=1&&z[2][4]!=1&&z[2][5]!=1&&z[2][6]!=1&&z[2][7]!=1&&z[2][8]!=1&&z[3][0]!=1&&z[3][1]!=1&&z[3][2]!=1&&z[3][3]!=1&&z[3][4]!=1&&z[3][5]!=1&&z[3][6]!=1&&z[3][7]!=1&&z[3][8]!=1&&z[4][0]!=1&&z[4][1]!=1&&z[4][2]!=1&&z[4][3]!=1&&z[4][4]!=1&&z[4][5]!=1&&z[4][6]!=1&&z[4][7]!=1&&z[4][8]!=1&&z[5][0]!=1&&z[5][1]!=1&&z[5][2]!=1&&z[5][3]!=1&&z[5][4]!=1&&z[5][5]!=1&&z[5][6]!=1&&z[5][7]!=1&&z[5][8]!=1&&z[6][0]!=1&&z[6][1]!=1&&z[6][2]!=1&&z[6][3]!=1&&z[6][4]!=1&&z[6][5]!=1&&z[6][6]!=1&&z[6][7]!=1&&z[6][8]!=1&&z[7][0]!=1&&z[7][1]!=1&&z[7][2]!=1&&z[7][3]!=1&&z[7][4]!=1&&z[7][5]!=1&&z[7][6]!=1&&z[7][7]!=1&&z[7][8]!=1&&z[8][0]!=1&&z[8][1]!=1&&z[8][2]!=1&&z[8][3]!=1&&z[8][4]!=1&&z[8][5]!=1&&z[8][6]!=1&&z[8][7]!=1&&z[8][8]!=1){
				for(x=0;x<9;x++){
					for(y=0;y<9;y++){
						if(z[x][y]==1){
							printf(" ●  |");
						}	    
						else if(z[x][y]==2){
					   		printf(" ○  |");
						}
						else if(z[x][y]==9){
		   					printf(" ■  |");
						}
						else if(z[x][y]==8){
		   					printf(" □  |");
						}
						else{printf("    |");
						}
					}
					printf("   %d\n=============================================\n",9-x);
				}printf(" 一   二   三   四   五   六   七   八   九     最終結果\n/////////////////////////////////////////////////\n");
				printf("GAME OVER!!!!\n");
				e=1;
			}if(z[0][0]!=9&&z[0][1]!=9&&z[0][2]!=9&&z[0][3]!=9&&z[0][4]!=9&&z[0][5]!=9&&z[0][6]!=9&&z[0][7]!=9&&z[0][8]!=9&&z[1][0]!=9&&z[1][1]!=9&&z[1][2]!=9&&z[1][3]!=9&&z[1][4]!=9&&z[1][5]!=9&&z[1][6]!=9&&z[1][7]!=9&&z[1][8]!=9&&z[2][0]!=9&&z[2][1]!=9&&z[2][2]!=9&&z[2][3]!=9&&z[2][4]!=9&&z[2][5]!=9&&z[2][6]!=9&&z[2][7]!=9&&z[2][8]!=9&&z[3][0]!=9&&z[3][1]!=9&&z[3][2]!=9&&z[3][3]!=9&&z[3][4]!=9&&z[3][5]!=9&&z[3][6]!=9&&z[3][7]!=9&&z[3][8]!=9&&z[4][0]!=9&&z[4][1]!=9&&z[4][2]!=9&&z[4][3]!=9&&z[4][4]!=9&&z[4][5]!=9&&z[4][6]!=9&&z[4][7]!=9&&z[4][8]!=9&&z[5][0]!=9&&z[5][1]!=9&&z[5][2]!=9&&z[5][3]!=9&&z[5][4]!=9&&z[5][5]!=9&&z[5][6]!=9&&z[5][7]!=9&&z[5][8]!=9&&z[6][0]!=9&&z[6][1]!=9&&z[6][2]!=9&&z[6][3]!=9&&z[6][4]!=9&&z[6][5]!=9&&z[6][6]!=9&&z[6][7]!=9&&z[6][8]!=9&&z[7][0]!=9&&z[7][1]!=9&&z[7][2]!=9&&z[7][3]!=9&&z[7][4]!=9&&z[7][5]!=9&&z[7][6]!=9&&z[7][7]!=9&&z[7][8]!=9&&z[8][0]!=9&&z[8][1]!=9&&z[8][2]!=9&&z[8][3]!=9&&z[8][4]!=9&&z[8][5]!=9&&z[8][6]!=9&&z[8][7]!=9&&z[8][8]!=9){
				for(x=0;x<9;x++){
					for(y=0;y<9;y++){
						if(z[x][y]==1){
							printf(" ●  |");
						}	    
						else if(z[x][y]==2){
			   				printf(" ○  |");
						}
						else if(z[x][y]==9){
	   						printf(" ■  |");
						}
						else if(z[x][y]==8){
			   				printf(" □  |");
						}
						else{printf("    |");
						}
					}
					printf("   %d\n=============================================\n",9-x);
				}printf(" 一   二   三   四   五   六   七   八   九     最終結果\n/////////////////////////////////////////////////\n");
				printf("GAME CLEAR!!!!\n");
				e=1;
			}
		}//ここまで
	}
	
	return 0;
	
}