#include <stdio.h>

extern void* memset(void* dest, int val, size_t count);
extern void* memcpy(void* dest, void* source, size_t count);
extern void* memmove(void* dest, const void* src, size_t count);
extern int memcmp(const void* b1, const void* b2, size_t count);
int main() {
//    char val[10] = {0};
//    memset(val, 65, 9);
//    printf("%s\n", val);
//    char val2[10];
//    memcpy(val2, val, 10);
//    printf("%s\n", val2);
//    char overlap[11] = "ABCDEFGHIJ";
//    memmove(overlap, overlap + 5, 5);
//    printf("%s\n", overlap);
//    char overlap2[11] = "ABCDEFGHIJ";
//    memcpy(overlap, overlap + 5, 5);
//    printf("%s\n", overlap2);
//    printf("diff: %d\n", memcmp(val, "AAAAAAAAA", 9));
    char val[4096];
    for (size_t i = 0; i < 10000000; i++) {
        memset(val, 0, 4096);
    }
}