typedef int s32;

extern "C" int fn_0326ff08(void*);
struct StateRecordRef;
extern "C" bool fn_0378c788(const StateRecordRef *);
extern "C" int fn_0378c7b0(void *);

extern "C" s32 fn_0326ff48(void *arg0) {
    if ((fn_0326ff08(arg0) != 0) && ((fn_0378c788((const StateRecordRef *)((char *)arg0 + 8)) != 0) || (fn_0378c7b0((char *)arg0 + 8) != 0)) && ((fn_0378c788((const StateRecordRef *)((char *)arg0 + 0x10)) != 0) || (fn_0378c7b0((char *)arg0 + 0x10) != 0))) {
        return 1;
    }
    return 0;
}
