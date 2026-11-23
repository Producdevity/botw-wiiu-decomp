typedef int s32;

extern "C" void fn_034bd774(void *);
extern "C" void fn_034bd8bc(void *);
extern "C" int fn_034bd924(void*, void*, void*);

extern "C" void fn_034bda74(void *arg0, void *arg1, void *arg2) {
    if ((s32) (*(s32 *)((char *)(arg0) + (0x58))) != 0) {
        fn_034bd774(arg0);
    }
    if ((s32) (*(s32 *)((char *)(arg0) + (0x88))) != 0) {
        fn_034bd8bc(arg0);
    }
    if (fn_034bd924(arg0, arg1, arg2) == 0) {
        fn_034bd774(arg0);
    }
}
