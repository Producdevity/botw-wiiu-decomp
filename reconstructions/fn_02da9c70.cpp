extern "C" void fn_02da6878(int, float*);

extern "C" void fn_02da9c70(void* object, float* out) {
    fn_02da6878(*(int*)((char*)object + 16), out);
}
