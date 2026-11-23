typedef unsigned int u32;

extern "C" void fn_03414bf8(void);
extern "C" void fn_03414c80(void);
extern "C" void fn_03414d14(void);

extern "C" void *data_1046ca64;

extern "C" void fn_031fdd14(void) {
    if (((void *) data_1046ca64 != 0) && !(((u32) (*(u32 *)((char *)(data_1046ca64) + (0x18))) >> 0x1EU) & 1)) {
        fn_03414bf8();
        fn_03414c80();
    }
    fn_03414d14();
}
