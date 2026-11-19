extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0255b894(void*, const void*);

extern "C" void* fn_02acbeac(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(68, allocator, 4);
    if (object) {
        object = fn_0255b894(object, descriptor);
    }
    return object;
}
