extern "C" int fn_03be0978(unsigned char* obj) {
    unsigned char* inner = *(unsigned char**)(obj + 0);
    if (inner == 0) {
        return 0;
    }
    return *(int*)(inner + 8);
}
