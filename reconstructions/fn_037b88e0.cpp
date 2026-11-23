typedef int s32;

extern "C" void fn_037b88e0(void *arg0) {
    void* const* vt1;
    void* const* vt2;
    void *temp_r3;

    temp_r3 = ((void * (*)())(vt1 = *(void* const**)((char *)(arg0) + (0xC)))[53])();
    if (temp_r3 != 0) {
        ((s32 (*)())(vt2 = *(void* const**)((char *)(temp_r3) + (0xC)))[41])();
    }
}
