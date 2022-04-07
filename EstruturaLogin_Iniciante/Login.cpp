#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
#include<windows.h>
#include<conio.h>

 
 
 
main(){
 
       char c, login1[15], senha[15];
       int a=10;
       int i=0;
       int vsenha=0;
       
      while(vsenha==0) {
      printf("\n\t\tO GRUPO 13 TE DA BOAS VINDAS!\n\n digite seu usuario: "); system("color 0b");
      
	 
       
      gets(login1);
      printf("\n digite sua senha: "); system("color 0b");
       
       
       while((c=getch())!=13) { //13 = ENTER na tabela ASCII
           senha[i]=c;
           i++;
           printf("*");      //asterisco
           }
           
          senha[i]='\0';
          i=0;
          
      	 system("cls");
       
       a= strcmp(senha,"renata123"); 
       
       if(a==0){
	   printf("ACESSO PERMITIDO!");system("color 09");vsenha=1; Beep(1500,2000); 
	   }
	   
       else{
	   printf("%s  XX ACESSO NEGADO XX\n",senha);system("color 0c"); Beep(1200,200);
	   }
      
	   printf("\n");
 
       }
      	 system("pause");
       return 0;
}
