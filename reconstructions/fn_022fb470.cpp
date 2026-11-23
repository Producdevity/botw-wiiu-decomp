extern "C" int data_1007d2a8;
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];
extern "C" void* fn_022fa35c(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_022fb470(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(52);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_022fa35c(storage, a);
    *(const void**)((char*)storage + 12) = &data_1007d2a8;
    void* member = (char*)storage + 44;
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
