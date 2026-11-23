extern "C" int data_101d6070;
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];
extern "C" void* fn_02c7f3ac(void *, const void *);
extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_033a5e34(void *);

extern "C" void* fn_02cc05a8(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(144);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_02c7f3ac(storage, a);
    *(const void**)((char*)storage + 12) = &data_101d6070;
    void* member = (char*)storage + 64;
    if (!member)
        member = fn_0308e578(8);
    if (member) {
        *(const void**)((char*)member + 4) = &data_10263910;
        *(const void**)((char*)member + 0) = data_10263a00;
    }
    fn_033a5e34((char*)storage + 72);
    return storage;
}
