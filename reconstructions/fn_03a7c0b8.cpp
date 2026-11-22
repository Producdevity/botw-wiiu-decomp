extern "C" int fn_03a7c0b8(unsigned char* obj) {
    unsigned char* inner = *(unsigned char**)(obj + 0);
    if (inner == 0) {
        return 4;
    }
    return *(int*)(inner + 172);
}
