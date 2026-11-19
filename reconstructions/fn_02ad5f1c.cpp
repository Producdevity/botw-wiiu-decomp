extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0282bdbc(void*, const void*);

extern "C" void* fn_02ad5f1c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(100, allocator, 4);
    if (object) {
        object = fn_0282bdbc(object, descriptor);
    }
    return object;
}
