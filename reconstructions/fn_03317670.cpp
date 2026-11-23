typedef int s32;

struct HandleSlot;
struct HandleTarget;
extern "C" bool fn_0378da58(const HandleSlot *, const HandleTarget *);

extern "C" s32 fn_03317670(void *arg0, void *arg1) {
    if ((arg1 != 0) && (fn_0378da58((const HandleSlot *)((char *)arg0 + 0x1C), (struct HandleTarget *) arg1) != 0)) {
        return 1;
    }
    return 0;
}
