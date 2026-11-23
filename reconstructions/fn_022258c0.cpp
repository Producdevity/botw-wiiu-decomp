extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0221d928(void*, const void*);
extern "C" unsigned char data_1005ab7c[];
extern "C" const float data_1005ab60;

extern "C" void* fn_022258c0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(28);
        if (!storage)
            return storage;
    }
    fn_0221d928(storage, arg);
    *(const void**)((char*)storage + 12) = data_1005ab7c;
    *(float*)((char*)storage + 24) = data_1005ab60;
    return storage;
}
