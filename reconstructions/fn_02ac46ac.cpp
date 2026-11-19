extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023d10fc(void*, const void*);

extern "C" void* fn_02ac46ac(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(92, allocator, 4);
    if (object) {
        object = fn_023d10fc(object, descriptor);
    }
    return object;
}
