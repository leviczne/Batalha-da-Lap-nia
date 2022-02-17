#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

//Docentes:
//Gabriel de Brito Leal,Levi Cezane Rocha Santos,Lucas Rodrigues Lopes,Marcelo de Carvalho Lima Macêdo ,Victor Martinez Lopo.



//funções do jogo

 
    void condicaoDetriunfo();
    void POSICIONAMENTO();
    void printtab();
    void Realizarataque();
    void movimento();
    void ataqueespecial();

    void nivelmedio();

// variaveis universais 
	int caso, primeiro, a=1;
	int playersJ1 = 9;
	int playersJ2 = 9;
	char jogador1[15],  jogador2[15];  
	char tabuleiro[12][12] = {
        {'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
        {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
        {'*', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~', '*'},
        {'*', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~', '*'},
        {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
        {'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
      };


int main (){
  // variaveis
  int i;
  int j;
  int resultado;
  setlocale(LC_ALL, "Portuguese");


  // introdução

    printf ("<>=== BATALHAS DA LAPÔNIA ===<>\n");
    printf ("\n");
	printf ("\n");
	printf ("\n");
	printf("Regras:\n- Cada jogador só pode possuir um personagem especial.\n- O personegem especial não pode ser igual ao do adversário.\n- Não é permitido tentar escalar as montanhas ou nadar pelo rio.\n- Cada jogador só podera fazer uma jogada por turno.\n- O jogo acaba quando um dos jogadores perde todos os seus personegens.\n. - O ataque especial só pode ser usado uma vez.\n.Só pode ser usadas 4 peças do tipo (1) e 4 peças do tipo (2)\n.");
	printf ("\n");
    printf ("==>Jogador I diga seu nome:\n");
    gets(jogador1);
    printf ("\n");
    printf ("==>Jogador II diga seu nome:\n");
    gets(jogador2);

      system("cls");

        srand(time(NULL));
          primeiro = rand() % 2 + 1;

  // pre jogo
      for(i=0; i<9; i++){

      if(primeiro == 1){
        
        printtab();
			printf ("%s",jogador1);
        	printf (" POSICIONE SUA PEÇA!!\n\n");
                //funcoes da POSICIONAMENTO
        POSICIONAMENTO();

 	printtab();
    	printf ("%s",jogador2);
    	printf (" POSICIONE SUA PEÇA!!\n\n");
                  //funcoes da POSICIONAMENTO
    POSICIONAMENTO();
                    
          }else{
    
	 printtab();      
        printf ("%s",jogador2);
        printf (" POSICIONE SUA PEÇA!!\n\n");	
                //funcoes da POSICIONAMENTO
    POSICIONAMENTO();
                    
 	printtab();
      	printf ("%s",jogador1);
        printf (" POSICIONE SUA PEÇA!!\n\n");
                  //funcoes da POSICIONAMENTO
    POSICIONAMENTO();
                }
    }

 // Jogo iniciado  
  system("cls");
 printtab();
  while(a==1){

    if(primeiro == 1){
 

	printf ("%s",jogador1);
    printf (" REALIZE SUA JOGADA!!\n\n");
              //funcoes da jogada 1
		printf("Escolha o que fazer: (1) Atacar; (2) Mover; (3) Ataque Especial\n");
		scanf("%i", &caso);
		system("cls");
        printtab();
  //P1 (1) Atacar; (2) Mover; (3) Ataque Especial;
  switch (caso){
  case 1:
    {  Realizarataque();
      break;}

  case 2:
    {movimento();
    break;}

  case 3:
    { ataqueespecial();
    break;} 
  
  default:
    {
    return  1;}
  }
  
  condicaoDetriunfo();
  
  
 
		printf ("%s",jogador2);
		printf (" REALIZE SUA JOGADA!!\n\n");
              //funcoes da jogada2
			printf("Escolha o que fazer: (4) Atacar; (5) Mover; (6) Ataque Especial;\n");
      		scanf("%i", &caso);
    		system("cls");  
			printtab();  
  switch (caso) { 
  //P2 (4) Atacar; (5) Mover; (6) Ataque Especial;
  case 4:
    { 
	Realizarataque ();
    break;}


    case 5:
    {
	movimento();
    break;}


  case 6:
    {
	ataqueespecial ();
    break;}

  default:
    {
    return 1 ;}
  }
  
  condicaoDetriunfo();

  }else{


    
      printf ("%s",jogador2);
      printf (" REALIZE SUA JOGADA!!\n\n");	
              //funcoes da jogada 1
		printf("Escolha o que fazer: (1) Atacar; (2) Mover; (3) Ataque Especial;\n");
		scanf("%i", &caso);
    	system("cls");
    	printtab();
  //P1 (1) Atacar; (2) Mover; (3) Ataque Especial;
  switch (caso)
  {
  case 1:
    { 
	Realizarataque();
      break;}

  case 2:
    {
	movimento();
    break;}

  case 3:
    {
	 ataqueespecial();
    break;} 

  default:
    {
    return 1 ;}
  }
  
  condicaoDetriunfo();




  
	printf ("%s",jogador1);
	printf (" REALIZE SUA JOGADA!!\n\n");
              //funcoes da jogada2
		printf("Escolha o que fazer: (4) Atacar; (5) Mover; (6) Ataque Especial\n");
		scanf("%i", &caso);
		system("cls");
		printtab();
  switch (caso)
  { 
  //P2 (4) Atacar; (5) Mover; (7) Ataque Especial;
  case 4:
    {
	Realizarataque ();
    break;}


    case 5:
    {
	movimento();
    break;}


  case 6:
    {
	ataqueespecial ();
    break;}

  default:
    {
    return 1 ;}
  }
	
	condicaoDetriunfo();

    }
	}
    return 0 ;}
//FIM DO INT MAIN
//FUNCOES DO JOGO

//posicionar
    void POSICIONAMENTO(){
    setlocale(LC_ALL, "Portuguese");

    int i, j, peca;

    printf("Escolha qual tipo peça você deseja colocar:\n");
    printf("1- Peça tipo 1\n");
    printf("2- Peça tipo 2\n");
    printf("3- Peça tipo @\n");
    printf("4- Peça tipo #\n");
    scanf("%i", &peca);
     			
     			 
    switch (peca){
      
      case 1:{
      printf("Escolha agora a posição da sua peça:\n");
        scanf("%i", &i);
          scanf("%i", &j);
            tabuleiro[i][j]='1';
        break;
      }
      
      case 2:{
      printf("Escolha agora a posição da sua peça:\n");
        scanf("%i", &i);
          scanf("%i", &j);
            tabuleiro[i][j]='2';
        break;
      }

      case 3:{
      printf("Escolha agora a posição da sua peça:\n");
        scanf("%i", &i);
          scanf("%i", &j);
            tabuleiro[i][j]='@';
        break;
      }

      case 4:{
      printf("Escolha agora a posição da sua peça:\n");
        scanf("%i", &i);
          scanf("%i", &j);
            tabuleiro[i][j]='#';
        break;
        }
        
		default:
    {
    break;
		}
      }
	  system("cls");
    }

//movimento
	void movimento(){
    int mov,i,j;
    system("cls");
	setlocale(LC_ALL, "Portuguese");

	printtab();
    printf("Escolha qual peça movimentar\n");

      scanf("%i", &i);
        scanf("%i", &j);
      if(tabuleiro[i][j]=='1'||tabuleiro[i][j]=='2'||tabuleiro[i][j]=='@'||tabuleiro[i][j]=='#'){
      printf("Voce quer movimentar a sua peça para que direcao:\n\n");
        printf("1- Para baixo\n");
          printf("2- Para cima\n");
            printf("3- Para a esquerda\n");
              printf("4- Para a direita\n");
                scanf("%i", &mov);
    				system("cls");
    switch (mov){
      
      case 1:{
        if(tabuleiro[i+1][j]==' '){
        tabuleiro[i+1][j]=tabuleiro[i][j];
        tabuleiro[i][j]=' ';
        printtab();
		printf("O guerreiro se moveu para %i %i\n\n", i+1, j);
        }else{
        tabuleiro[i][j]=' ';
		printtab();
		printf("Seu personagem moscou e morreu afogado ou caiu no limbo\n\n");      
        }
        break;
		}
      
      case 2:{
        if(tabuleiro[i-1][j]==' '){
        tabuleiro[i-1][j]=tabuleiro[i][j];
        tabuleiro[i][j]=' ';
        printtab();
        printf("O guerreiro se moveu para %i %i\n\n", i-1, j);
        }else{
        tabuleiro[i][j]=' ';
		printtab();
        printf("Seu personagem moscou e morreu afogado ou caiu no limbo\n\n");
        }
        break;}
      
      case 3:{
        if(tabuleiro[i][j-1]==' '){
        tabuleiro[i][j-1]=tabuleiro[i][j];
        tabuleiro[i][j]=' ';
        printtab();
        printf("O guerreiro se moveu para %i %i\n\n", i, j-1);
        }else{
        tabuleiro[i][j]=' ';
		printtab();
        printf("Seu personagem moscou e caiu no limbo\n\n");
        }
        break;}
      
      case 4:{
        if(tabuleiro[i][j+1]==' '){
        tabuleiro[i][j+1]=tabuleiro[i][j];
        tabuleiro[i][j]=' ';
        printtab();
        printf("O guerreiro se moveu para %i %i\n\n", i, j+1);
        }else{
        tabuleiro[i][j]=' ';
		printtab();
        printf("Seu personagem moscou e caiu no limbo\n\n");
        }
        break;}
    	}
    }else{
	system("cls");
	printtab();
	printf("Jogada impossível\n\n");
	}
}


//printar tabuleiro
  void printtab (){
	 		int i=0, j=0;
        printf ("<>%s  VS  ",jogador1);
          printf ("%s<>\n",jogador2);
    for(i=0;i<12;i++){
			for(j=0;j<12;j++){

				printf("%c", tabuleiro[i][j]);
		                                  }
		      printf("\n");
		}
	}


//O ataque
  void Realizarataque (){
  setlocale(LC_ALL, "Portuguese");


    //As variaveis idesejado e jdesejado são responsaveis pelas coordenada dos bonecos 1 e 2

      int i, j, idesejado, jdesejado, d_ou_e;


        //recebendo as coordenadas do boneco atacante

        printf("Jogador escolha seu atacante!\n");

          scanf("%i %i",&idesejado,&jdesejado);
		if(tabuleiro[idesejado][jdesejado]=='1'||tabuleiro[idesejado][jdesejado]=='2'){

    //Condição de boneco do tipo 1, atacando na parte superior.

      //Na condição da variavel caso == '1' define que o atacante está na parte de cima do tabuleiro.

      if (tabuleiro [idesejado][jdesejado] == '1' && caso == 1){

      for (i=idesejado;i<12;i++){
          
        i=idesejado++;
        j=jdesejado;
        
      if ((tabuleiro [i][j] == '1' || tabuleiro[i][j] == '2' || tabuleiro[i][j] == '@'|| tabuleiro[i][j] == '#') && i > 6){
          tabuleiro [i][j]=' ';
          system("cls");
          printtab();
          printf("O guerreiro da casa %i %i morreu\n", i, j);
          goto imprimirtela;
            
              }

      }
    }

    //condição de boneco do tipo 1, atacando na parte inferior.

      //Na condição da variavel caso =='5' define-se q o atacante está na parte de baixo do tabuleiro.

    if (tabuleiro [idesejado][jdesejado] == '1' && caso == 4){
    for (i=idesejado;i<12;i++){

        i=idesejado--;
        j=jdesejado;
        
      if ((tabuleiro [i][j] == '1' || tabuleiro[i][j] == '2' || tabuleiro[i][j] == '@'|| tabuleiro[i][j] == '#') && i < 5){
          tabuleiro [i][j]=' ';
          system("cls");
          printtab();
          printf("O guerreiro da casa %i %i morreu\n", i, j);
          goto imprimirtela;
            
    	}
      }
    }

    //condição de boneco do tipo 2, atacando na parte superior.

      //Na condição da variavel caso == '1' define-se q o atacante está na parte de cima do tabuleiro.

    if (tabuleiro [idesejado][jdesejado] == '2' && caso == 1){
	  printf("Para atacar na diagonal para esquerda digite (1)\nPara atacar para direita digite (2)\n");
      scanf("%i", &d_ou_e);
        
        
        if (d_ou_e == 2){  
    
    for (i=idesejado;i<12;i++){ 
    for (j=jdesejado;j<12;j++){
        
        i=idesejado++;
        j=jdesejado++;

        if ((tabuleiro [i][j] == '1' || tabuleiro[i][j] == '2' || tabuleiro[i][j] == '@'|| tabuleiro[i][j] == '#') && i > 6){
          tabuleiro [i][j]=' ';
          system("cls");
          printtab();
          printf("O guerreiro da casa %i %i morreu\n", i, j);
          goto imprimirtela;
            }
    	}
    }
    }

      if(d_ou_e == 1){
        for (i=idesejado;i<12;i++){ 
            for (j=jdesejado;j>0;j--){
          
        i=idesejado++;
        j=jdesejado--;

              if ((tabuleiro [i][j] == '1' || tabuleiro[i][j] == '2' || tabuleiro[i][j] == '@'|| tabuleiro[i][j] == '#') && i > 6){
            tabuleiro [i][j]=' ';
            system("cls");
            printtab();
            printf("O guerreiro da casa %i %i morreu\n", i, j);
            goto imprimirtela;
              
              }
            }
          }
        }
      }
	
    //condição de boneco do tipo 2, atacando na parte inferior.

      //Na condição da variavel caso =='5' define-se q o atacante está na parte de baixo do tabuleiro

    if (tabuleiro [idesejado][jdesejado] == '2' && caso == 4){ 
      printf("Para atacar na diagonal para esquerda digite (1)\nPara atacar para direita digite (2)\n");
      scanf("%i", &d_ou_e);
    
    if (d_ou_e == 1){ 
      
      for (i=idesejado;i<12;i++){ 
          for (j=jdesejado;j>0;j--){
        
        i=idesejado--;
        j=jdesejado--;

            if ((tabuleiro [i][j] == '1' || tabuleiro[i][j] == '2' || tabuleiro[i][j] == '@'|| tabuleiro[i][j] == '#') && i < 5){
          tabuleiro [i][j]=' ';
          system("cls");
          printf("O guerreiro da casa %i %i morreu\n", i, j);
          goto imprimirtela;
            }
          } 
        }
      }


    if (d_ou_e == 2){ 
      
    for (i=idesejado;i<12;i++){ 
      for (j=jdesejado;j<12;j++){
        
        i=idesejado--;
        j=jdesejado++;

        if ((tabuleiro [i][j] == '1' || tabuleiro[i][j] == '2' || tabuleiro[i][j] == '@'|| tabuleiro[i][j] == '#') && i < 5){
          tabuleiro [i][j]=' ';
          system("cls");
          printtab();
          printf("O guerreiro da casa %i %i morreu\n", i, j);
          goto imprimirtela;
            
         }
        } 
      }
    imprimirtela:
    printf ("\n");
    		}
    	}
	}else{
		system("cls");
		printtab();
		printf("Jogada impossível\n\n");
	}
}


//ataque especial
  void ataqueespecial(){
 	  setlocale(LC_ALL, "Portuguese");	
      int op,aux=0;
        int i,j,k,l, d_ou_e;
          int idesejado,jdesejado;
    //Escolha do personagem
      printf("Escolha o personagem:\n");
        printf("[1] personagem @\n");
          printf("[2] personagem #\n");
            scanf("%i", &op);


    //efeito do primeiro ataque
      if (op == 1){ 
		    while (a==1){
			if(aux!=2){
 
        //recebendo as coordenadas do boneco atacante

        printf("Jogador escolha seu atacante!\n");

          scanf("%i %i",&idesejado,&jdesejado);


          //Na condição da variavel caso == '1' define que o atacante está na parte de cima do tabuleiro.

          if (tabuleiro [idesejado][jdesejado] == '1' && caso == 3){ 

          for (i=idesejado;i<12;i++){
              
            i=idesejado++;
            j=jdesejado;
            
          if ((tabuleiro [i][j] == '1' || tabuleiro[i][j] == '2') && i > 6){
              tabuleiro [i][j]=' ';
			  system("cls");
			  printtab();
              printf("Ataque especial realizado com sucesso\n\n");
			  goto fim;  
                  }
            }
          }

          //Na condição da variavel caso =='6' define-se q o atacante está na parte de baixo do tabuleiro.

          if (tabuleiro [idesejado][jdesejado] == '1' && caso == 6){
          for (i=idesejado;i>0;i--){

            i=idesejado--;
            j=jdesejado;
            
          if ((tabuleiro [i][j] == '1' || tabuleiro[i][j] == '2') && i < 5){
              tabuleiro [i][j]=' ';
              system("cls");
              printtab();
              printf("Ataque especial realizado com sucesso\n\n");
              goto fim;
                  }
            }
          }
          
          if (tabuleiro [idesejado][jdesejado] == '2' && caso == 3){
	  printf("Para atacar na diagonal para esquerda digite (1)\nPara atacar para direita digite (2)\n");
      scanf("%i", &d_ou_e);
        
        
        if (d_ou_e == 2){  
    
    for (i=idesejado;i<12;i++){ 
    for (j=jdesejado;j<12;j++){
        
        i=idesejado++;
        j=jdesejado++;

        if ((tabuleiro [i][j] == '1' || tabuleiro[i][j] == '2' || tabuleiro[i][j] == '@'|| tabuleiro[i][j] == '#') && i > 6){
          tabuleiro [i][j]=' ';
          system("cls");
          printtab();
          printf("Ataque especial realizado com sucesso\n\n");
          goto fim;
            	}
    		}
    	}
    }

      if(d_ou_e == 1){
        for (i=idesejado;i<12;i++){ 
            for (j=jdesejado;j>0;j--){
          
        i=idesejado++;
        j=jdesejado--;

              if ((tabuleiro [i][j] == '1' || tabuleiro[i][j] == '2' || tabuleiro[i][j] == '@'|| tabuleiro[i][j] == '#') && i > 6){
            tabuleiro [i][j]=' ';
            system("cls");
            printtab();
            printf("Ataque especial realizado com sucesso\n\n");
            goto fim;             
              }
            }
          }
        }
      }
      if (tabuleiro [idesejado][jdesejado] == '2' && caso == 6){ 
      printf("Para atacar na diagonal para esquerda digite (1)\nPara atacar para direita digite (2)\n");
      scanf("%i", &d_ou_e);
    
    if (d_ou_e == 1){ 
      
      for (i=idesejado;i<12;i++){ 
          for (j=jdesejado;j>0;j--){
        
        i=idesejado--;
        j=jdesejado--;

            if ((tabuleiro [i][j] == '1' || tabuleiro[i][j] == '2' || tabuleiro[i][j] == '@'|| tabuleiro[i][j] == '#') && i < 5){
          tabuleiro [i][j]=' ';
          system("cls");
          printtab();
          printf("Ataque especial realizado com sucesso\n\n");
          goto fim;
        		}
        	} 
        }
    }


    if (d_ou_e == 2){ 
      
    for (i=idesejado;i<12;i++){ 
      for (j=jdesejado;j<12;j++){
        
        i=idesejado--;
        j=jdesejado++;

        if ((tabuleiro [i][j] == '1' || tabuleiro[i][j] == '2' || tabuleiro[i][j] == '@'|| tabuleiro[i][j] == '#') && i < 5){
          tabuleiro [i][j]=' ';
          system("cls");
          printtab();
          printf("Ataque especial realizado com sucesso\n\n");
          goto fim;
         			}
        		} 
    		}
		}
	}
          
          
          
          
		   fim: 
              aux++;}else{break;}
            }
        }

    //efeito do segundo ataque
      if(op == 2){
        //recebendo as coordenadas do boneco atacante

         printf("Jogador escolha seu Alvo!\n");
          scanf("%i %i",&idesejado,&jdesejado);

        //Na condição da variavel caso == '1' define que o atacante está na parte de cima do tabuleiro.

            if (caso == 3){ 

                i=idesejado;
                j=jdesejado;
                

              for (k=i-1; k<(i+2); k++){
              for ( l=j-1; l<(j+3); l++ ){
              if ((tabuleiro [k][l] == '1' || tabuleiro[k][l] == '2' || tabuleiro[k][l] == '@'|| tabuleiro[k][l] == '#' || tabuleiro[k][l] == ' ')){
              
                  tabuleiro [k][l]=' ';
                  
                    }
                  }
                }
				system("cls");
				printtab();
				printf("Ataque especial realizado com sucesso\n\n");
            }

        //Na condição da variavel caso =='5' define-se q o atacante está na parte de baixo do tabuleiro.

          if (caso == 6){

               i=idesejado;
                j=jdesejado;
                

              for (k=i-1; k<(i+2); k++){
              for ( l=j-1; l<(j+3); l++ ){
              if ((tabuleiro [k][l] == '1' || tabuleiro[k][l] == '2' || tabuleiro[k][l] == '@'|| tabuleiro[k][l] == '#' || tabuleiro[k][l] == ' ')){
              
                  tabuleiro [k][l]=' ';
                  
                    }
                  }
                }
				system("cls");
				printtab();
				printf("Ataque especial realizado com sucesso\n\n");
            }
		}          
   }

//condicao de vitoria
   void condicaoDetriunfo(){
    setlocale(LC_ALL, "Portuguese");



      // Definir o numeros de players de cada jogador no ínicio da partida
      //coloquei 6 só pra exemplificar	

        int i=0,j=0,aux=0;
        char jogadorganhador[15];


        // arrumando os jogadores
    if(primeiro==1){

      //É feito uma leitura na matriz, se os espaços do tabuleiro tiverem vazios o primeiro jogador ganha.
          
      for ( i=1; i<5; i++ ){
      for ( j=1; j<=10; j++ ){
      
        if(tabuleiro[ i ][ j ] != ' '){aux=0; 
		break;
        }else{aux++;}
          
		  
      } if(aux==0){break;}
      
      }if (aux==40){printf("Parabéns, %s, você é o grande vencendor dessa batalha na Lapônia!!\n", jogador2);
          printf("YEAH!!!!!");
          exit(0);
        }
        
        
      //É feito uma leitura na matriz, se os espaços do tabuleiro tiverem vazios o segundo jogador ganha.
      for ( i=7; i<11; i++ ){
      for ( j=1; j<=10; j++ ){
      
        if(tabuleiro[ i ][ j ] != ' '){aux=0;
        }else{aux++;}
        
        }
        } if (aux==40){printf("Parabéns, %s, você é o grande vencendor dessa batalha na Lapônia!!\n", jogador1);
        printf("YEAH!!!!!");
        exit(0);
          }  
          
    }else{

    //É feito uma leitura na matriz, se os espaços do tabuleiro tiverem vazios o primeiro jogador ganha.
      for ( i=1; i<5; i++ ){
      for ( j=1; j<=10; j++ ){
      
        if(tabuleiro[ i ][ j ] != ' '){aux=0;
        break;
        }else{aux++;}
       
      }
      if(aux==0){break;}
      }if (aux==40){ printf("Parabéns, %s, você é o grande vencendor dessa batalha na Lapônia!!\n", jogador1);
        printf("YEAH!!!!!");
        exit(0);
        }

    //É feito uma leitura na matriz, se os espaços do tabuleiro tiverem vazios o primeiro jogador ganha.
      for ( i=7; i<11; i++ ){
      for ( j=1; j<=10; j++ ){
      
        if(tabuleiro[ i ][ j ] != ' '){aux=0;
        }else{aux++;}
        
      }
      }if (aux==40){printf("Parabéns, %s, você é o grande vencendor dessa batalha na Lapônia!!\n", jogador2);
        printf("YEAH!!!!!\n");
        exit(0);
        }
    }
} 