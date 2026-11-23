extern "C" bool fn_02b1b0a0(void* object);

extern "C" bool fn_02132984(void* self) {
    if (**(char**)((char*)self + 32) != 0) {
        if (!fn_02b1b0a0((char*)self + 168))
            return false;
    }
    return true;
}
