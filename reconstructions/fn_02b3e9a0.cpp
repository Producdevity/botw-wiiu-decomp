extern "C" bool fn_0378da88(void*);
extern "C" bool fn_0378dacc(void*, void*);

extern "C" int fn_02b3e9a0(void* self, void* handle) {
    if (fn_0378da88(handle) && fn_0378dacc((char*)self + 0xC, handle)) {
        return 1;
    }
    return 0;
}
