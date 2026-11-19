extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0232ff54(void*, const void*);

extern "C" void* fn_02abd60c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(264, allocator, 4);
    if (object) {
        object = fn_0232ff54(object, descriptor);
    }
    return object;
}
