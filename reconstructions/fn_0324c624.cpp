extern "C" int fn_0324c624(unsigned char* obj) {
    unsigned char* inner = *(unsigned char**)(obj + 44);
    if (inner == 0) {
        return -1;
    }
    return *(int*)(inner + 8);
}
