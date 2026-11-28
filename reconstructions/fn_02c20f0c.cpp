namespace {
struct Object {
    char padding_0[0x224];
    unsigned int counter;
};
}

extern "C" void fn_02c204e0(void*, void*);

extern "C" void fn_02c20f0c(void* object)
{
    ((Object *)object)->counter += 1;
    if (((Object *)object)->counter >= 3) {
        fn_02c204e0(object, 0);
        ((Object *)object)->counter = 0;
    }
}
