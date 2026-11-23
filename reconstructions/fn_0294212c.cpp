typedef int s32;

extern "C" void fn_034583fc(void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_1016c37c;

extern "C" void fn_0294212c(void *arg0) {
    void *temp_r3;

    fn_037b8284(arg0, &data_1016c37c, 0);
    temp_r3 = (*(void **)((char *)(arg0) + (0x88)));
    if (temp_r3 != 0) {
        fn_034583fc(temp_r3);
    }
}
