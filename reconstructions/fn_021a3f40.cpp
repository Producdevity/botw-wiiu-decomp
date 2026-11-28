extern "C" int fn_021a3f40(void* self) {
    char* obj = *(char**)self;
    *(unsigned int*)(obj + 868) &= ~0x20u;
    return 1;
}
