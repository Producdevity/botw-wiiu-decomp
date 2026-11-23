extern "C" int data_101be25c;
extern "C" int data_101be404;
extern "C" void* fn_02bfdc24(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_02bfe844(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(80);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_02bfdc24(storage, a);
    *(const void**)((char*)storage + 12) = &data_101be25c;
    *(const void**)((char*)storage + 36) = &data_101be404;
    *(unsigned*)((char*)storage + 64) = 0;
    *(unsigned*)((char*)storage + 68) = 0;
    *(unsigned*)((char*)storage + 72) = 0;
    *(unsigned*)((char*)storage + 76) = 0;
    return storage;
}
