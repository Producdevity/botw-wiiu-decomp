struct HandleTarget;
struct HandleSlot;
extern "C" bool fn_0378da58(const HandleSlot* slot, const HandleTarget* target);

extern "C" bool fn_032e45cc(char* object, const HandleTarget* argument) {
    return fn_0378da58((const HandleSlot*)(object + 1376), argument);
}
