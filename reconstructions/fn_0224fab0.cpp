extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0241a620(void*, const void*);
extern "C" unsigned char data_10061a6c[];

extern "C" void* fn_0224fab0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(40);
        if (!storage)
            return storage;
    }
    fn_0241a620(storage, arg);
    *(const void**)((char*)storage + 12) = data_10061a6c;
    return storage;
}
