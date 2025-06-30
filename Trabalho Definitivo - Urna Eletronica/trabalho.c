#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include "trabalho.h" 

/*
  Integrantes do Grupo: 
  Arthur Tavares Mendonça
  Isaque Caios Mota Leal
  Gabriel Silva
  Matheus Mendes de Carvalho
  Samara Vitória Matos Nascimento
  Gustavo Viana Pereira
*/

int main(void){
	int escolhaMenu, continuar, i=0;
	int votoConfirmadoSenador, votoConfirmadoPresidente;
	
	
    int votosAgenor = 0, votosFabricioRosa = 0, votosJorgeKajuru = 0;
    int votosLuciaVania = 0, votosLuisCesarBueno = 0, votosMarconiPerillo = 0;
    int votosProfAlessandro = 0, votosProfGeli = 0, votosProfMagdaBorges = 0;
    int votosSantanaPires = 0, votosVanderlan = 0, votosWilderMorais = 0;
    
    int votosBolsonaro = 0,votosHaddad = 0, votosCiro = 0, votosBoulos = 0;
    int votosDaciolo = 0,votosMarina = 0,votosAlckmin = 0,votosAlvaro = 0;
    int votosMeirelles = 0, votosAmoedo = 0;
    
	int votosBrancos = 0, votosNulos = 0;
    
	setlocale(LC_ALL, "Portuguese");
		
	bemVindo();
    
	printf("Digite [1] para CONTINUAR ==> ");
    scanf("%i", &continuar);
    if(continuar != 1){
    	exit(0);
	}		
		
	do{	
		limpar();
		menu();
        scanf("%i", &escolhaMenu);
        
		switch(escolhaMenu){
        	case 1:
        		do { // MELHORIA: Loop para permitir a correção do voto
                    limpar();
                    menuSenadores();
                    scanf("%i", &votoConfirmadoSenador);
                    
					switch (votoConfirmadoSenador) {
				        case 150: votosAgenor++; break;
	                    case 500: votosFabricioRosa++; break;
	                    case 444: votosJorgeKajuru++; break;
	                    case 405: votosLuciaVania++; break;
	                    case 135: votosLuisCesarBueno++; break;
	                    case 456: votosMarconiPerillo++; break;
	                    case 290: votosProfAlessandro++; break;
	                    case 131: votosProfGeli++; break;
	                    case 210: votosProfMagdaBorges++; break;
	                    case 510: votosSantanaPires++; break;
	                    case 111: votosVanderlan++; break;
	                    case 251: votosWilderMorais++; break;
	                    case 0:   votosBrancos++; break;
	                    default:  votosNulos++; break;
				    }
					i++;
       				printf("\aVoto registrado com sucesso!\n");
       				sleep(1);
       				
            	} while(i<2);
            	i=0;
            	limpar();
            	menuPresidente();
                scanf("%i", &votoConfirmadoPresidente);
            	switch (votoConfirmadoPresidente) {
	                case 17: votosBolsonaro++; break;
	                case 13: votosHaddad++; break;
	            	case 12: votosCiro++; break;      
                    case 50: votosBoulos++; break;     
                    case 51: votosDaciolo++; break;    
                    case 18: votosMarina++; break;     
                    case 45: votosAlckmin++; break;    
                    case 19: votosAlvaro++; break;     
                    case 15: votosMeirelles++; break;  
                    case 30: votosAmoedo++; break;     
	                case 0:  votosBrancos++; break;
	                default: votosNulos++; break;   
                }
                printf("\nVOTAÇÃO DESTE ELEITOR CONCLUÍDA!\n");
                
                reinicia();
                
			break;
				
		    
        	case 2:
        		limpar();
        		senadores();
        		presidente();
				reinicia();	
			break;
				
			case 3:
				limpar();
			    printf("\n=========================================================\n");
				printf("                 APURAÇÃO FINAL DOS VOTOS\n");
				printf("=========================================================\n\n");
				printf("------------- RESULTADO PARA SENADOR (GOIÁS) -------------\n");
				printf("Agenor.........................: %i votos\n", votosAgenor);
				printf("Fabrício Rosa..................: %i votos\n", votosFabricioRosa);
				printf("Jorge Kajuru...................: %i votos\n", votosJorgeKajuru);
				printf("Lúcia Vânia....................: %i votos\n", votosLuciaVania);
				printf("Luis César Bueno...............: %i votos\n", votosLuisCesarBueno);
				printf("Marconi Perillo................: %i votos\n", votosMarconiPerillo);
				printf("Prof. Alessandro Aquino........: %i votos\n", votosProfAlessandro);
				printf("Professora Geli................: %i votos\n", votosProfGeli);
				printf("Professora Magda Borges........: %i votos\n", votosProfMagdaBorges);
				printf("Santana Pires..................: %i votos\n", votosSantanaPires);
				printf("Vanderlan......................: %i votos\n", votosVanderlan);
				printf("Wilder Morais..................: %i votos\n", votosWilderMorais);
				printf("\n------------- RESULTADO PARA PRESIDENTE ----------------\n");
				printf("Bolsonaro......................: %i votos\n", votosBolsonaro);
				printf("HADDAD.........................: %i votos\n", votosHaddad);
				printf("CIRO...........................: %i votos\n", votosCiro);
				printf("BOULOS.........................: %i votos\n", votosBoulos);
				printf("CABO DACIOLO...................: %i votos\n", votosDaciolo);
				printf("MARINA SILVA...................: %i votos\n", votosMarina);
				printf("GERALDO ALCKMIN................: %i votos\n", votosAlckmin);
				printf("ÁLVARO DIAS....................: %i votos\n", votosAlvaro);
				printf("HENRIQUE MEIRELLES.............: %i votos\n", votosMeirelles);
				printf("JOÃO AMOEDO....................: %i votos\n", votosAmoedo);  
				printf("\n---------------------------------------------------------\n");
				printf("TOTAL DE VOTOS EM BRANCO.......: %i votos\n", votosBrancos);
				printf("TOTAL DE VOTOS NULOS...........: %i votos\n", votosNulos);
				printf("=========================================================\n");
				
				reinicia();
			break;
			
			case 0:
				printf("Saindo do programa...");
				exit(0);
				break;
		}	
	}while(1);

	return 0;
}
