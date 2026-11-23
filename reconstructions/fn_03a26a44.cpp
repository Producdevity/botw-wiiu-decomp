typedef int s32;

extern "C" void* fn_03a26830(void*, int);
extern "C" void fn_03a27554(void*);

extern "C" void fn_03a26a44(void *arg0) {
    void* const* vt1;
    fn_03a27554(arg0);
    ((s32 (*)())(vt1 = *(void* const**)((char *)(fn_03a26830(arg0, 0)) + (0x14)))[51])();
}
