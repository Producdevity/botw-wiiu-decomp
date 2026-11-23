extern "C" int data_100cb170;
extern "C" void* fn_024db3ec(void *, const void *);
extern "C" void* fn_0308e578(unsigned);

extern "C" void* fn_024dcb4c(void * storage, const void * arg) {
    if (!storage) {
        storage = fn_0308e578(168);
        if (!storage)
            return storage;
    }
    fn_024db3ec(storage, arg);
    *(const void**)((char*)storage + 12) = &data_100cb170;
    *(unsigned*)((char*)storage + 144) = 0;
    *(unsigned*)((char*)storage + 148) = 0;
    *(unsigned char*)((char*)storage + 152) = 0;
    if (!((char*)storage + 156))
        fn_0308e578(12);
    return storage;
}
