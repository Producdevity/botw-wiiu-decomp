typedef unsigned int u32;

extern "C" void fn_03414bf8(void);
extern "C" void fn_03414fe8(void);
extern "C" void fn_03415c6c(void);

extern "C" void *data_1046ca64;

extern "C" void fn_031fdc08(void) {
    fn_03415c6c();
    fn_03414fe8();
    if (((void *) data_1046ca64 == 0) || (((u32) (*(u32 *)((char *)(data_1046ca64) + (0x18))) >> 0x1EU) & 1)) {
        fn_03414bf8();
    }
}
