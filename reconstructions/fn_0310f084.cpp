typedef int s32;

extern "C" unsigned* fn_0396bd98(unsigned*);
extern "C" bool fn_0310e564(const void* self, unsigned* iter, const char* actor, bool x);
extern "C" s32 fn_0310eff8(void* arg0);

extern "C" s32 fn_0310f084(const void* self, const char* actor) {
    unsigned iter[2];
    fn_0396bd98(iter);
    s32 result = 0;
    if (fn_0310e564(self, iter, actor, true))
        result = fn_0310eff8(iter);
    return result;
}
