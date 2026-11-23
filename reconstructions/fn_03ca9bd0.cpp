extern "C" int fn_03ca9b64(void*, int, void*);

extern "C" void fn_03ca9bd0(void *arg0) {
    (*(void **)((char *)(arg0) + (0x88))) = (void *)(fn_03ca9b64(arg0, 1, (*(void **)((char *)(arg0) + (0x88)))));
    (*(void **)((char *)(arg0) + (0x8C))) = (void *)(fn_03ca9b64(arg0, 2, (*(void **)((char *)(arg0) + (0x8C)))));
    (*(void **)((char *)(arg0) + (0x90))) = (void *)(fn_03ca9b64(arg0, 3, (*(void **)((char *)(arg0) + (0x90)))));
}
