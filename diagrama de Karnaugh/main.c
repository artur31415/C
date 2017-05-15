/*
		Artur Ferreira Moreira	
		19 of september of 2013
		Instituto Federal de Educação, Ciência e Tecnologia do Ceará (IFCE) - Cedro
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{ int E=1,S[16],i,B[16],n=0,T[16],j,h;
  char solution[32]="",solution2[32]="";
  while(E!=0){
  
  printf("Escolha o numero de variaveis \n");
  printf("digite 0 para sair do programa\n");
  scanf(" %i",&E);
  
  switch (E) 
  {
         case 2:
              for (i=1;i<=E*E;++i){
                  S[i]=0;}
              for (i=1;i<=E*E;++i){
                  B[i]=0;}
              for (i=1;i<=E*E;++i){
                  T[i]=0;}
                  
              for(i=1;i<=E*E;++i){
                                system("cls");
                                printf("A  B   S\n");
                                printf("0  0   %i\n",S[1]);
                                printf("0  1   %i\n",S[2]); 
                                printf("1  0   %i\n",S[3]); 
                                printf("1  1   %i\n",S[4]);  
                                
                                printf("Digite o valor da saida %i :",i);
                                scanf(" %i",&S[i]);
                                if (S[i]==1)
                                ++n;  //numero de niveis altos
                                }
                                
                                system("cls");
                                printf("A  B   S\n");
                                printf("0  0   %i\n",S[1]);
                                printf("0  1   %i\n",S[2]); 
                                printf("1  0   %i\n",S[3]); 
                                printf("1  1   %i\n",S[4]);
                                printf("\n\n\n");
                                printf(" n = %i \n\n",n);
                                printf("      B' |  B   \n ");
                                printf("     -----------\n");
                                printf(" A'  | %1i | %1i |\n",S[1],S[2]);
                                printf("----------------\n");
                                printf(" A   | %1i | %1i |\n",S[3],S[4]);
                                printf("     -----------\n");
                                //testes logicos para a suloção
                                
                                if (S[1]==1 && S[2]==1){  //duplas
                                strcat(solution,"+A'");
                                ++B[1];
                                ++B[2];
                                n-=2;
                                if(n<=0){
                                break;}
                                 }
                                 
                                 if (S[3]==1 && S[4]==1){
                                strcat(solution,"+A");
                                ++B[3];
                                ++B[4];
                                n-=2;
                                if(n<=0){
                                break;}
                                 }
                                 
                                 if (S[1]==1 && S[3]==1){
                                strcat(solution,"+B'");
                                ++B[1];
                                ++B[3];
                                n-=2;
                                if(n<=0){
                                break;}
                                 }
                                 
                                 if (S[2]==1 && S[4]==1){
                                strcat(solution,"+B");
                                ++B[2];
                                ++B[4];
                                n-=2;
                                if(n<=0){
                                break;}
                                 }
                                 
                                 if(S[1]==1){    //termos independentes
                                             if(B[1]==0){
                                                         strcat(solution,"+A'B'");
                                                         ++B[1];
                                                         n-=1;
                                                         if(n<=0){
                                                         break;}
                                                         }
                                                         }
                                 
                                 if(S[2]==1){
                                             if(B[2]==0){
                                                         strcat(solution,"+A'B");
                                                         ++B[2];
                                                         n-=1;
                                                         if(n<=0){
                                                         break;}
                                                         }
                                                         }
                                                         
                                 if(S[3]==1){
                                             if(B[3]==0){
                                                         strcat(solution,"+AB'");
                                                         ++B[3];
                                                         n-=1;
                                                         if(n<=0){
                                                         break;}
                                                         }
                                                         }
                                                         
                                 if(S[4]==1){
                                             if(B[4]==0){
                                                         strcat(solution,"+AB");
                                                         ++B[4];
                                                         n-=1;
                                                         if(n<=0){
                                                         break;}
                                                         }
                                                         }
                                  break;
                                  
          case 3:
               
               h=E*E-1;
               for (i=1;i<=E*E;++i){
                  S[i]=0;}
               for (i=1;i<=E*E;++i){
                  B[i]=0;}
               for (i=1;i<=E*E;++i){
                  T[i]=0;}
                  
              for(i=1;i<=(E*E-1);++i){
                                system("cls");
                                printf("A  B  C   S\n");
                                printf("0  0  0   %i\n",S[1]);
                                printf("0  0  1   %i\n",S[2]); 
                                printf("0  1  0   %i\n",S[3]);
                                printf("0  1  1   %i\n",S[4]);
                                printf("1  0  0   %i\n",S[5]);
                                printf("1  0  1   %i\n",S[6]);
                                printf("1  1  0   %i\n",S[7]);
                                printf("1  1  1   %i\n",S[8]);
                                
                                printf("Digite o valor da saida %i :",i);
                                scanf(" %i",&S[i]);
                                T[i]=S[i];
                                if (S[i]==1)
                                ++n;  //numero de niveis altos
                                }
               
                                system("cls");
                                printf("A  B  C   S\n");
                                printf("0  0  0   %i\n",S[1]);
                                printf("0  0  1   %i\n",S[2]); 
                                printf("0  1  0   %i\n",S[3]);
                                printf("0  1  1   %i\n",S[4]);
                                printf("1  0  0   %i\n",S[5]);
                                printf("1  0  1   %i\n",S[6]);
                                printf("1  1  0   %i\n",S[7]);
                                printf("1  1  1   %i\n",S[8]);
               
                                printf("\n\n\n");
                                printf(" n = %i \n\n",n);
                                
                                printf("        B'   |     B   \n ");
                                printf("    -----------------\n");
                                printf(" A'  | %1i | %1i | %1i | %1i |\n",S[1],S[2],S[4],S[3]);
                                printf("----------------------\n");
                                printf(" A   | %1i | %1i | %1i | %1i |\n",S[5],S[6],S[8],S[7]);
                                printf("     -----------------\n");
                                printf("     C'  |   C   |  C'  \n");
                                //testes logicos para a suloção
                                
                                
                                //começo das quadras
                                if (S[1]==1 && S[2]==1 && S[4]==1 && S[3]==1){  
                                strcat(solution,"+A'");
                                /*++B[1];
                                ++B[2];
                                ++B[3];
                                ++B[4];*/
                                --T[1];
                                --T[2];
                                --T[3];
                                --T[4];
                                n-=4;
                                if(n<=0){
                                break;}
                                 }
                                 
                                if (S[5]==1 && S[6]==1 && S[7]==1 && S[8]==1){  
                                strcat(solution,"+A");
                                /*++B[5];
                                ++B[6];
                                ++B[7];
                                ++B[8];*/
                                --T[5];
                                --T[6];
                                --T[7];
                                --T[8];
                                n-=4;
                                if(n<=0){
                                break;}
                                 }
                                 
                                if (S[1]==1 && S[2]==1 && S[5]==1 && S[6]==1){  
                                strcat(solution,"+B'");
                                /*++B[1];
                                ++B[2];
                                ++B[5];
                                ++B[6];*/
                                --T[1];
                                --T[2];
                                --T[5];
                                --T[6];
                                n-=4;
                                if(n<=0){
                                break;}
                                 }
                                 
                                if (S[4]==1 && S[3]==1 && S[7]==1 && S[8]==1){  
                                strcat(solution,"+B");
                                /*++B[4];
                                ++B[3];
                                ++B[7];
                                ++B[8];*/
                                --T[4];
                                --T[3];
                                --T[7];
                                --T[8];
                                n-=4;
                                if(n<=0){
                                break;}
                                 }
                                
                                if (S[1]==1 && S[5]==1 && S[7]==1 && S[3]==1){  
                                strcat(solution,"+C'");
                                /*++B[5];
                                ++B[1];
                                ++B[7];
                                ++B[3];*/
                                --T[5];
                                --T[1];
                                --T[7];
                                --T[3];
                                n-=4;
                                if(n<=0){
                                break;}
                                 }
                                 
                                if (S[2]==1 && S[4]==1 && S[6]==1 && S[8]==1){  
                                strcat(solution,"+C");
                                /*++B[2];
                                ++B[4];
                                ++B[6];
                                ++B[8];*/
                                --T[2];
                                --T[4];
                                --T[6];
                                --T[8];
                                n-=4;
                                if(n<=0){
                                break;}
                                 }
                                 //fim das quadras
                                
                                //começo das duplas
                                if (S[1]==1 && S[2]==1){  
                                    if (T[1]==1 || T[2]==1){
                                        j=h;    
                                        strcat(solution,"+A'B'");
                                        --T[1];
                                        --T[2];
                                        n-=2;
                                        for(i=1;i<=(E*E-1);++i){
                                                                if(T[i]==0)
                                                                --j;
                                                                }
                                        if(j==0){
                                        break;}
                                         }
                                         }
                                if (S[1]==1 && S[5]==1){  
                                    if (T[1]==1 || T[5]==1){
                                         j=h;   
                                        strcat(solution,"+B'C'");
                                        --T[1];
                                        --T[5];
                                        n-=2;
                                        for(i=1;i<=(E*E-1);++i){
                                                                if(T[i]==0)
                                                                --j;
                                                                }
                                        if(j==0){
                                        break;}
                                         }
                                         }
                                if (S[1]==1 && S[3]==1){  
                                    if (T[1]==1 || T[3]==1){
                                        j=h;    
                                        strcat(solution,"+A'C'");
                                        --T[1];
                                        --T[3];
                                        n-=2;
                                        for(i=1;i<=(E*E-1);++i){
                                                                if(T[i]==0)
                                                                --j;
                                                                }
                                        if(j==0){
                                        break;}
                                         }
                                         }
                                         
                                if (S[2]==1 && S[4]==1){     //
                                    if (T[2]==1 || T[4]==1){
                                        j=h;    
                                        strcat(solution,"+A'C");
                                        --T[2];
                                        --T[4];
                                        n-=2;
                                        for(i=1;i<=(E*E-1);++i){
                                                                if(T[i]==0)
                                                                --j;
                                                                }
                                        if(j==0){
                                        break;}
                                         }
                                         }
                                if (S[2]==1 && S[6]==1){  
                                    if (T[2]==1 || T[6]==1){
                                        j=h;    
                                        strcat(solution,"+B'C");
                                        --T[2];
                                        --T[6];
                                        n-=2;
                                        for(i=1;i<=(E*E-1);++i){
                                                                if(T[i]==0)
                                                                --j;
                                                                }
                                        if(j==0){
                                        break;}
                                         }
                                         }
                                         
                                if (S[4]==1 && S[3]==1){     //
                                    if (T[4]==1 || T[3]==1){
                                         j=h;   
                                        strcat(solution,"+A'B");
                                        --T[4];
                                        --T[3];
                                        n-=2;
                                        for(i=1;i<=(E*E-1);++i){
                                                                if(T[i]==0)
                                                                --j;
                                                                }
                                        if(j==0){
                                        break;}
                                         }
                                         }
                                if (S[4]==1 && S[8]==1){  
                                    if (T[4]==1 || T[8]==1){
                                         j=h;   
                                        strcat(solution,"+BC");
                                        --T[4];
                                        --T[8];
                                        n-=2;
                                        for(i=1;i<=(E*E-1);++i){
                                                                if(T[i]==0)
                                                                --j;
                                                                }
                                        if(j==0){
                                        break;}
                                         }
                                         }
                                         
                                if (S[3]==1 && S[7]==1){     //
                                    if (T[3]==1 || T[7]==1){
                                        j=h;    
                                        strcat(solution,"+BC'");
                                        --T[3];
                                        --T[7];
                                        n-=2;
                                        for(i=1;i<=(E*E-1);++i){
                                                                if(T[i]==0)
                                                                --j;
                                                                }
                                        if(j==0){
                                        break;}
                                         }
                                         }
                                         
                                
                                if (S[5]==1 && S[7]==1){     //
                                    if (T[5]==1 || T[7]==1){
                                        j=h;    
                                        strcat(solution,"+AC'");
                                        --T[5];
                                        --T[7];
                                        n-=2;
                                        for(i=1;i<=(E*E-1);++i){
                                                                if(T[i]==0)
                                                                --j;
                                                                }
                                        if(j==0){
                                        break;}
                                         }
                                         }
                                if (S[5]==1 && S[6]==1){     
                                    if (T[5]==1 || T[6]==1){
                                         j=h;   
                                        strcat(solution,"+AB'");
                                        --T[5];
                                        --T[6];
                                        n-=2;
                                        for(i=1;i<=(E*E-1);++i){
                                                                if(T[i]==0)
                                                                --j;
                                                                }
                                        if(j==0){
                                        break;}
                                         }
                                         }
                                         
                                if (S[6]==1 && S[8]==1){     //
                                    if (T[6]==1 || T[8]==1){
                                         j=h;   
                                        strcat(solution,"+AC");
                                        --T[6];
                                        --T[8];
                                        n-=2;
                                        for(i=1;i<=(E*E-1);++i){
                                                                if(T[i]==0)
                                                                --j;
                                                                }
                                        if(j==0){
                                        break;}
                                         }
                                         }
                                         
                                if (S[8]==1 && S[7]==1){     //
                                    if (T[8]==1 || T[7]==1){
                                         j=h;   
                                        strcat(solution,"+AB");
                                        --T[8];
                                        --T[7];
                                        n-=2;
                                        for(i=1;i<=(E*E-1);++i){
                                                                if(T[i]==0)
                                                                --j;
                                                                }
                                        if(j==0){
                                        break;}
                                         }
                                         }
                                 //fim das duplas
                                 
                                 //inicio dos termos independentes
                                  
                                 if(S[1]==1){
                                    if(T[1]==1){
                                       j=h;
                                       strcat(solution,"+A'B'C'");
                                       --T[1];
                                       n-=1;
                                       for(i=1;i<=(E*E-1);++i){
                                                                if(T[i]==0)
                                                                --j;
                                                                }
                                        if(j==0){
                                        break;}
                                       }
                                       }
                                  if(S[2]==1){
                                    if(T[2]==1){
                                       j=h;
                                       strcat(solution,"+A'B'C");
                                       --T[2];
                                       n-=1;
                                       for(i=1;i<=(E*E-1);++i){
                                                                if(T[i]==0)
                                                                --j;
                                                                }
                                        if(j==0){
                                        break;}
                                       }
                                       }
                                  
                                  if(S[3]==1){
                                    if(T[3]==1){
                                       j=h;
                                       strcat(solution,"+A'BC'");
                                       --T[3];
                                       n-=1;
                                       for(i=1;i<=(E*E-1);++i){
                                                                if(T[i]==0)
                                                                --j;
                                                                }
                                        if(j==0){
                                        break;}
                                       }
                                       } 
                                   if(S[4]==1){
                                    if(T[4]==1){
                                       j=h;
                                       strcat(solution,"+A'BC");
                                       --T[4];
                                       n-=1;
                                       for(i=1;i<=(E*E-1);++i){
                                                                if(T[i]==0)
                                                                --j;
                                                                }
                                        if(j==0){
                                        break;}
                                       }
                                       } 
                                   if(S[5]==1){
                                    if(T[5]==1){
                                       j=h;
                                       strcat(solution,"+AB'C'");
                                       --T[5];
                                       n-=1;
                                       for(i=1;i<=(E*E-1);++i){
                                                                if(T[i]==0)
                                                                --j;
                                                                }
                                        if(j==0){
                                        break;}
                                       }
                                       } 
                                   if(S[6]==1){
                                    if(T[6]==1){
                                       j=h;
                                       strcat(solution,"+AB'C");
                                       --T[6];
                                       n-=1;
                                       for(i=1;i<=(E*E-1);++i){
                                                                if(T[i]==0)
                                                                --j;
                                                                }
                                        if(j==0){
                                        break;}
                                       }
                                       } 
                                   if(S[7]==1){
                                    if(T[7]==1){
                                       j=h;
                                       strcat(solution,"+ABC'");
                                       --T[7];
                                       n-=1;
                                       for(i=1;i<=(E*E-1);++i){
                                                                if(T[i]==0)
                                                                --j;
                                                                }
                                        if(j==0){
                                        break;}
                                       }
                                       }  
                                   if(S[8]==1){
                                    if(T[8]==1){
                                       j=h;
                                       strcat(solution,"+ABC");
                                       --T[8];
                                       n-=1;
                                       for(i=1;i<=(E*E-1);++i){
                                                                if(T[i]==0)
                                                                --j;
                                                                }
                                        if(j==0){
                                        break;}
                                       }
                                       }
                                      //fim dos termos independentes
                                      break;
                                
          default :   break;
                              }
  if(E!=0){
  printf(" solution = %s \n",solution);
  system("PAUSE");}
  system("cls");
  for(i=0;i<=32;++i){
                     solution[i]=solution2[i];
                     }
  printf(" n = %i\n\n",n);
  n=0;
}
  system("PAUSE");	
  return 0;
}
