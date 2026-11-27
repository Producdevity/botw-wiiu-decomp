extern "C" void fn_030b94c0(void*, int);

extern "C" void fn_030d1500(void *arg0, int arg1) {
    int remaining = arg1;
    if (remaining > 0) {
        do {
            fn_030b94c0(arg0, 9);
            remaining -= 1;
        } while (remaining != 0);
    }
}
