extern "C" int fn_039cf7ec(void*);
extern "C" int fn_039cf824(void*);
extern "C" int fn_039cf850(void*);
extern "C" int fn_039cf888(void*);
extern "C" void fn_03a5cc1c(void*);
extern "C" void fn_03a5df04(void*);
extern "C" void fn_03a5ef8c(void*);
extern "C" void fn_03b28890(void*);

extern "C" void fn_039d1294(void *arg0) {
    if (fn_039cf7ec(arg0) != 0) {
        fn_03b28890((*(void **)((char *)(arg0) + (0x21C))));
    }
    if (fn_039cf888(arg0) != 0) {
        fn_03a5cc1c((*(void **)((char *)(arg0) + (0x224))));
    }
    if (fn_039cf850(arg0) != 0) {
        fn_03a5df04((*(void **)((char *)(arg0) + (0x220))));
    }
    if (fn_039cf824(arg0) != 0) {
        fn_03a5ef8c((*(void **)((char *)(arg0) + (0x22C))));
    }
}
