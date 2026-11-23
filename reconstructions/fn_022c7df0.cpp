extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_024252d4(void*, const void*);
extern "C" unsigned char data_10075d64[];
extern "C" const float data_10075d2c;

extern "C" void* fn_022c7df0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(112);
        if (!storage)
            return storage;
    }
    fn_024252d4(storage, arg);
    *(const void**)((char*)storage + 12) = data_10075d64;
    *(unsigned*)((char*)storage + 96) = 0;
    *(unsigned*)((char*)storage + 100) = 0;
    *(float*)((char*)storage + 104) = data_10075d2c;
    *(unsigned char*)((char*)storage + 108) = 0;
    return storage;
}
