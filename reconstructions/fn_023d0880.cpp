extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_023cf174(void*, const void*);
extern "C" unsigned char data_100a3040[];

extern "C" void* fn_023d0880(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(124);
        if (!storage)
            return storage;
    }
    fn_023cf174(storage, arg);
    *(const void**)((char*)storage + 12) = data_100a3040;
    return storage;
}
