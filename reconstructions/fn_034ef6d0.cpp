struct LinkedHolder;
extern "C" void* fn_037e61a8(LinkedHolder *);

extern "C" void *fn_034ef6d0(void *arg0) {
    if (fn_037e61a8((LinkedHolder *)((char *)arg0 + 0xC)) != 0) {
        return fn_037e61a8((LinkedHolder *)((char *)arg0 + 0xC));
    }
    return (*(void **)((char *)(arg0) + (4)));
}
