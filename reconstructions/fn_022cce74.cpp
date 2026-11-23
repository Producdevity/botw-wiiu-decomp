extern "C" float data_10076b68;
extern "C" unsigned char data_10076b6c[];
extern "C" void fn_0294f720(void *, int, void *);
extern "C" void fn_02b7f998(float* matrix, void* actor);
extern "C" void fn_037946f0(void *, int, int, int, int, float);

extern "C" void fn_022cce74(void* arg0) {
    fn_02b7f998((float*)((char*)arg0 + 80), (*(void**)arg0));
    (*(int*)((char*)arg0 + 116)) = 0;
    fn_037946f0(arg0, (int)(data_10076b6c), 0, 0, 0, data_10076b68);
    fn_0294f720((*(void**)arg0), 4, (char*)arg0 + 44);
}
