extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0242a57c(void*, const void*);

extern "C" void* fn_02aaf5dc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(52, allocator, 4);
    if (object) {
        object = fn_0242a57c(object, descriptor);
    }
    return object;
}
