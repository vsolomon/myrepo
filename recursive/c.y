%{ 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

extern FILE *yyin;
extern FILE *yyout;
extern int yylineno;
int yylex(void);
int yyerror(char *s);

//Gia ton xeirismo twn anadromikwn synarthsewn	
int check = 0;
int low = 0;
int high = 100;
int begin = 1;
int iteration = 1;
char *rec;
char *name;
char *rec_func;
char *rec_funcDelete;
char *step;
char *temp; 
int declaratorCounter = 0;

void Copy(char *string, char *txt) {
	string = (char *)malloc(sizeof(char)*100);
	
	strcpy(string, txt);
	
}

int checkRecursive(char *fname, char *callname) {
	if (strcmp(fname, callname) == 0)
		return 1;
	else
		return 0;
}

void Include() {
	fprintf(yyout, "%s\n\n", "#include <svp/iomacros.h>");
}

void Thread() {
	fprintf(yyout, "sl_def (thread, void, sl_shparm(int, _s))\n");
	fprintf(yyout, "{\n");
	fprintf(yyout, "\tint s;\n");
	fprintf(yyout, "\tsl_index(%s);\n", rec);
	fprintf(yyout, "\ts = sl_getp(_s);\n");
	temp = strtok(rec_func, rec_funcDelete);
	strcat(temp, " s");
	fprintf(yyout, "\ts = x %s;\n", temp);
	fprintf(yyout, "\tsl_setp(_s, s);\n");
	fprintf(yyout, "}\n");
	fprintf(yyout, "%s\n\n\n", "sl_enddef");
}


void Main() {
	fprintf(yyout, "%s\n", "sl_def (t_main, void)");
	fprintf(yyout, "{\n");
	fprintf(yyout, "\tint N=%d;\n\n", high);
	fprintf(yyout, "\tif (N < %d) printf(\"%%d\\n\", -1);\n", low);
	fprintf(yyout, "\telse if (N > %d) printf(\"%%d\\n\", -2);\n", high);
	fprintf(yyout, "\telse\n");
	fprintf(yyout, "\t{\n");
	fprintf(yyout, "\t\tsl_create(,,1,N+1,%d,,,thread,s1_sharg(int, _s, 1));\n",iteration);
	fprintf(yyout, "\t\tsl_sync();\n");
	fprintf(yyout, "\t\tprintf(\"%%d\\n\", s1_geta(_s));\n");
	fprintf(yyout, "\t}\n");
	fprintf(yyout, "}\n");		
	fprintf(yyout, "%s\n", "sl_enddef");
}


%}

%union {
	char s[30];
};



%token IDENTIFIER CONSTANT STRING_LITERAL SIZEOF
%token PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN TYPE_NAME

%token TYPEDEF EXTERN STATIC AUTO REGISTER
%token CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token STRUCT UNION ENUM ELLIPSIS

%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%type<s> translation_unit primary_expression postfix_expression expression unary_expression unary_operator type_name additive_expression cast_expression multiplicative_expression shift_expression and_expression relational_expression equality_expression exclusive_or_expression inclusive_or_expression logical_or_expression logical_and_expression conditional_expression assignment_expression assignment_operator declaration_specifiers storage_class_specifier type_qualifier constant_expression declaration init_declarator_list type_specifier struct_or_union_specifier struct_or_union struct_declaration_list struct_declaration specifier_qualifier_list init_declarator function_definition declaration_list compound_statement declarator external_declaration jump_statement iteration_statement statement_list statement expression_statement selection_statement labeled_statement initializer_list initializer enum_specifier struct_declarator_list struct_declarator enumerator enumerator_list pointer direct_declarator parameter_type_list identifier_list parameter_list parameter_declaration abstract_declarator direct_abstract_declarator argument_expression_list type_qualifier_list


%start translation_unit
%%

primary_expression
	: IDENTIFIER	
{
	Copy($$, yylval.s);
}		
	| CONSTANT
{
	
	Copy($$, yylval.s);
}		
	| STRING_LITERAL
{
	
	Copy($$, yylval.s);
}		
	| '(' expression ')'	
{
	sprintf(temp, "(%s)", $2);
	Copy($$, temp);
	strcpy($$, temp);
}	
	;


postfix_expression
	: primary_expression
{
	
	Copy($$, $1);
}
	| postfix_expression '[' expression ']'
{
	sprintf(temp, "%s [%s]", $1, $3);
	Copy($$, temp);
}	
	| postfix_expression '(' ')'
{
	sprintf(temp, "%s()", $1);
	Copy($$, temp);
	strcpy($$, temp);
}	
	| postfix_expression '(' argument_expression_list ')'
{
	sprintf(temp, "%s(%s)", $1, $3);
	
	check += checkRecursive(name, $1);
	Copy($$, temp);
	strcpy(rec_funcDelete, temp);
	strcpy($$, temp);
	iteration = atoi(step);
}	
	| postfix_expression '.' IDENTIFIER
{
	sprintf(temp, "%s.%s", $1, yylval.s);
	Copy($$, temp);
}	
	| postfix_expression PTR_OP IDENTIFIER
{
	sprintf(temp, "%s->%s", $1, yylval.s);
	Copy($$, temp);
}	
	| postfix_expression INC_OP
{
	sprintf(temp, "%s++", $1);
	Copy($$, temp);
}	
	| postfix_expression DEC_OP
{
	sprintf(temp, "%s--", $1);
	Copy($$, temp);
}	
	;

argument_expression_list
	: assignment_expression
{
	Copy($$, $1);
}
	| argument_expression_list ',' assignment_expression
{
	sprintf(temp, "%s, %s", $1, $3);
	Copy($$, temp);
}	
	;

unary_expression
	: postfix_expression
{

}	
	| INC_OP unary_expression
{
	sprintf(temp, "++%s", $2);
	Copy($$, temp);
}
	| DEC_OP unary_expression
{
	sprintf(temp, "--%s", $2);
	Copy($$, temp);
}
	| unary_operator cast_expression
{
	sprintf(temp, "%s%s", $1, $2);
	Copy($$, temp);
}
	| SIZEOF unary_expression
{
	sprintf(temp, "sizeof %s", $2);
	Copy($$, temp);
}
	| SIZEOF '(' type_name ')'
{
	sprintf(temp, "sizeof(%s)", $3);
	Copy($$, temp);
}	
	;

unary_operator
	: '&'
{
	sprintf(temp, "&");
	Copy($$, temp);
}		
	| '*'
{
	sprintf(temp, "*");
	Copy($$, temp);
}		
	| '+'
{
	sprintf(temp, "+");
	Copy($$, temp);
}		
	| '-'
{
	sprintf(temp, "-");
	Copy($$, temp);
}		
	| '~'
{
	sprintf(temp, "~");
	Copy($$, temp);
}		
	| '!'
{
	sprintf(temp, "!");
	Copy($$, temp);
}		
	;

cast_expression
	: unary_expression
{

}
	| '(' type_name ')' cast_expression
{
	sprintf(temp, "(%s)%s", $2, $4);
	Copy($$, temp);
}	
	;

multiplicative_expression
	: cast_expression
{
	Copy($$, $1);
	strcpy(step, $1);
}
	| multiplicative_expression '*' cast_expression
{
	sprintf(temp, "%s * %s", $1, $3);
	Copy($$, temp);
	strcpy($$, temp);
}	
	| multiplicative_expression '/' cast_expression
{
	sprintf(temp, "%s / %s", $1, $3);
	Copy($$, temp);
	strcpy($$, temp);
}	
	| multiplicative_expression '%' cast_expression
{
	sprintf(temp, "%s %%% s", $1, $3);
	Copy($$, temp);
	strcpy($$, temp);
}	
	;

additive_expression
	: multiplicative_expression
{
	Copy($$, $1);
}
	| additive_expression '+' multiplicative_expression
{
	sprintf(temp, "%s + %s", $1, $3);
	Copy($$, temp);
	strcpy($$, temp);
}	
	| additive_expression '-' multiplicative_expression
{
	sprintf(temp, "%s - %s", $1, $3);
	Copy($$, temp);
	strcpy($$, temp);
}	
	;

shift_expression
	: additive_expression
{
	Copy($$, $1);	
}	
	| shift_expression LEFT_OP additive_expression
{
	sprintf(temp, "%s<<%s", $1, $3);
	Copy($$, temp);
	strcpy($$, temp);
}		
	| shift_expression RIGHT_OP additive_expression
{
	sprintf(temp, "%s>>%s", $1, $3);
	Copy($$, temp);
	strcpy($$, temp);
}		
	;

relational_expression
	: shift_expression
{
	Copy($$, $1);
}		
	| relational_expression '<' shift_expression
{
	sprintf(temp, "%s < %s", $1, $3);
	high = atoi($3);
	Copy($$, temp);
	strcpy($$, temp);
}		
	| relational_expression '>' shift_expression
{
	sprintf(temp, "%s > %s", $1, $3);
	low = atoi($3);	
	Copy($$, temp);
	strcpy($$, temp);
}		
	| relational_expression LE_OP shift_expression
{
	sprintf(temp, "%s <= %s", $1, $3);
	Copy($$, temp);
	high = atoi($3)+1;	
	strcpy($$, temp);
}		
	| relational_expression GE_OP shift_expression
{
	sprintf(temp, "%s >= %s", $1, $3);
	Copy($$, temp);
	low = atoi($3)-1;		
	strcpy($$, temp);
}		
	;

equality_expression
	: relational_expression
{
	Copy($$, $1);
}	
	| equality_expression EQ_OP relational_expression
{
	sprintf(temp, "%s == %s", $1, $3);
	Copy($$, temp);
	strcpy($$, temp);
}		
	| equality_expression NE_OP relational_expression
{
	sprintf(temp, "%s != %s", $1, $3);
	Copy($$, temp);
	strcpy($$, temp);
}		
	;

and_expression
	: equality_expression
{	
	Copy($$, $1);
}		
	| and_expression '&' equality_expression
{
	sprintf(temp, "%s & %s", $1, $3);
	Copy($$, temp);
}		
	;

exclusive_or_expression
	: and_expression
{
	Copy($$, $1);
}		
	| exclusive_or_expression '^' and_expression
{
	sprintf(temp, "%s ^ %s", $1, $3);
	Copy($$, temp);
}	
	;

inclusive_or_expression
	: exclusive_or_expression
{
	Copy($$, $1);
}	
	| inclusive_or_expression '|' exclusive_or_expression
{
	sprintf(temp, "%s | %s", $1, $3);
	Copy($$, temp);
}	
	;

logical_and_expression
	: inclusive_or_expression
{
	Copy($$, temp);
}		
	| logical_and_expression AND_OP inclusive_or_expression
{
	sprintf(temp, "%s && %s", $1, $3);
	Copy($$, temp);
}	
	;

logical_or_expression
	: logical_and_expression
{
	Copy($$, $1);
}	
	| logical_or_expression OR_OP logical_and_expression
{
	sprintf(temp, "%s || %s", $1, $3);
	Copy($$, temp);
}	
	;

conditional_expression
	: logical_or_expression
{
	Copy($$, $1);
}	
	| logical_or_expression '?' expression ':' conditional_expression
{
	sprintf(temp, "%s ? %s : %s", $1, $3, $5);
	Copy($$, temp);
}	
	;

assignment_expression
	: conditional_expression
{
	Copy($$, $1);
	strcpy($$, $1);
}		
	| unary_expression assignment_operator assignment_expression
{
	sprintf(temp, "%s %s %s", $1, $2, $3);
	Copy($$, temp);
	strcpy($$, temp);
}		
	;

assignment_operator
	: '='
{
	Copy($$, "=");
}		
	| MUL_ASSIGN
{
	Copy($$, "*=");
}	
	| DIV_ASSIGN
{
	Copy($$, "/=");
}	
	| MOD_ASSIGN
{
	Copy($$, "%=");
}	
	| ADD_ASSIGN
{
	Copy($$, "+=");
}	
	| SUB_ASSIGN
{
	Copy($$, "-=");
}	
	| LEFT_ASSIGN
{
	Copy($$, "<<=");
}	
	| RIGHT_ASSIGN
{
	Copy($$, ">>=");
}	
	| AND_ASSIGN
{
	Copy($$, "&=");
}	
	| XOR_ASSIGN
{
	Copy($$, "^=");
}	
	| OR_ASSIGN
{
	Copy($$, "|=");
}	
	;

expression
	: assignment_expression
{
	Copy($$, $1);
}		
	| expression ',' assignment_expression
{
	sprintf(temp, "%s, %s ", $1, $3);
	Copy($$, temp);
}	
	;

constant_expression
	: conditional_expression
{
	Copy($$, $1);
}		
	;

declaration
	: declaration_specifiers ';'
{
	sprintf(temp, "%s;", $1);
	Copy($$, temp);
}	
	| declaration_specifiers init_declarator_list ';'
{
	sprintf(temp, "%s %s;", $1, $2);
	Copy($$, temp);
}	
	;

declaration_specifiers
	: storage_class_specifier
{
	Copy($$, $1);
}	
	| storage_class_specifier declaration_specifiers
{
	sprintf(temp, "%s %s ", $1, $2);
	Copy($$, temp);
}
	| type_specifier
{
	Copy($$, $1);
}
	| type_specifier declaration_specifiers
{
	sprintf(temp, "%s %s ", $1, $2);
	Copy($$, temp);
}
	| type_qualifier
{
	Copy($$, $1);
}	
	| type_qualifier declaration_specifiers
{
	sprintf(temp, "%s %s ", $1, $2);
	Copy($$, temp);
}	
	;
	
init_declarator_list
	: init_declarator
{
	Copy($$, $1);
}		
	| init_declarator_list ',' init_declarator
{
	sprintf(temp, "%s, %s ", $1, $3);
	Copy($$, temp);
}		
	;

init_declarator
	: declarator
{
	Copy($$, $1);
}		
	| declarator '=' initializer
{
	sprintf(temp, "%s = %s ", $1, $3);
	Copy($$, temp);
}		
	;

storage_class_specifier
	: TYPEDEF
{
	Copy($$, yylval.s);
}	
	| EXTERN
{
	Copy($$, yylval.s);
}	
	| STATIC
{
	Copy($$, yylval.s);
}	
	| AUTO
{
	Copy($$, yylval.s);
}	
	| REGISTER
{
	Copy($$, yylval.s);
}	
	;

type_specifier
	: VOID
{
	Copy($$, yylval.s);
}	
	| CHAR
{
	Copy($$, yylval.s);
}	
	| SHORT
{
	Copy($$, yylval.s);
}	
	| INT
{
	Copy($$, yylval.s);
}	
	| LONG
{
	Copy($$, yylval.s);
}	
	| FLOAT
{
	Copy($$, yylval.s);
}	
	| DOUBLE
{
	Copy($$, yylval.s);
}	
	| SIGNED
{
	Copy($$, yylval.s);
}	
	| UNSIGNED
{
	Copy($$, yylval.s);
}
	| struct_or_union_specifier
{
	Copy($$, $1);
}		
	| enum_specifier
{
	Copy($$, $1);
}		
	| TYPE_NAME
{
	Copy($$, yylval.s);
}		
	;

struct_or_union_specifier
	: struct_or_union IDENTIFIER '{' struct_declaration_list '}'
{
	sprintf(temp, "%s %s (%s) ", $1, yylval.s, $4);
	Copy($$, temp);
}		
	| struct_or_union '{' struct_declaration_list '}'
{
	sprintf(temp, "%s (%s) ", $1, $3);
	Copy($$, temp);
}		
	| struct_or_union IDENTIFIER
{
	sprintf(temp, "%s %s ", $1, yylval.s);
	Copy($$, temp);
}		
	;

struct_or_union
	: STRUCT
{
	Copy($$, yylval.s);
}	
	| UNION
{
	Copy($$, yylval.s);
}		
	;

struct_declaration_list
	: struct_declaration
{
	Copy($$, $1);
}		
	| struct_declaration_list struct_declaration
{
	sprintf(temp, "%s %s ", $1, $2);
	Copy($$, temp);
}	
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list ';'
{
	sprintf(temp, "%s %s ;", $1, $2);
	Copy($$, temp);
}		
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
{
	sprintf(temp, "%s %s ", $1, $2);
	Copy($$, temp);
}		
	| type_specifier
{
	Copy($$, $1);
}	
	| type_qualifier specifier_qualifier_list
{
	sprintf(temp, "%s %s ", $1, $2);
	Copy($$, temp);
}	
	| type_qualifier
{
	Copy($$, $1);
}	
	;

struct_declarator_list
	: struct_declarator
{
	Copy($$, $1);
}		
	| struct_declarator_list ',' struct_declarator
{
	sprintf(temp, "%s, %s ", $1, $3);
	Copy($$, temp);
}		
	;

struct_declarator
	: declarator
{
	Copy($$, $1);
}		
	| ':' constant_expression
{
	sprintf(temp, ":%s ", $2);
	Copy($$, temp);
}		
	| declarator ':' constant_expression
{
	sprintf(temp, "%s:%s ", $1, $3);
	Copy($$, temp);
}		
	;

enum_specifier
	: ENUM '{' enumerator_list '}'
{
	sprintf(temp, "enum {%s}", $3);
	Copy($$, temp);
}		
	| ENUM IDENTIFIER '{' enumerator_list '}'
{
	sprintf(temp, "enum %s {%s} ", yylval.s, $4);
	Copy($$, temp);
}		
	| ENUM IDENTIFIER
{
	sprintf(temp, "enum %s ", yylval.s);
	Copy($$, temp);
}		
	;

enumerator_list
	: enumerator
{
	Copy($$, $1);
}	
	| enumerator_list ',' enumerator
{
	sprintf(temp, "%s, %s", $1, $3);
	Copy($$, temp);
}		
	;

enumerator
	: IDENTIFIER
{
	Copy($$, yylval.s);
}		
	| IDENTIFIER '=' constant_expression
{
	sprintf(temp, "%s = s", yylval.s, $3);
	Copy($$, temp);
}		
	;

type_qualifier
	: CONST
{
	Copy($$, "const");
}		
	| VOLATILE
{
	Copy($$, "volatile");
}		
	;

declarator
	: pointer direct_declarator
{
	sprintf(temp, "%s %s", $1, $2);
	if (declaratorCounter == 0) {
		strcpy(rec, $2);
		declaratorCounter++;
	}
	else if (declaratorCounter == 1) {
		strcpy(name, $2);
		declaratorCounter++;
	}	
	Copy($$, temp);
}		
	| direct_declarator
{
	if (declaratorCounter == 0) {
		
		strcpy(rec, $1);
		declaratorCounter++;
	}
	
	else if (declaratorCounter == 1) {
		
		strcpy(name, $1);
		declaratorCounter++;
	}
	Copy($$, $1);
}		
	;

direct_declarator
	: IDENTIFIER
{
	Copy($$, yylval.s);
}		
	| '(' declarator ')'
{
	sprintf(temp, "(%s)", $2);
	Copy($$, temp);
}		
	| direct_declarator '[' constant_expression ']'
{
	sprintf(temp, "%s [%s]", $1, $3);
	Copy($$, temp);
}		
	| direct_declarator '[' ']'
{
	sprintf(temp, "%s [ ]", $1);
	Copy($$, temp);
}		
	| direct_declarator '(' parameter_type_list ')'
{
	sprintf(temp, "%s (%s)", $1, $3);
	Copy($$, temp);
}		
	| direct_declarator '(' identifier_list ')'
{
	sprintf(temp, "%s (%s)", $1, $3);
	Copy($$, temp);
}		
	| direct_declarator '(' ')'
{
	sprintf(temp, "%s ()", $1);
	Copy($$, temp);
}		
	;

pointer
	: '*'
{
	Copy($$, "*");
}		
	| '*' type_qualifier_list
{
	sprintf(temp, "*%s", $2);
	Copy($$, temp);
}		
	| '*' pointer
{
	sprintf(temp, "*%s", $2);
	Copy($$, temp);
}		
	| '*' type_qualifier_list pointer
{
	sprintf(temp, "*%s", $2);
	Copy($$, temp);
}		
	;

type_qualifier_list
	: type_qualifier
{
	Copy($$, $1);
}		
	| type_qualifier_list type_qualifier
{
	sprintf(temp, "%s %s", $1, $2);
	Copy($$, temp);
}		
	;


parameter_type_list
	: parameter_list
{
	Copy($$, $1);
}		
	| parameter_list ',' ELLIPSIS
{
	sprintf(temp, "%s,...", $1);
	Copy($$, temp);
}		
	;

parameter_list
	: parameter_declaration
{
	Copy($$, $1);
}		
	| parameter_list ',' parameter_declaration
	;

parameter_declaration
	: declaration_specifiers declarator
{
	sprintf(temp, "%s %s", $1, $2);
	Copy($$, temp);
}		
	| declaration_specifiers abstract_declarator
{
	sprintf(temp, "%s %s", $1, $2);
	Copy($$, temp);
}		
	| declaration_specifiers
{
	Copy($$, $1);
}		
	;

identifier_list
	: IDENTIFIER
{
	Copy($$, yylval.s);
}		
	| identifier_list ',' IDENTIFIER
{
	sprintf(temp, "%s, %s", $1, yylval.s);
	Copy($$, temp);
}		
	;

type_name
	: specifier_qualifier_list
{
	Copy($$, $1);
}		
	| specifier_qualifier_list abstract_declarator
{
	sprintf(temp, "%s %s", $1, $2);
	Copy($$, temp);
}		
	;

abstract_declarator
	: pointer
{
	Copy($$, $1);
}		
	| direct_abstract_declarator
{
	Copy($$, $1);
}		
	| pointer direct_abstract_declarator
{
	sprintf(temp, "%s s%s", $1, $2);
	Copy($$, temp);
}		
	;

direct_abstract_declarator
	: '(' abstract_declarator ')'
{
	sprintf(temp, "(%s)", $2);
	Copy($$, temp);
}		
	| '[' ']'
{
	Copy($$, "[]");
}		
	| '[' constant_expression ']'
{
	sprintf(temp, "[%s]", $2);
	Copy($$, temp);
}		
	| direct_abstract_declarator '[' ']'
{
	sprintf(temp, "%s []", $1);
	Copy($$, temp);
}		
	| direct_abstract_declarator '[' constant_expression ']'
{
	sprintf(temp, "%s [%s]", $1, $3);
	Copy($$, temp);
}		
	| '(' ')'
{
	Copy($$, "()");
}		
	| '(' parameter_type_list ')'
{
	sprintf(temp, "(%s)", $2);
	Copy($$, temp);
}		
	| direct_abstract_declarator '(' ')'
{
	sprintf(temp, "%s ()", $1);
	Copy($$, temp);
}		
	| direct_abstract_declarator '(' parameter_type_list ')'
{
	sprintf(temp, "%s (%s)", $1, $3);
	Copy($$, temp);
}		
	;

initializer
	: assignment_expression
{
	Copy($$, $1);
}		
	| '{' initializer_list '}'
{
	sprintf(temp, "{%s}", $2);
	Copy($$, temp);
}		
	| '{' initializer_list ',' '}'
{
	sprintf(temp, "{%s, }", $2);
	Copy($$, temp);
}		
	;

initializer_list
	: initializer
{
	Copy($$, $1);
}		
	| initializer_list ',' initializer
{
	sprintf(temp, "%s, %s", $1, $3);
	Copy($$, temp);
}		
	;

statement
	: labeled_statement
{
	Copy($$, $1);
}		
	| compound_statement
{
	Copy($$, $1);
}		
	| expression_statement
{
	Copy($$, $1);
}		
	| selection_statement
{
	Copy($$, $1);
}		
	| iteration_statement
{
	Copy($$, $1);
}		
	| jump_statement
{
	Copy($$, $1);
}		
	;

labeled_statement
	: IDENTIFIER ':' statement
{
	sprintf(temp, "%s : %s", yylval, $3);
	Copy($$, temp);
}		
	| CASE constant_expression ':' statement
{
	sprintf(temp, "case %s : %s", $2, $4);
	Copy($$, temp);
}		
	| DEFAULT ':' statement
{
	sprintf(temp, "default : %s", $3);
	Copy($$, temp);
}		
	;

compound_statement
	: '{' '}'
{
	Copy($$, "{}");
}		
	| '{' statement_list '}'
{
	sprintf(temp, "{%s}", $2);
	Copy($$, temp);
}		
	| '{' declaration_list '}'
{
	sprintf(temp, "{%s}", $2);
	Copy($$, temp);
}		
	| '{' declaration_list statement_list '}'
{
	sprintf(temp, "{%s %s}", $2, $3);
	Copy($$, temp);
}		
	;

declaration_list
	: declaration
{
	sprintf(temp, "%s", $1);
	Copy($$, temp);
}		
	| declaration_list declaration
{
	sprintf(temp, "%s %s", $1, $2);
	Copy($$, temp);
}		
	;

statement_list
	: statement
{
	Copy($$, $1);
}		
	| statement_list statement
{
	sprintf(temp, "%s %s", $1, $2);
	Copy($$, temp);
}		
	;

expression_statement
	: ';'
{
	Copy($$, ";");
}		
	| expression ';'
{
	sprintf(temp, "%s;", $1);
	Copy($$, temp);
}		
	;

selection_statement
	: IF '(' expression ')' statement
{
	sprintf(temp, "if (%s) \n\t %s", $3, $5);
	Copy($$, temp);
}		
	| IF '(' expression ')' statement ELSE statement
{
	sprintf(temp, "if (%s) \n\t%s \nelse \n\t%s", $3, $5, $7);
	Copy($$, temp);
}		
	| SWITCH '(' expression ')' statement
{
	sprintf(temp, "switch(%s) %s", $3, $5);
	Copy($$, temp);
}		
	;

iteration_statement
	: WHILE '(' expression ')' statement
{
	sprintf(temp, "while (%s) \n\t%s ", $3, $5);
	Copy($$, temp);
}	
	| DO statement WHILE '(' expression ')' ';'
{
	sprintf(temp, "do \n\t %s \nwhile(%s);", $2, $5);
	Copy($$, temp);
}		
	| FOR '(' expression_statement expression_statement ')' statement
{
	sprintf(temp, "for (%s %s) \n\t%s ", $3, $4, $6);
	Copy($$, temp);
}		
	| FOR '(' expression_statement expression_statement expression ')' statement
{
	sprintf(temp, "for (%s %s %s) \n\t%s ", $3, $4, $5, $7);
	Copy($$, temp);
}		
	;

jump_statement
	: GOTO IDENTIFIER ';'
{
	sprintf(temp, "goto %s ;", yylval.s);
	Copy($$, temp);
}	
	| CONTINUE ';'
{
	Copy($$, "continue;");
}	
	| BREAK ';'
{
	Copy($$, "break;");
}	
	| RETURN ';'
{
	Copy($$, "return;");
}	
	| RETURN expression ';'
{
	sprintf(temp, "return %s ;", $2);
	if (check == 1) {
		strcpy(rec_func, $2);
		check++;
	}
	Copy($$, temp);
	strcpy($$, temp);
}	
	;

translation_unit
	: external_declaration
{
	Copy($$, $1);
}	
	| translation_unit external_declaration
{
	sprintf(temp, "%s %s", $1, $2);
	Copy($$, temp);
}	
	;

external_declaration
	: function_definition
{
	Copy($$, $1);
}	
	| declaration
{
	Copy($$, $1);
}	
	;


function_definition
	: declaration_specifiers declarator declaration_list compound_statement
{
	
	sprintf(temp, "%s %s %s %s", $1, $2, $3, $4);
	Copy($$, temp);

	strcpy(name, $2);
}	
	| declaration_specifiers declarator compound_statement
{
	
	sprintf(temp, "%s %s %s", $1, $2, $3);
	Copy($$, temp);

	strcpy(name, $2);
}	
	| declarator declaration_list compound_statement
{
	
	sprintf(temp, "%s %s %s", $1, $2, $3);
	Copy($$, temp);

	strcpy(name, $1);
}	
	| declarator compound_statement
{
	
	sprintf(temp, "%s %s", $1, $2);
	Copy($$, temp);

	strcpy(name, $1);
}	
	;

%%

#include <stdio.h>
#include <string.h>

extern char *yytext;
extern int yylineno;

int yyerror(char *s)
{
    fprintf(stderr, "%s at line %i, last token: %s\n", s, yylineno, yytext);
	return -1;
}

int main(int argc, char **argv)
{	
	
	temp = (char *)malloc(sizeof(char)*100);
	name = (char *)malloc(sizeof(char)*100);
	rec = (char *)malloc(sizeof(char)*100);
	rec_func = (char *)malloc(sizeof(char)*100);
	rec_funcDelete = (char *)malloc(sizeof(char)*100);
	step = (char *)malloc(sizeof(char)*100);
	
	yyin = fopen(argv[1], "r");
	sprintf(temp, "output");
	if ((yyout = fopen(temp, "w")) == NULL) {
		exit(-2);
	}	

	int syntax;
	syntax = yyparse();
	
	if (syntax == 0) {
		fprintf(stderr, "DONE!\n");
		if (check) {
			Include();
			Thread();
			Main();
		}
	}
	else {
		fprintf(stderr, "FAILED!\n");
	}
	
	fclose (yyin);
	fclose (yyout);
	
	return 0;
}


