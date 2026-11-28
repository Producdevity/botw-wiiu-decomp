typedef unsigned char u8;
typedef int s32;

struct LinkedHolder;
extern "C" void* fn_037e61a8(LinkedHolder *);

extern "C" u8 fn_02ef7a78(struct LinkedHolder **holder) {
    struct LinkedHolder *linked;
    s32 result;

    linked = *holder;
    result = 0;
    if ((linked != 0) && (fn_037e61a8(linked) != 0)) {
        result = 1;
    }
    return result;
}
