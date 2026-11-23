typedef float f32;

extern "C" float fn_02c0f358(void*);

extern "C" void fn_02c09664(void *arg0) {
    f32 temp_f1;

    temp_f1 = fn_02c0f358((char *)arg0 + 0x550);
    (*(f32 *)((char *)(arg0) + (0x69C))) = temp_f1;
    (*(f32 *)((char *)(arg0) + (0x664))) = temp_f1;
    (*(f32 *)((char *)(arg0) + (0x62C))) = temp_f1;
    (*(f32 *)((char *)(arg0) + (0x5F4))) = temp_f1;
    (*(f32 *)((char *)(arg0) + (0x5BC))) = temp_f1;
    (*(f32 *)((char *)(arg0) + (0x584))) = temp_f1;
}
