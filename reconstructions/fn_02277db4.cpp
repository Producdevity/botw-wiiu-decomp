extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0226c7b4(void*, const void*);
extern "C" unsigned char data_10069f2c[];
extern "C" const float data_10069ef0;

extern "C" void* fn_02277db4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(32);
        if (!storage)
            return storage;
    }
    fn_0226c7b4(storage, arg);
    *(const void**)((char*)storage + 12) = data_10069f2c;
    *(float*)((char*)storage + 20) = data_10069ef0;
    *(unsigned*)((char*)storage + 24) = 0;
    *(unsigned*)((char*)storage + 28) = 0;
    return storage;
}
