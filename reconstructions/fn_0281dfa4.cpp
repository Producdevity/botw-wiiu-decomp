extern "C" bool fn_02b37068(void* object);

extern "C" bool fn_0281dfa4(void* self) {
    if (*(char*)((char*)self + 132) == 0) {
        if (fn_02b37068((char*)self + 104))
            return true;
    }
    return false;
}
