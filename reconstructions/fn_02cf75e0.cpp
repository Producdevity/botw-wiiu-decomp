namespace {
struct Inner {
    char padding_0[0x394];
    void* value_394;
};
}

extern "C" unsigned int fn_02d82148(const void*);
extern "C" bool fn_0370e3bc(void*, int, int);

extern "C" int fn_02cf75e0(void** handle) {
    if (fn_02d82148(*handle) != 0 || fn_0370e3bc(((Inner*)*handle)->value_394, 0, 0) != 0) {
        return 1;
    }
    return 0;
}
