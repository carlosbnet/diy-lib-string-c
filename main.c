#include <stdio.h>
#include <stdlib.h>

//----------funções Extra Lib String-----------------


char toUpper(char c);
char toLower(char c);
void strToUpper(char *src);
void strToLower(char *src);
void toReverse(char *src);
void removeCharDupli(char * str);
void removeNotChar(char * str);


//-------------Lib String-------------------------

int strlenC(const char * str);
char *strcatC(char *s1,char *s2);
void strcpyC(char *dest,char *src);
char *strchrC(const char *str,int c);
int strcmpC(const char* str1, const char * str2);




int main(void) {
  
	 char str1[] = "*N%a&o M&a*s(d% 123 ";
	 char str2[] = "voce";
	 char *str5 = (char*) malloc(10 * sizeof(char));
	 char str4[] = "vocee naoo queer ficarr  sim";
	//  char str2[] = "OnDe MoRo 1223";
	 char *str3 = malloc(11*sizeof(char));
	
	
	// removeCharDupli(str4);

/*
		 removeNotChar(str1);

		for(int i = 0;i < strlenC(str1);i++ )
			printf("%c",str1[i]);
*/


	// printf("%s", strcatC(str1, str2));

	// strcpyC(str3, str1);

	// printf("%s", str3);

	// strToUpper(str2);

	// strToLower(str2);

	// toReverse(str2);

	// printf("%s", str2);


  return 0;
}


//----------funções Extra Lib String-----------------


//Tranforma caracteres em maiusculas
char toUpper(char c){

	if(c >= 'a' && c <= 'z')
			c = c-32;	
	
	return c;
	
}

//Tranforma caracteres em minusculas
char toLower(char c){

	if(c >= 'A' && c <= 'Z')
			c = c+32;	
	
	return c;
	
}

//Tranforma tudo em letras maiusculas
void strToUpper(char *src){
	
	int i = 0;
	while(src[i] != '\0'){
		src[i] = toUpper(src[i]);
		i++;
	}

}

//Tranforma tudo em letras minusculas
void strToLower(char *src){
	
	int i = 0;
	while(src[i] != '\0'){
		src[i] = toLower(src[i]);
		i++;
	}

}

//Alterar a String para sua String reversa
void toReverse(char *src){

	int i = 0;
	int j = strlenC(src)-1;
	char temp;

	while(i <= j){

	temp = src[i];
	src[i] = src[j];
	src[j] = temp;
	i++;
	j--;
	}


}



void removeNotChar(char * str){

		for(int i= 0; str[i] != '\0'; i++)
			if(!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9') || (str[i] == 32 )))
				for(int j = i; str[j] != '\0'; j++ )
						str[j] = str[j+1];

}


void removeCharDupli(char * str){

		for(int i= 0; str[i] != '\0'; i++)
			if(str[i] == str[i+1])
				for(int j = i; str[j] != '\0'; j++ )
						str[j] = str[j+1];

}




//--------------lib String-------------


//Retorna a quantidade de elementos da string ou array;
int strlenC(const char * str){

	int i;

	for(i = 0;str[i] != '\0';i++);
	
	return i;

}

//Concatena String
char *strcatC(char *s1,char *s2) {
  
	char *s = malloc((strlenC(s1) + strlenC(s2)) * sizeof(char));
  
	size_t i,j;
	
		for(i = 0; s1[i] != '\0'; i++)
				s[i] = s1[i];

		for(j = 0; s2[j] != '\0';j++)
				s[i+j] = s2[j];


  return s;
}

//Copia uma String para outra
void strcpyC(char *dest,char *src){

	for(int i= 0; i < strlenC(src);i++)
			dest[i] = src[i];

}

//Busca char e retorna a primeira ocorrencia
char *strchrC(const char *str,int c){

	size_t i=0;

	while(i < strlenC(str)){
			if(str[i] == c && ((c >= 'a' && c <= 'z') || (c >='A' && c <='Z')))
				return str+i; //Ver depois
		i++;
		}
	
	return NULL;

}


//Compara duas strings
int strcmpC(const char* str1, const char * str2){

	int i = 0;

	while(str1[i] != '\0' || str2[i] != '\0'){

		if(!(str1[i] == str2[i])){
			
				if(str1[i] < str2[i])
					return -str2[i];			
			

				if(str2[i] < str1[i])
					return  str1[i];			
		}

		i++;

	}


return 0;


}
