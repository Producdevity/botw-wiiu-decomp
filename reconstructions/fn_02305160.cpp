extern "C" int data_1007f404;
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];
extern "C" void* fn_023066e4(void *, const void *);
extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_02b614e0(void *);

extern "C" void* fn_02305160(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(132);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_023066e4(storage, a);
    *(const void**)((char*)storage + 12) = &data_1007f404;
    void* member = (char*)storage + 116;
    if (!member)
        member = fn_0308e578(8);
    if (member) {
        *(const void**)((char*)member + 4) = &data_10263910;
        *(const void**)((char*)member + 0) = data_10263a00;
    }
    fn_02b614e0((char*)storage + 124);
    return storage;
}
