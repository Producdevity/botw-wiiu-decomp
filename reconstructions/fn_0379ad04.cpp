typedef int s32;

extern "C" int fn_031e2f14(void*, void*);
extern "C" int data_1046d3ac;

extern "C" void fn_0379ad04(void *arg0) {
    if ((s32) (*(s32 *)((char *)(arg0) + (0x100))) == 0) {
        (*(s32 *)((char *)(arg0) + (0x100))) = fn_031e2f14((*(void **)((char *)(data_1046d3ac) + (0x175C4))), arg0);
    }
}
