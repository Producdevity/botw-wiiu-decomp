extern "C" void fn_0361fde8(void*, void*, float);
extern "C" void* data_1047b444;
extern "C" int fn_03264670(void* self)
{
    void** slot = *(void***)((char*)self + 0x14);
    void* handle = *slot;
    if (handle != (void*)-1) {
        *slot = (void*)-1;
        if (data_1047b444 != 0) {
            float* source = *(float**)((char*)self + 0x10);
            fn_0361fde8(data_1047b444, handle, *source);
        }
    }
    return 1;
}
