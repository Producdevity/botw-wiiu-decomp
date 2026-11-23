extern "C" int fn_02e1dc40(void*, void*);
extern "C" int fn_02fd65dc(void*, int);
extern "C" void fn_02fd6d4c(void*);

extern "C" void fn_02fd6e28(void *arg0) {
    if ((fn_02fd65dc(arg0, 3) != 0) && (fn_02e1dc40((char *)arg0 + 0x1BBC, (char *)arg0 + 0x1BC0) != 0)) {
        fn_02fd6d4c(arg0);
    }
}
