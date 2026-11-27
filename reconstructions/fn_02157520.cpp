namespace {
struct Actor {
    unsigned char padding_0[0x364];
    int flags;
};
}

extern "C" void fn_0242a618(void*);
extern "C" void fn_0294e1d0(void*, void*, void*, void*);
extern "C" int fn_02b62ba8(void);

extern "C" void fn_02157520(void **holder) {
    fn_0242a618(holder);
    fn_0294e1d0(*holder, (void *)fn_02b62ba8(), 0, 0);
    Actor *actor = (Actor *)*holder;
    actor->flags |= 0x02000000;
}
