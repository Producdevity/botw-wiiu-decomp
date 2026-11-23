extern "C" unsigned char data_103feb30[];

extern "C" unsigned short fn_03fa003c(int value) {
    const int offset = value << 1;
    return *(unsigned short*)(data_103feb30 + offset);
}
