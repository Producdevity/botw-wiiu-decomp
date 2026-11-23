typedef int s32;
typedef unsigned int u32;

extern "C" unsigned* fn_0396cf54(unsigned *, unsigned);
extern "C" void fn_0396d03c(void*, void*);

extern "C" void fn_0396bff0(void **arg0, void *arg1) {
    struct { u32 f8; } sp;
    void *temp_r12;

    temp_r12 = *arg0;
    fn_0396cf54(&sp.f8, (u32) ((char *)temp_r12 + (*(s32 *)((char *)(temp_r12) + (4)))));
    fn_0396d03c(&sp.f8, arg1);
}
