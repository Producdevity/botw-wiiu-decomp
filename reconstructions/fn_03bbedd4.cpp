extern "C" unsigned fn_03bbedd4(void* object) {
    unsigned value = *(unsigned*)((char*)object + 248);
    return (-value & ~value) >> 31;
}
