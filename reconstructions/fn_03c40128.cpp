extern "C" void fn_03c40120(void* p, int v);

extern "C" void fn_03c40128(void* self, int index, void* object) {
    if (index > 15) {
        return;
    }
    ((void**)((char*)self + 0x1c8))[index] = object;
    fn_03c40120(object, index);
    *((unsigned char*)object + 0x15d) = *((unsigned char*)self + 0x3d);
}
