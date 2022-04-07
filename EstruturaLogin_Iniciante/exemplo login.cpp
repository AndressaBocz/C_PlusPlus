#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
#include<windows.h>
#include<conio.h>
 
main(){
 
       char c, usuario[20], senha[20];
       int a=10;
       int i=0;
       int vsenha=0;
       
      while(vsenha==0) {
      printf("\n\t\tTURMA SI NOTURNO\n\n digite seu usuario: ");
       
       
      gets(usuario);
      printf("\n digite sua senha: ");
       
       
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
	   printf("SENHA CORRETA");system("color 0a");vsenha=1; Beep(1500,2000);
	   }
	   
       else{
	   printf("%s SENHA ERRADA\n",senha);system("color 0c"); Beep(1200,200);
	   }
      
	   printf("\n");
 
       }
      	 system("pause");
       return 0;
}
