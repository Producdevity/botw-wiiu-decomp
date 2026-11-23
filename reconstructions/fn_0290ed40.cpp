typedef unsigned char u8;
typedef int s32;

extern "C" void fn_0290c184(void*);
extern "C" void fn_0290e9d0(void*);
struct StateRecordRef;
extern "C" bool fn_0378c788(const StateRecordRef *);
extern "C" int fn_0378c7b0(void *);
extern "C" void fn_0378c840(void *);

extern "C" void fn_0290ed40(void *arg0) {
    fn_0290c184(arg0);
    if (((s32) (*(s32 *)((char *)(arg0) + (0x50))) != 0) || ((s32) (*(u8 *)((char *)(arg0) + (0x54))) != 0)) {
        if (fn_0378c788((const StateRecordRef *)((char *)arg0 + 0x50)) != 0) {
            fn_0290e9d0(arg0);
            return;
        }
        if (fn_0378c7b0((char *)arg0 + 0x50) != 0) {
            fn_0378c840((char *)arg0 + 0x50);
        }
    }
}
