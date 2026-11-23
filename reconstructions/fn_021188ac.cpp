extern "C" int data_10025e9c;
extern "C" const unsigned char data_10263910;
extern "C" const unsigned char data_10263a00[];
extern "C" void* fn_03261350(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_021188ac(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(148);
        if (!storage)
            return storage;
    }
    const void * a = arg;
    fn_03261350(storage, a);
    *(const void**)((char*)storage + 12) = &data_10025e9c;
    void* member = (char*)storage + 140;
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
