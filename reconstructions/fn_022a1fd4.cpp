typedef int s32;

extern "C" void fn_02344990(void *);

extern "C" void fn_022a1fd4(void *arg0) {
    void* const* vt1;
    ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(arg0) + (0x2C)))[21])((char *)arg0 + 0x24);
    fn_02344990(arg0);
}
