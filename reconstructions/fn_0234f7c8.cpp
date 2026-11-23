extern "C" int data_1008c7ec;
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];
extern "C" void* fn_0234fe1c(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_0234f7c8(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(80);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_0234fe1c(storage, a);
    *(const void**)((char*)storage + 12) = &data_1008c7ec;
    void* member = (char*)storage + 72;
    if (!member) {
        member = fn_0308e578(8);
        if (!member)
            return storage;
    }
    {
        *(const void**)((char*)member + 4) = &data_10263910;
        *(const void**)((char*)member + 0) = data_10263a00;
    }
    return storage;
}
