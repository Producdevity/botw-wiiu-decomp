extern "C" void fn_039fbb0c(void* object, int value, int index, int count) {
    *(int*)((char*)object + ((value << 2) & 0x3fc) + 6096) = index;
    *(int*)((char*)object + ((value << 2) & 0x3fc) + 6112) = count;
}
