
void limpar(void){
	system("cls");
}


void bemVindo(void){
	printf("=========================================================\n");
    printf("\t  BEM-VINDO À SIMULAÇÃO DA URNA ELETRÔNICA DO GOIAS\n");
    printf("      Trabalho de Algoritmos e Programação - UNICEPLAC\n");
    printf("\t   Professor: Mr. Pedro Manoel\n");
    printf("=========================================================\n");
}

void menu(void){
	printf("\a=======================================\n");
    printf("  SIMULADOR DE URNA ELETRÔNICA DO GOIAS\n");
    printf("=======================================\n\n");
    printf("ESCOLHA UMA OPÇÃO:\n");
    printf("1 - Iniciar nova votação\n");
    printf("2 - Exibir menu de candidatos\n");
    printf("3 - Finalizar votação e exibir resultados\n");
    printf("0 - Sair do programa\n\n");
    printf("Digite sua opção: ");
}

int reinicia(void){
	int op;
	sleep(1);
	printf("\n\a====================================================");
    printf("\n");
    printf("\n    Deseja realizar a operação novamente?");
    printf("\n");
    printf("\n      [1] - Sim");
    printf("\n      [0] - Nao");
    printf("\n");
    printf("\n====================================================\n");
	scanf("%i", &op);
	if (op==0){
		printf("\n\n\nEncerrando o programa...");
		sleep(1);
		printf("\a");
		exit(0);
		system("cls");	
	}else{
		printf("Reiniciando........");
		sleep(1);
		printf("\a");
		system("cls");
	}
	
	return op;
}

void menuSenadores(void){
	printf("+------------------------------------------+\n");
   	printf("¦       VOTAÇÃO PARA SENADOR               ¦\n");
   	printf("¦           Estado de Goiás                ¦\n");
    printf("+------------------------------------------+\n\n");
    verVotosSenadores();
    sleep(1);
    printf("\nOBS.:Para votar em BRANCO, digite [0]\n");
    printf("Digite o número do seu candidato (ex: 150)\n\n");
}

void menuPresidente(void){
	printf("+------------------------------------------+\n");
 	printf("¦       VOTAÇÃO PARA PRESIDENTE            ¦\n");
   	printf("¦           Estado de Goiás                ¦\n");
   	printf("+------------------------------------------+\n\n");
    verVotosPresidente();
    sleep(1);
    printf("\nOBS.:Para votar em BRANCO, digite [0]\n");
    printf("Digite o número do seu candidato (ex: 150)\n\n");
}

int verVotosSenadores(void){
	int opc;
	sleep(1);
	printf("\n\a====================================================");
    printf("\n");
    printf("\n    Deseja ver o menu de candidatos?");
    printf("\n");
    printf("\n      [1] - Sim");
    printf("\n      [0] - Nao");
    printf("\n====================================================\n");
	scanf("%i", &opc);
	if (opc==1){
		printf("\a");
		senadores();
		sleep(1);
	}
	return opc;
}

int verVotosPresidente(void){
	int opcd;
	sleep(1);
	printf("\n\a====================================================");
        printf("\n");
        printf("\n    Deseja ver o menu de candidatos?");
        printf("\n");
        printf("\n      [1] - Sim");
        printf("\n      [0] - Nao");
        printf("\n====================================================\n");
		scanf("%i", &opcd);
	if (opcd==1){
		printf("\a");
		presidente();
		sleep(1);			
	}
	
	return opcd;
}

void senadores(void){
		printf("=========================================================\n");
		printf("                  SENADORES DO GOIÁS\n");
		printf("=========================================================\n");
		printf("  Candidatos ao Senado em Goiás:\n");
		printf("  Agenor (MDB)................... 150\n");
		printf("  Fabrício Rosa (PSOL)........... 500\n");
		printf("  Jorge Kajuru (PRP)............. 444\n");
		printf("  Lúcia Vânia (PSB).............. 405\n");
		printf("  Luis César Bueno (PT).......... 135\n");
		printf("  Marconi Perillo (PSDB)......... 456\n");
		printf("  Prof. Alessandro Aquino (PCO).. 290\n");
		printf("  Professora Geli (PT)........... 131\n");
		printf("  Professora Magda Borges (PCB).. 210\n");
		printf("  Santana Pires (Patriota)....... 510\n");
		printf("  Vanderlan (PP)................. 111\n");
		printf("  Wilder Morais (DEM)............ 251\n");
		printf("=========================================================\n");
}
void presidente(void){
		printf("=========================================================\n");
		printf("                 VOTAÇÃO PARA PRESIDENTE\n");
		printf("=========================================================\n");
		printf("  Candidatos à Presidência:\n");
		printf("  Bolsonaro.................. 17\n");
		printf("  HADDAD..................... 13\n");
		printf("  CIRO....................... 12\n");
		printf("  BOULOS..................... 50\n");
		printf("  CABO DACIOLO............... 51\n");
		printf("  MARINA SILVA............... 18\n");
		printf("  GERALDO ALCKMIN............ 45\n");
		printf("  ALVARO DIAS................ 19\n");
		printf("  HENRIQUE MEIRELLES......... 15\n");
		printf("  JOAO AMOEDO................ 30\n");
		printf("=========================================================\n");
}

