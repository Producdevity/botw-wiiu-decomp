extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0382b6c8(void*);

extern "C" void fn_0379cde0(void *arg0) {
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(arg0) + (0x398)));
    if (temp_r3 != 0) {
        fn_0382b6c8(temp_r3);
        fn_0308e6d0((*(void **)((char *)(arg0) + (0x398))));
        (*(void **)((char *)(arg0) + (0x398))) = 0;
    }
}
