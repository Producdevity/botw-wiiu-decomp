extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_022ba980(void*, const void*);
extern "C" unsigned char data_1007aef0[];
extern "C" const float data_1007aed0;

extern "C" void* fn_022ecc9c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(108);
        if (!storage)
            return storage;
    }
    fn_022ba980(storage, arg);
    *(const void**)((char*)storage + 12) = data_1007aef0;
    *(float*)((char*)storage + 104) = data_1007aed0;
    return storage;
}
