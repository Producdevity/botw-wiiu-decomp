extern "C" int fn_02c10774(int value);

extern "C" void fn_02bcc87c(void* object) {
    int value = **(int**)((char*)object + 0xC0);
    *(int*)((char*)object + 0xFC) = value;
    if (fn_02c10774(value) == 0) {
        *(int*)((char*)object + 0xFC) = 0;
    }
}
