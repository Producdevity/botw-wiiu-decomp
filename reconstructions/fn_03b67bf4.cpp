namespace {
struct Block {
    signed char flag;
    char padding_1[3];
    int values[15];
};
}

extern "C" void fn_03b67bf4(void* object) {
    static_cast<Block *>(object)->values[3] = 0;
    static_cast<Block *>(object)->values[10] = 0;
    static_cast<Block *>(object)->values[0] = 0;
    static_cast<Block *>(object)->values[6] = 0;
    static_cast<Block *>(object)->values[13] = 0;
    static_cast<Block *>(object)->values[2] = 0;
    static_cast<Block *>(object)->values[8] = 0;
    static_cast<Block *>(object)->values[5] = 0;
    static_cast<Block *>(object)->values[12] = 0;
    static_cast<Block *>(object)->values[11] = 0;
    static_cast<Block *>(object)->flag = 0;
    static_cast<Block *>(object)->values[14] = 0;
    static_cast<Block *>(object)->values[9] = 0;
    static_cast<Block *>(object)->values[1] = 0;
    static_cast<Block *>(object)->values[4] = 0;
    static_cast<Block *>(object)->values[7] = 0;
}
