extern "C" void fn_03bf8bd0(void*, void*);

extern "C" void fn_039e2044(void* self, void* arg)
{
    int flags = *(int*)((char*)self + 8);
    if (flags & 1) {
        fn_03bf8bd0((char*)self + 4, arg);
    }
    int* field = (int*)((char*)self + 0x80);
    *field = 0;
}
