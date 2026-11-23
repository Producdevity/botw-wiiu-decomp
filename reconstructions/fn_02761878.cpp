typedef unsigned char u8;

extern "C" void fn_027617d0(void*);
extern "C" void fn_02761de0(void*);
extern "C" int fn_037b84ec(void*, void*);

extern "C" void fn_02761878(void *arg0, void *arg1) {
    if (fn_037b84ec(arg0, arg1) == 0) {
        fn_027617d0(arg0);
        fn_02761de0(arg0);
    }
    (*(u8 *)((char *)(arg0) + (0xB))) = (u8) ((*(u8 *)((char *)(arg0) + (0xB))) | 4);
}
