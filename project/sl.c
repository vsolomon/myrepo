// Ylopoihsh diaforon leitourgion gia thn ekfrash ths
// glossas C se glossa SL.
#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 100

// Merika define gia thn kataxorish stoixeion ths SL
#define SL_START_MAIN		"sl_def (t_main, void)"
#define SL_START_THREAD		"sl_def (thread, void, sl_shparm(int, _s))"
#define SL_START_THREAD1	"sl_def (thread, void, sl_shparm(int, _a), sl_shparm(int, _b))"
#define SL_END				"sl_enddef"
#define SL_INCLUDE			"#include <svp/iomacros.h>"
extern FILE *yyout;
// Dhloseis Prosorinon Metablhton
int isRecursive = 0;
// Times gia to Elaxisto kai to Megisto pou orizetai h anadromh
int minN = 0;
int maxN = 100;
// Times gia thn Enarxh kai to Bhma ths anadromikhs sunarthshs
int startN = 1;
int stepN = 1;
// To onoma ths metablhths pou xrhsimopoieitai sthn anadromh
char *rVariable;
// To onoma ths anadromikhs sunarthshs
char *functionName;
// To pos kaleitai h anadromikh sunarthsh (p.x. x*factorial(x-1) )
char *rFunction;
// To kommati ths sunarthshs pou tha prepei na diagrafei gia thn SL
char *rFunctionDelete;
// To bhma se sumboloseira
char *step;
char *temp;
// Metrhths me ton opoio anagnorizoume to onoma ths sunarthshs (1)
// kai to thn parametro ths (0) kai ta xehorizoume. 
int declaratorCounter = 0;


// Desmeush Xorou kai Dhmourgia Sumboloseiras apo 
// antigrafh ths txt
void Copy(char *string, char *txt) {
	string = (char *)malloc(sizeof(char)*MAX_LENGTH);
	
	strcpy(string, txt);
	
}

// Elegxos anadromikhs sunarthshs. Isxyei an h 
// sunarthsh (fname) kalei ton eauto ths (callname).
int checkRecursive(char *fname, char *callname) {
	if (strcmp(fname, callname) == 0)
		return 1;
	else
		return 0;
}

// Efarmogh ton include ths SL
void slIncludeCreate() {
	fprintf(yyout, "%s\n\n", SL_INCLUDE);
}

// Dhmiourgia ths thread sunarthshs ths SL
void slThreadCreate() {
	// Ektyposh Dhloshs Sunarthshs
	fprintf(yyout, "sl_def (thread, void, sl_shparm(int, _s))\n");
	fprintf(yyout, "{\n");
		// Dhlosh Metablhths
		fprintf(yyout, "\tint s;\n");
		fprintf(yyout, "\tsl_index(%s);\n", rVariable);
		fprintf(yyout, "\ts = sl_getp(_s);\n");
		
		// O Kodikas gia th sugkekrimenh sunarthsh
		temp = strtok(rFunction, rFunctionDelete);
		strcat(temp, " s");
		fprintf(yyout, "\ts = x %s;\n", temp);
		//
		fprintf(yyout, "\tsl_setp(_s, s);\n");
		
	fprintf(yyout, "}\n");
	// Ektyposh Teleutaias Grammhs. Kleisimo Sunarthshs
	fprintf(yyout, "%s\n\n\n", SL_END);
}


// Dhmiourgia ths main sunarthshs ths SL
void slMainCreate() {
	// Ektyposh Dhloshs Sunarthshs
	fprintf(yyout, "%s\n", SL_START_MAIN);
	fprintf(yyout, "{\n");
		// Arxikh Timh N
		fprintf(yyout, "\tint N=%d;\n\n", maxN);
		// An h timh einai kato apo to elaxisto...
		fprintf(yyout, "\tif (N < %d) printf(\"%%d\\n\", -1);\n", minN);
		// An h timh einai pano apo to megisto...
		fprintf(yyout, "\telse if (N > %d) printf(\"%%d\\n\", -2);\n", maxN);
		// Allios... anadromh
		fprintf(yyout, "\telse\n");
		fprintf(yyout, "\t{\n");
			fprintf(yyout, "\t\tsl_create(,,1,N+1,%d,,,thread,s1_sharg(int, _s, 1));\n", 
				stepN);
			fprintf(yyout, "\t\tsl_sync();\n");
			fprintf(yyout, "\t\tprintf(\"%%d\\n\", s1_geta(_s));\n");
		fprintf(yyout, "\t}\n");
	fprintf(yyout, "}\n");		
	// Ektyposh Teleutaias Grammhs. Kleisimo Sunarthshs
	fprintf(yyout, "%s\n", SL_END);
}

void printData() {
	FILE *fp;
	
	fp = fopen("data.txt", "w");
	fprintf(fp, "Function Name: %s\n", functionName);
	fprintf(fp, "Is Recursive : ");
	if (isRecursive == 0) 
		fprintf(fp, "NO\n");
	else {
		fprintf(fp, "YES\n");
		fprintf(fp, "Variable     : %s\n", rVariable);
		fprintf(fp, "Function     : %s\n", rFunction);
		fprintf(fp, "Valid Range  : [%d %d]\n", minN, maxN);
	}
	fclose(fp);
}
