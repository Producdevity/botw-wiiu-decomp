typedef int s32;

extern "C" int fn_022bfb50(void*);
extern "C" int fn_0344a464(void *);
extern "C" int fn_03794838(void *, void *, void *);
extern "C" void* fn_037966a8(void *);

extern "C" s32 fn_023954e0(void **object_slot) {
    void *target;

    if ((fn_03794838(object_slot, 0, 0) != 0) && ((fn_022bfb50(object_slot) != 0) || ((target = fn_037966a8(*object_slot), (target != 0)) && (fn_0344a464(target) == 0)))) {
        return 1;
    }
    return 0;
}
