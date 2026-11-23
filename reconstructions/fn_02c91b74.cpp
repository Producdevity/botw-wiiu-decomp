extern "C" void fn_02d4b3d4(void* owner, int value);
extern "C" int fn_02d940fc(void* owner);

extern "C" void fn_02c91b74(void** object) {
    if (fn_02d940fc(*object) != 0) {
        fn_02d4b3d4(*object, 1);
    }
    *(unsigned*)((char*)*object + 0x840) &= 0xFFFFFEFF;
}
