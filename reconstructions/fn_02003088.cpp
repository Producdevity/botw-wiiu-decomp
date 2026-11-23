extern "C" int fn_02b74860(void*, int);
extern "C" void fn_034c44a4(void *, int);
extern "C" bool fn_0378da88(void *);

extern "C" void fn_02003088(void *arg0) {
    void *temp_r30;

    temp_r30 = (*(void **)((char *)(arg0) + (0x3A0)));
    if (temp_r30 != 0) {
        if (fn_0378da88((char *)arg0 + 0x844) != 0) {
            fn_034c44a4(temp_r30, fn_02b74860((char *)arg0 + 0x844, 0));
            fn_034c44a4(temp_r30, fn_02b74860((char *)arg0 + 0x844, 1));
            return;
        }
        fn_034c44a4(temp_r30, 0);
    }
}
