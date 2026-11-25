extern "C" void fn_03b562ac(void *self, void **outItem, int *outCount) {
    void *context = *(void **)((char *)*(void **)((char *)self + 8) + 0x10C);
    void *item;
    if (*(unsigned char *)((char *)context + 0x752) != 0 ||
        *(int *)((char *)*(void **)((char *)*(void **)((char *)self + 8) + 0x188) + 0x1A0) != 3 ||
        (item = *(void **)((char *)self + 4)) == 0) {
        *outItem = 0;
        *outCount = 0;
        return;
    }
    *outItem = item;
    *outCount = *(int *)((char *)item + 0x4054);
}
