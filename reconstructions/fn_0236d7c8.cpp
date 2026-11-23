extern "C" int data_10091458;
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];
extern "C" void fn_0215d03c(void*, void*);
extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_033a5e34(void *);

extern "C" void* fn_0236d7c8(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(132);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_0215d03c(storage, (void*)a);
    *(const void**)((char*)storage + 12) = &data_10091458;
    void* member = (char*)storage + 52;
    if (!member)
        member = fn_0308e578(8);
    if (member) {
        *(const void**)((char*)member + 4) = &data_10263910;
        *(const void**)((char*)member + 0) = data_10263a00;
    }
    fn_033a5e34((char*)storage + 60);
    return storage;
}
