extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_021ffeb0(void*, const void*);
extern "C" unsigned char data_1005157c[];

extern "C" void* fn_021ffbd0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(72);
        if (!storage)
            return storage;
    }
    fn_021ffeb0(storage, arg);
    *(const void**)((char*)storage + 12) = data_1005157c;
    return storage;
}
