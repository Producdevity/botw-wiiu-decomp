extern "C" bool fn_02b1b0a0(void* object);
extern "C" bool fn_024be03c(void* self) {
    if (**(char**)((char*)self + 40) != 0) {
        if (!fn_02b1b0a0((char*)self + 56))
            return false;
    }
    return true;
}
