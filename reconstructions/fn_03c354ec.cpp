extern "C" unsigned char data_103dc378[];

extern "C" short fn_03c354ec(int value) {
    const int offset = value << 1;
    return *(short*)(data_103dc378 + offset);
}
