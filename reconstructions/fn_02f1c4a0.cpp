extern "C" int fn_02f1c4a0(unsigned char* obj) {
    unsigned char* inner = *(unsigned char**)(obj + 12);
    if (inner == 0) {
        return 0;
    }
    return *(int*)(inner + 68);
}
