extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0275a270(void*, const void*);
extern "C" unsigned char data_10125760[];

extern "C" void* fn_02759400(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(100);
        if (!storage)
            return storage;
    }
    fn_0275a270(storage, arg);
    *(const void**)((char*)storage + 12) = data_10125760;
    return storage;
}
