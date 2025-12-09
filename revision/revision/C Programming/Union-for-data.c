#include <stdio.h>

union Converter {
    int num;
    char bytes[4];
};

int main() {
    union Converter c;
    c.num = 16909060; // 0x01020304 in Hex

    printf("Integer: %d\n", c.num);
    // Print individual bytes (Little Endian systems show 4, 3, 2, 1)
    printf("Bytes: %d %d %d %d\n", c.bytes[0], c.bytes[1], c.bytes[2], c.bytes[3]);
    return 0;
}