#include <cstdio>
#include <cstring>

#include <vector>

using namespace std;

void f(char *input){
	char ans[100] = {0};
	int len = strlen(input);
	for(int i = 0; i < len; ++i){
		ans[i] = input[len-1-i];
	}
	strcpy(input, ans);
	return;
}

void f2(char *input){
	char ans[100] = {0};
	int len = strlen(input);
		
	char *p = strtok(input, " ");
	// char *q = p;
	while(p != NULL){
		// printf("%s\n", p);
		f(p);
		// printf("%s\n", p);
		p = strtok(NULL, " ");
		// q = p;
	}

	for(int i = 0; i < len; ++i){
		if(input[i] == 0) input[i] = ' ';
	}
}

int main(int argc, char *argv[]){
	char t1[100] = "abcdefg";
	printf("t1 = %s\n", t1);
	f(t1);
	printf("t1 = %s\n", t1);

	char t2[100] = "asdfhjka asdjkhf fashjdfah fahsjfd";
	printf("t2 = %s\n", t2);
	f2(t2);
	printf("t2 = %s\n", t2);

	return 0;
}