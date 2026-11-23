typedef int s32;

extern "C" void *data_10467bfc;

extern "C" void fn_02ff5ce0(void *arg0) {
    s32 temp_r0;
    s32 var_r0;

    if ((void *) data_10467bfc != 0) {
        temp_r0 = (*(s32 *)((char *)(arg0) + (0x1DB8)));
        if (temp_r0 == 0) {
            (*(s32 *)((char *)(data_10467bfc) + (0xB0))) = 0;
            return;
        }
        if (temp_r0 == 2) {
            (*(s32 *)((char *)(data_10467bfc) + (0xB0))) = 1;
            return;
        }
        var_r0 = 4;
        if (temp_r0 == 1) {
            var_r0 = 2;
        }
        (*(s32 *)((char *)(data_10467bfc) + (0xB0))) = var_r0;
    }
}
