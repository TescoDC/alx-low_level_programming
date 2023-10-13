#include <stdio.h>
int _isupper(int c){
	if (c >= 'A' && c <= 'Z'){
		return 1; //Uppercase character
	}else {
		return 0; //Not an uppercase character
	}
}
int main(){
	char character = 'A';
	int result = _isupper(character);
	if (result == 1){
		printf("%c is an uppercase character. /n", character);
	} else {
		printf("%c is not an uppercase character. /n", character);
	}
	return 0;
}
