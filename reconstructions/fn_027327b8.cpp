typedef int s32;

extern "C" int fn_03177824(void*, void*);

extern "C" s32 fn_027327b8(s32 object, void *context) {
    s32 firstResult;

    firstResult = fn_03177824((void *)(object + 0x84), context) & 1;
    return firstResult & fn_03177824((void *)(object + 0x10C), context);
}
