struct HandleSlot;
struct HandleTarget;
extern "C" bool fn_0378da58(const HandleSlot* slot, const HandleTarget* target);

extern "C" bool fn_02a0d080(char* object, const HandleTarget* argument) {
    return fn_0378da58((const HandleSlot*)(object + 28), argument);
}
