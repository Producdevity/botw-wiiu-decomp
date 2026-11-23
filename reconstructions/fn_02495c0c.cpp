extern "C" void fn_03793ad8(void* object);
extern "C" void fn_03c700b0(void* a, void* b, float x, float y, float z);

extern "C" void fn_02495c0c(void* p) {
    char* self = (char*)p;
    fn_03793ad8(self + 48);
    fn_03c700b0(p, p, *(float*)(self + 72), *(float*)(self + 76), *(float*)(self + 80));
}
