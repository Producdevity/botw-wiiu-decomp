extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02c6430c(void* storage, const void* arg);
extern "C" void* fn_0378c550(void* context);
extern "C" unsigned char data_101d192c[];

extern "C" void* fn_02c9ffe8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(28);
        if (!storage)
            return storage;
    }
    fn_02c6430c(storage, arg);
    *(const void**)((char*)storage + 12) = data_101d192c;
    fn_0378c550((char*)storage + 20);
    return storage;
}
