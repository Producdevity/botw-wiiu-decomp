extern "C" int fn_02c10774(int value);

extern "C" void fn_02bfeb80(void* object) {
    int value = **(int**)((char*)object + 0x44);
    *(int*)((char*)object + 0x4C) = value;
    if (fn_02c10774(value) == 0) {
        *(int*)((char*)object + 0x4C) = 0;
    }
}
