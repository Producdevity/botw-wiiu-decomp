extern "C" unsigned fn_03bc2550(void* object) {
    unsigned value = *(unsigned*)((char*)object + 248);
    return (-value & ~value) >> 31;
}
