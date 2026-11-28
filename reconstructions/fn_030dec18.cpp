typedef int s32;

extern "C" void* fn_0308e5b4(unsigned int, void*, int);
extern "C" void fn_0434c528(void*, void*, void*);

extern "C" void fn_030dec18(s32 *array, s32 count, void *heap, void *unused) {
    void *buffer;

    if (count > 0) {
        buffer = fn_0308e5b4(count * 0x10, heap, 4);
        *array = (s32) buffer;
        fn_0434c528(array + 1, buffer, (void *) count);
    }
}
