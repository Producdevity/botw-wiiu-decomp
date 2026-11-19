extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0296a768(void*, const void*);

extern "C" void* fn_02adaf98(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(80, allocator, 4);
    if (object) {
        object = fn_0296a768(object, descriptor);
    }
    return object;
}
