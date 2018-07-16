#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main (){
char resp, inicio;
char cert='s';
int medio=0,facil=0,dificil=0,cont=0,nivel; //dificuldade do jogo
int certo_1=0,errado_1=0,contp_1=1,totp_1=1; //nivel1
int certo_2=0,errado_2=0,contp_2=1,totp_2=1; //nivel2
int certo_3=0,errado_3=0,contp_3=1,totp_3=1; //nivel3
printf ("-------------------------------------------------------------------------------\n");
printf ("O jogador devera escolher uma alternativa e, em seguida,\n");
printf ("pressionar \"enter\".\n\n");
printf ("O jogo possui 3 niveis de dificuldade:\n\n");
printf ("Nivel facil   - Cada resposta certa valera 2 pontos\n");
printf ("Nivel medio   - Cada resposta certa valera 4 pontos\n");
printf ("Nivel dificil - Cada resposta certa valera 6 pontos\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Boa sorte e bom jogo\n\n");
printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
dificuldade:
printf ("*-----------------------------*\n");
printf ("|	NIVEIS DE DIFICULDADE	|\n");
printf ("*-----------------------------*\n");
printf ("|  1 - NIVEL FACIL			|\n");
printf ("|  2 - NIVEL MEDIO			|\n");
printf ("|  3 - NIVEL DIFICIL		  |\n");
printf ("*-----------------------------*\n");
printf ("DESEJA JOGAR EM QUAL NIVEL? \n");
scanf ("%d",&nivel);
system("cls");
switch (nivel)
{
case 1 :
{
system("cls");
time_t tempo;struct tm *data;time(&tempo);
data = localtime(&tempo);
printf("*=============================================================================*\n\n");
printf("				O JOGADOR ESCOLHEU MODO FACIL	\n\n");

printf("*=============================================================================*\n\n");
printf ("			  AS PERGUNSTAS DE NIVEL \"FACIL\" VALEM 2 PONTOS CADA\n\n");

getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
printf ("Pergunta n. %.2d - Nivel Facil\n",contp_1++);
printf ("QUANTOS E 2+2?\n");
printf ("A) 5\n");
printf ("B) 7\n");
printf ("C) 4\n");
printf ("D) 2\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='c')||(resp='C'))
{
printf ("Resposta correta\n");
certo_1++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"c\"\n");
errado_1++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system("cls");
printf ("Pergunta n. %.2d - Nivel Facil\n",contp_1++);
printf ("CAMILA TEM 40 BALAS, DEU 15 PARA O SEU IRMAO E CHUPOU 5. COM QUANTAS BALAS CAMILA FICOU?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) 40\n");
printf ("B) 15\n");
printf ("C) 20\n");
printf ("D) 5\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='c')||(resp=='C'))
{
printf ("Resposta correta\n");
certo_1++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"c\"\n");
errado_1++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system("cls");
printf ("Pergunta n. %.2d - Nivel Facil\n",contp_1++);
printf ("QUAL O VALOR DE -56 + 56?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) 1\n");
printf ("B) 0\n");
printf ("C) 56\n");
printf ("D) 100\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='b')||(resp=='B'))
{
printf ("Resposta correta\n");
certo_1++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"B\"\n");
errado_1++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system("cls");
printf ("Pergunta n. %.2d - Nivel Facil\n",contp_1++);
printf ("QUAL O VALOR DE 25 - 15?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) 10\n");
printf ("B) 20\n");
printf ("C) 11\n");
printf ("D) 15\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='a')||(resp=='A'))
{
printf ("Resposta correta\n");
certo_1++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"A\"\n");
errado_1++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system("cls");
printf ("Pergunta n. %.2d - Nivel Facil\n",contp_1++);
printf ("BENJAMIN TEM 2 LARANJAS, 4 PERA E 1 MELANCIA. QUANTAS FRUTAS ELE TEM?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) 6\n");
printf ("B) 3\n");
printf ("C) 7\n");
printf ("D) 1\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='c')||(resp=='C'))
{
printf ("Resposta correta\n");
certo_1++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"C\"\n");
errado_1++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system("cls");
printf ("Pergunta n. %.2d - Nivel Facil\n",contp_1++);
printf ("QUAL O VALOR DE 10+20?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) 15\n");
printf ("B) 21\n");
printf ("C) 60\n");
printf ("D) 30\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='d')||(resp=='D'))
{
printf ("Resposta correta\n");
certo_1++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"D\"\n");
errado_1++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system("cls");
printf ("Pergunta n. %.2d - Nivel Facil\n",contp_1++);
printf ("QUAL O VALOR DE 15-2+20?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) 35\n");
printf ("B) 27\n");
printf ("C) 33\n");
printf ("D) 37\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='c')||(resp=='C'))
{
printf ("Resposta correta\n");
certo_1++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"C\"\n");
errado_1++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system("cls");
printf ("Pergunta n. %.2d - Nivel Facil\n",contp_1++);
printf ("QUAL O VALOR DE 60-22?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) 39\n");
printf ("B) 55\n");
printf ("C) 38\n");
printf ("D) 20\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='c')||(resp=='C'))
{
printf ("Resposta correta\n");
certo_1++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"C\"\n");
errado_1++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
printf ("As pergunstas deste nivel terminaram.\n");
printf ("Deseja jogar em outro nivel (s/n)? ");
scanf ("%s",&resp);
if ((resp=='s')||(resp=='S'))
{
system ("cls");
totp_1=contp_1;
contp_1=1;
goto dificuldade;
}
break;
}  

/*Inicio do nível médio*/

case 2:
{
system("cls");
printf("*=============================================================================*\n");
printf("						O JOGADOR ESCOLHEU MODO MEDIO	\n\n");
printf("*=============================================================================*\n\n");
printf ("			  AS PERGUNSTAS DE NIVEL \"MEDIO\" VALEM 4 PONTOS CADA\n\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
printf ("Pergunta n. %.2d - Nivel Medio\n",contp_2++);
printf ("QUANTO É 2 X 5?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) 15\n");
printf ("B) 25\n");
printf ("C) 10\n");
printf ("D) 5\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='c')||(resp=='C'))
{
printf ("Resposta correta\n");
certo_2++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"C\"\n");
errado_2++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system("cls");
printf ("Pergunta n. %.2d - Nivel Medio\n",contp_2++);
printf ("QUAL O VALOR DE 5*5?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) 10\n");
printf ("B) 100\n");
printf ("C) 35\n");
printf ("D) 25\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='d')||(resp=='D'))
{
printf ("Resposta correta\n");
certo_2++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"D\"\n");
errado_2++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system("cls");
printf ("Pergunta n. %.2d - Nivel Medio\n",contp_2++);
printf ("QUAL O VALOR DE 30 X 2?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) 300\n");
printf ("B) 15\n");
printf ("C) 60\n");
printf ("D) 59\n");
printf ("--------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='c')||(resp=='C'))
{
printf ("Resposta correta\n");
certo_2++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"C\"\n");
errado_2++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system("cls");
printf ("Pergunta n. %.2d - Nivel Medio\n",contp_2++);
printf ("QUAL O VALOR DE 10 / 2?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) 10\n");
printf ("B) 20\n");
printf ("C) 0\n");
printf ("D) 5\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='d')||(resp=='D'))
{
printf ("Resposta correta\n");
certo_2++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"D\"\n");
errado_2++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system("cls");
printf ("Pergunta n. %.2d - Nivel Medio\n",contp_2++);
printf ("QUAL O VALOR DE 2 / 2?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) 10\n");
printf ("B) 4\n");
printf ("C) 2\n");
printf ("D) 1\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='d')||(resp=='D'))
{
printf ("Resposta correta\n");
certo_2++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"D\"\n");
errado_2++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system("cls");
printf ("Pergunta n. %.2d - Nivel Medio\n",contp_2++);
printf ("QUAL O VALOR DE 2 * 100?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) 1000\n");
printf ("B) 50\n");
printf ("C) 200\n");
printf ("D) N.D.A\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='c')||(resp=='C'))
{
printf ("Resposta correta\n");
certo_2++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"C\"\n");
errado_2++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system("cls");
printf ("Pergunta n. %.2d - Nivel Medio\n",contp_2++);
printf ("QUAL O VALOR DE 500 / 100?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) 100\n");
printf ("B) 1\n");
printf ("C) 5000\n");
printf ("D) N.D.A\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='d')||(resp=='D'))
{
printf ("Resposta correta\n");
certo_2++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"D\"\n");
errado_2++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system("cls");
printf ("Pergunta n. %.2d - Nivel Medio\n",contp_2++);
printf ("60 * 10?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) 6000\n");
printf ("B) 600\n");
printf ("C) 10\n");
printf ("D) 6\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='b')||(resp=='B'))
{
printf ("Resposta correta\n");
certo_2++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"B\"\n");
errado_2++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
printf ("As pergunstas deste nivel terminaram.\n");
printf ("Deseja jogar em outro nivel (s/n)? ");
scanf ("%s",&resp);
if ((resp=='s')||(resp=='S'))
{
system ("cls");
totp_2=contp_2;
contp_2=1;
goto dificuldade;
}
break;
}

/* Inicio do nível difícil */

case 3 :
{
system("CLS");
printf("*=============================================================================*\n");
printf("						O JOGADOR ESCOLHEU MODO DIFICIL	\n\n");
printf("*=============================================================================*\n\n");
printf ("			AS PERGUNSTAS DE NIVEL \"DIFICIL\" VALEM 6 PONTOS CADA\n\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
printf ("Pergunta n. %.2d - Nivel Dificil\n",contp_3++);
printf ("QUAL O VALOR DE 2^16? \n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) 65536\n");
printf ("B) 32\n");
printf ("C) 8962541\n");
printf ("D) N.D.A\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='a')||(resp=='A'))
{
printf ("Resposta correta\n");
certo_3++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"A\"\n");
errado_3++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
printf ("Pergunta n. %.2d - Nivel Dificil\n",contp_3++);
printf ("QUAL A RAIZ QUADRADA DE 9?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) 9\n");
printf ("B) 4\n");
printf ("C) 3\n");
printf ("D) 0\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='c')||(resp=='C'))
{
printf ("Resposta correta\n");
certo_3++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"C\"\n");
errado_3++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
printf ("Pergunta n. %.2d - Nivel Dificil\n",contp_3++);
printf ("*---------------------------------*\n\n");
printf ("5 * (2 + 8)\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) 50\n");
printf ("B) 18\n");
printf ("C) 42\n");
printf ("D) N.D.A\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='a')||(resp=='A'))
{
printf ("Resposta correta\n");
certo_3++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"A\"\n");
errado_3++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
printf ("Pergunta n. %.2d - Nivel Dificil\n",contp_3++);
printf ("QUAL NUMERO ABAIXO COMPLETA A SEQUENCIA A SEGUIR? 12 - 6 - 18 - 24 - ??\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) 24\n");
printf ("B) 6\n");
printf ("C) 42\n");
printf ("D) 36\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='c')||(resp=='C'))
{
printf ("Resposta correta\n");
certo_3++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"C\"\n");
errado_3++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
printf ("Pergunta n. %.2d - Nivel Dificil\n",contp_3++);
printf ("OITO AMIGOS SE ENCONTRAM E CADA UM CUMPRIMENTA O OUTRO COM UM APERTO DE MAO. QUANTOS APERTOS DE MAO SE TROCARAM?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) 28\n");
printf ("B) 64\n");
printf ("C) 8\n");
printf ("D) N.D.A\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='a')||(resp=='A'))
{
printf ("Resposta correta\n");
certo_3++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"A\"\n");
errado_3++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
printf ("Pergunta n. %.2d - Nivel Dificil\n",contp_3++);
printf ("QUANTO E 5% DE 200 REAIS?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) 5 REAIS\n");
printf ("B) 10 REAIS\n");
printf ("C) 20 REAIS\n");
printf ("D) 200 REAIS\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='b')||(resp=='B'))
{
printf ("Resposta correta\n");
certo_3++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"B\"\n");
errado_3++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
printf ("Pergunta n. %.2d - Nivel Dificil\n",contp_3++);
printf ("QUANTO É 5*2 + 10 / (1+1)?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) 55\n");
printf ("B) 10\n");
printf ("C) 20\n");
printf ("D) N.D.A\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='b')||(resp=='B'))
{
printf ("Resposta correta\n");
certo_3++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"B\"\n");
errado_3++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
printf ("As pergunstas deste nivel terminaram.\n");
printf ("Deseja jogar em outro nivel (s/n)? ");
scanf ("%s",&resp);
if ((resp=='s')||(resp=='S'))
{
system ("cls");
totp_3=contp_3;
contp_3=1;
goto dificuldade;
}
break;
}
default : printf ("Nivel invalido\n");
{
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
goto dificuldade;
}

}/*fechamento do 1º swhith*/

system("cls");
printf ("================ RESULTADOS DO JOGO =================\n");
printf ("Total de acertos.....: %d\n",certo_1+certo_2+certo_3);
printf ("Total de erros.......: %d\n",errado_1+errado_2+errado_3);
printf ("Pontuacao total......: %d\n\n",(certo_1*2)+(certo_2*4)+(certo_3*6));
printf ("--------------------- NIVEL FACIL -------------------\n");
printf ("Acertos..: %d\n",certo_1);
printf ("Erros....: %d\n",errado_1);
printf ("Pontuacao: %d\n\n",certo_1*2);
printf ("-------------------- NIVEL MEDIO --------------------\n");
printf ("Acertos..: %d\n",certo_2);
printf ("Erros....: %d\n",errado_2);
printf ("Pontuacao: %d\n\n",certo_2*4);
printf ("------------------- NIVEL DIFICIL -------------------\n");
printf ("Acertos..: %d\n",certo_3);
printf ("Erros....: %d\n",errado_3);
printf ("Pontuacao: %d\n",certo_3*6);
getchar();
getchar();

}


