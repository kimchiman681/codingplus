#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>

int main() {

    FILE* fp = fopen("LT.txt", "r");
    char str[100];
    int i, acc = 1, lines = 0, Lbegin[20] = { 0 };
    int p = 0;
    printf("현재 포인터 위치 : %d\n", p);
    printf("이동하고 싶은 크기를 입력하세요 : ");
    scanf("%d", &p);
    printf("현재 포인터 위치 : %d\n", p);
    fseek(fp, p, SEEK_SET);

    printf("%s \n", fgets(str, sizeof(str),fp));

	return 0;
}
