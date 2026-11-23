typedef float f32;

extern "C" void fn_02834c48(void*);
extern "C" void fn_02836670(void*);

extern "C" void fn_0283669c(void *arg0) {
    f32 temp_f0;

    fn_02834c48(arg0);
    temp_f0 = *(*(f32 **)((char *)(arg0) + (0x50)));
    (*(f32 *)((char *)(arg0) + (0x58))) = temp_f0;
    (*(f32 *)((char *)(arg0) + (0x5C))) = temp_f0;
    fn_02836670(arg0);
}
