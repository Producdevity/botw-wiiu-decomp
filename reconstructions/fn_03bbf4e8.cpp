extern "C" unsigned fn_03bbf4e8(void* object) {
    unsigned value = *(unsigned*)((char*)object + 248);
    return (-value & ~value) >> 31;
}
