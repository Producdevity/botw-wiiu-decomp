typedef int s32;
typedef float f32;

struct FloatSlotTable;
extern "C" bool fn_03713060(void*, unsigned, float, int);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" f32 data_1012d2f0;
extern "C" s32 data_1012d2f4;

extern "C" void fn_0278cc44(void **arg0) {
    fn_03713060((*(struct FloatSlotTable **)((char *)(*arg0) + (0x394))), 9U, data_1012d2f0, 0);
    fn_037b8284(arg0, &data_1012d2f4, 0);
}
