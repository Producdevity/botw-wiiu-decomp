extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02c6430c(void*, const void*);
extern "C" unsigned char data_101d0b14[];
extern "C" const float data_101d0b00;

extern "C" void* fn_02c9857c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(24);
        if (!storage)
            return storage;
    }
    fn_02c6430c(storage, arg);
    *(const void**)((char*)storage + 12) = data_101d0b14;
    *(float*)((char*)storage + 20) = data_101d0b00;
    return storage;
}
