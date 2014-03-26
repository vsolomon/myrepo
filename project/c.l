

D			[0-9]
L			[a-zA-Z_]
H			[a-fA-F0-9]
E			[Ee][+-]?{D}+
FS			(f|F|l|L)
IS			(u|U|l|L)*

COMMENT 	(\/\/).+
MCOMMENT 	(\/\*(.|[\r\n])*\*\/)

%{
#include <stdio.h>
#include <string.h>
#include "c.hh"

void before();
%}

%%

{COMMENT} 		{/*do nothing*/}
{MCOMMENT}       {/*do nothing */}


"auto"			{ before(); return(AUTO); }
"break"			{ before(); return(BREAK); }
"case"			{ before(); return(CASE); }
"char"			{ before(); return(CHAR); }
"const"			{ before(); return(CONST); }
"continue"		{ before(); return(CONTINUE); }
"default"		{ before(); return(DEFAULT); }
"do"			{ before(); return(DO); }
"double"		{ before(); return(DOUBLE); }
"else"			{ before(); return(ELSE); }
"enum"			{ before(); return(ENUM); }
"extern"		{ before(); return(EXTERN); }
"float"			{ before(); return(FLOAT); }
"for"			{ before(); return(FOR); }
"goto"			{ before(); return(GOTO); }
"if"			{ before(); return(IF); }
"int"			{ before(); return(INT); }
"long"			{ before(); return(LONG); }
"register"		{ before(); return(REGISTER); }
"return"		{ before(); return(RETURN); }
"short"			{ before(); return(SHORT); }
"signed"		{ before(); return(SIGNED); }
"sizeof"		{ before(); return(SIZEOF); }
"static"		{ before(); return(STATIC); }
"struct"		{ before(); return(STRUCT); }
"switch"		{ before(); return(SWITCH); }
"typedef"		{ before(); return(TYPEDEF); }
"union"			{ before(); return(UNION); }
"unsigned"		{ before(); return(UNSIGNED); }
"void"			{ before(); return(VOID); }
"volatile"		{ before(); return(VOLATILE); }
"while"			{ before(); return(WHILE); }

{L}({L}|{D})*		{ before(); return(IDENTIFIER); }

0[xX]{H}+{IS}?		{ before(); return(CONSTANT); }
0{D}+{IS}?		{ before(); return(CONSTANT); }
{D}+{IS}?		{ before(); return(CONSTANT); }
L?'(\\.|[^\\'])+'	{ before(); return(CONSTANT); }

{D}+{E}{FS}?		{ before(); return(CONSTANT); }
{D}*"."{D}+({E})?{FS}?	{ before(); return(CONSTANT); }
{D}+"."{D}*({E})?{FS}?	{ before(); return(CONSTANT); }

L?\"(\\.|[^\\"])*\"	{ before(); return(STRING_LITERAL); }

"..."			{ before(); return(ELLIPSIS); }
">>="			{ before(); return(RIGHT_ASSIGN); }
"<<="			{ before(); return(LEFT_ASSIGN); }
"+="			{ before(); return(ADD_ASSIGN); }
"-="			{ before(); return(SUB_ASSIGN); }
"*="			{ before(); return(MUL_ASSIGN); }
"/="			{ before(); return(DIV_ASSIGN); }
"%="			{ before(); return(MOD_ASSIGN); }
"&="			{ before(); return(AND_ASSIGN); }
"^="			{ before(); return(XOR_ASSIGN); }
"|="			{ before(); return(OR_ASSIGN); }
">>"			{ before(); return(RIGHT_OP); }
"<<"			{ before(); return(LEFT_OP); }
"++"			{ before(); return(INC_OP); }
"--"			{ before(); return(DEC_OP); }
"->"			{ before(); return(PTR_OP); }
"&&"			{ before(); return(AND_OP); }
"||"			{ before(); return(OR_OP); }
"<="			{ before(); return(LE_OP); }
">="			{ before(); return(GE_OP); }
"=="			{ before(); return(EQ_OP); }
"!="			{ before(); return(NE_OP); }
";"			{ before(); return(';'); }
("{"|"<%")		{ before(); return('{'); }
("}"|"%>")		{ before(); return('}'); }
","			{ before(); return(','); }
":"			{ before(); return(':'); }
"="			{ before(); return('='); }
"("			{ before(); return('('); }
")"			{ before(); return(')'); }
("["|"<:")		{ before(); return('['); }
("]"|":>")		{ before(); return(']'); }
"."			{ before(); return('.'); }
"&"			{ before(); return('&'); }
"!"			{ before(); return('!'); }
"~"			{ before(); return('~'); }
"-"			{ before(); return('-'); }
"+"			{ before(); return('+'); }
"*"			{ before(); return('*'); }
"/"			{ before(); return('/'); }
"%"			{ before(); return('%'); }
"<"			{ before(); return('<'); }
">"			{ before(); return('>'); }
"^"			{ before(); return('^'); }
"|"			{ before(); return('|'); }
"?"			{ before(); return('?'); }

[ \t\v\n\f]		{ before(); }
.			{ /* ignore bad characters */ }

%%

void before()
{
	strcpy(yylval.s,yytext);
}




