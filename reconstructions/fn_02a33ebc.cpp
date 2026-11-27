typedef unsigned char u8;
typedef int s32;

struct HandleSlot;
struct HandleTarget;
extern "C" bool fn_0378da58(const HandleSlot *, const HandleTarget *);

extern "C" u8 fn_02a33ebc(s32 owner_address, struct HandleTarget *target) {
    s32 result = 0;
    if ((target != 0) && (fn_0378da58((const HandleSlot *)(owner_address + 0x14), target) != 0)) {
        result = 1;
    }
    return result;
}
