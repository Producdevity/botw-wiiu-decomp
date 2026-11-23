extern "C" bool fn_03485c18(const void *);
extern "C" void fn_03485f68(void*);

extern "C" void fn_0242dce4(void *arg0) {
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(arg0) + (0x84)));
    if ((temp_r3 != 0) && (fn_03485c18(temp_r3) != 0)) {
        fn_03485f68((*(void **)((char *)(arg0) + (0x84))));
        (*(void **)((char *)(arg0) + (0x84))) = 0;
    }
}
