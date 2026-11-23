extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02175ddc(void*, const void*);
extern "C" unsigned char data_100364c0[];
extern "C" const float data_10036478;

extern "C" void* fn_02177974(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(144);
        if (!storage)
            return storage;
    }
    fn_02175ddc(storage, arg);
    *(const void**)((char*)storage + 12) = data_100364c0;
    *(unsigned*)((char*)storage + 128) = 0;
    *(unsigned*)((char*)storage + 132) = 0;
    *(unsigned*)((char*)storage + 136) = 0;
    *(float*)((char*)storage + 140) = data_10036478;
    return storage;
}
