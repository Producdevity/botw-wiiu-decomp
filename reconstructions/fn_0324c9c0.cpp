extern "C" int fn_0324c9c0(unsigned char* obj) {
    unsigned char* inner = *(unsigned char**)(obj + 60);
    if (inner == 0) {
        return -1;
    }
    return *(int*)(inner + 8);
}
