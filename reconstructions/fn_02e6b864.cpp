typedef int s32;

extern "C" int fn_02e6b748(int *, int);
extern "C" void fn_03c49e20(void*, void*);
struct Container;
struct OwnedListNode;
extern "C" void fn_03c49ea8(void*, OwnedListNode*);

extern "C" void fn_02e6b864(s32 *arg0, s32 arg1, void *arg2) {
    s32 temp_r3;
    struct Container *temp_r3_2;
    struct OwnedListNode *temp_r4;

    temp_r3 = fn_02e6b748(arg0, arg1);
    if (temp_r3 != 0) {
        temp_r4 = (*(struct OwnedListNode **)((char *)(temp_r3) + (0xC)));
        temp_r3_2 = (*(struct Container **)((char *)(temp_r4) + (0xC)));
        if (temp_r3_2 != 0) {
            fn_03c49ea8(temp_r3_2, temp_r4);
        }
        fn_03c49e20(arg2, (*(struct OwnedListNode **)((char *)(temp_r3) + (0xC))));
    }
}
