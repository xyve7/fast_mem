#include <stdio.h>

extern void* my_memset(void* dest, int val, size_t count);
extern void* my_memcpy(void* dest, const void* source, size_t count);
extern void* my_memmove(void* dest, const void* src, size_t count);
extern int my_memcmp(const void* b1, const void* b2, size_t count);
extern void* my_memchr(const void* b1, int val, size_t count);
extern void* my_memrchr(const void* b1, int val, size_t count);
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
//    char val[4096];
//    for (size_t i = 0; i < 10000000; i++) {
//        my_memset(val, 0, 4096);
//    }
//    char* val = "Hello World!";
//    char* ptr = my_memchr(val, 'o', 12);
//    printf("%s (%p)\n", ptr, ptr);
//    char* ptr2 = my_memrchr(val, 'o', 12);
//    printf("%s (%p)\n", ptr2, ptr2);

}