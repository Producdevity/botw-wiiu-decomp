extern "C" int fn_032498dc(unsigned char* obj) {
    unsigned char* inner = *(unsigned char**)(obj + 12);
    if (inner == 0) {
        return -1;
    }
    return *(int*)(inner + 8);
}
