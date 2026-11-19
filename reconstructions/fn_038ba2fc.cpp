extern "C" void fn_038ba2fc(void* self, const void* src) {
    int* dst = (int*)((char*)self + 164);
    for (int i = 0; i < 4; i++) {
        dst[i] = ((const int*)src)[i];
    }
}
