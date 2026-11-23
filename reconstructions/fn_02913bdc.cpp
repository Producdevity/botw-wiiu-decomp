extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_029128b4(void*, const void*);
extern "C" unsigned char data_10163118[];
extern "C" const float data_10163090;

extern "C" void* fn_02913bdc(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(44);
        if (!storage)
            return storage;
    }
    fn_029128b4(storage, arg);
    *(const void**)((char*)storage + 12) = data_10163118;
    *(unsigned*)((char*)storage + 32) = 0;
    *(float*)((char*)storage + 36) = data_10163090;
    *(unsigned char*)((char*)storage + 40) = 0;
    *(unsigned char*)((char*)storage + 41) = 0;
    return storage;
}
