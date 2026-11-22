extern "C" int fn_03249c28(unsigned char* obj) {
    unsigned char* inner = *(unsigned char**)(obj + 28);
    if (inner == 0) {
        return -1;
    }
    return *(int*)(inner + 8);
}
