extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02563d28(void*, const void*);
extern "C" unsigned char data_100e0d38[];

extern "C" void* fn_025642f0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(32);
        if (!storage)
            return storage;
    }
    fn_02563d28(storage, arg);
    *(const void**)((char*)storage + 12) = data_100e0d38;
    return storage;
}
