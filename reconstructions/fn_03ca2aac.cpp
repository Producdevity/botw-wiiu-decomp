typedef unsigned char u8;
typedef int s32;
typedef unsigned int u32;

extern "C" void fn_03ca2aac(void *arg0, u32 arg1, s32 arg2) {
    s32 var_r5;

    var_r5 = arg2;
    switch (arg1) {
    case 1:
        if (var_r5 != 0) {
            var_r5 = (s32) (*(u8 *)((char *)(arg0) + (0x42C)));
        }
        (*(u8 *)((char *)(arg0) + (0x42C))) = (u8) var_r5;
        return;
    case 2:
        if (var_r5 != 0) {
            var_r5 = (s32) (*(u8 *)((char *)(arg0) + (0x42D)));
        }
        (*(u8 *)((char *)(arg0) + (0x42D))) = (u8) var_r5;
        return;
    case 3:
        if (var_r5 != 0) {
            var_r5 = (s32) (*(u8 *)((char *)(arg0) + (0x42E)));
        }
        (*(u8 *)((char *)(arg0) + (0x42E))) = (u8) var_r5;
        return;
    }
}
