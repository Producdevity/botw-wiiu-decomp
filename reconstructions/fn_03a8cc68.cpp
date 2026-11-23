typedef float f32;

extern "C" void fn_03a8c7d0(void*, void*, float, float);
extern "C" void fn_03a8c8dc(void*, void*, void*);

extern "C" void fn_03a8cc68(void *arg0, void *arg1) {
    fn_03a8c7d0((char *)arg0 + 4, arg1, (*(f32 *)((char *)(arg0) + (0x158))), (*(f32 *)((char *)(arg0) + (0x15C))));
    fn_03a8c8dc((char *)arg0 + 0xBC, (*(void **)((char *)(arg0) + (0x160))), (char *)arg0 + 0x14C);
    (*(void **)((char *)(arg0) + (0x164))) = (void *) (*(void **)((char *)(arg0) + (0x160)));
}
