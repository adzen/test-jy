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

int main(int argc, char *argv[]){
	char t1[100] = "abcdefg";
	printf("t1 = %s\n", t1);
	f(t1);
	printf("t1 = %s\n", t1);

	return 0;
}