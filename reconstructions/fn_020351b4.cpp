extern "C" int fn_020346e4(void*, void*, void*);

extern "C" int fn_020351b4(int object, void *first, void *second) {
    if (fn_020346e4((void *)(object + 0x24), first, second) == 0 || fn_020346e4((void *)(object + 0x70), first, (char *)second + 0x6C) == 0) {
        return 0;
    }
    return 1;
}
