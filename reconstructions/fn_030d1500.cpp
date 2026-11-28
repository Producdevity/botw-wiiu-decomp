extern "C" void fn_030b94c0(void*, int);

extern "C" void fn_030d1500(void *object, int count) {
    int remaining = count;
    if (remaining > 0) {
        do {
            fn_030b94c0(object, 9);
            remaining -= 1;
        } while (remaining != 0);
    }
}
