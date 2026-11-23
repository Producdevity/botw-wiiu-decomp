extern "C" bool fn_02b37068(void* object);
extern "C" bool fn_02822410(void* self) {
    if (*(char*)((char*)self + 112) == 0) {
        if (fn_02b37068((char*)self + 84))
            return true;
    }
    return false;
}
