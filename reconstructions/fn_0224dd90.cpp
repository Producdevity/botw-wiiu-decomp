extern "C" void* fn_0308e5a0(unsigned int, void*, int);

extern "C" int fn_0224dd90(void* object, void* heap)
{
    void* node = fn_0308e5a0(8, heap, 4);
    if (node != 0) {
        *(int*)((char*)node + 0) = 0;
        *(int*)((char*)node + 4) = 0;
    }
    *(void**)((char*)object + 0x48) = node;
    return 1;
}
