typedef int s32;

extern "C" void* fn_03a26830(void*, int);
extern "C" void fn_03a2756c(void*);

extern "C" void fn_03a26a8c(void *arg0) {
    void* const* vt1;
    fn_03a2756c(arg0);
    ((s32 (*)())(vt1 = *(void* const**)((char *)(fn_03a26830(arg0, 0)) + (0x14)))[53])();
}
