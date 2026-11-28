struct HandleSlot;
struct HandleTarget;
extern "C" bool fn_0378da58(const HandleSlot* slot, const HandleTarget* target);

extern "C" bool fn_032e50e0(char* object, const HandleTarget* argument) {
    return fn_0378da58((const HandleSlot*)(object + 1388), argument);
}
