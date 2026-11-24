#include "botw/proc_accessor.h"

struct Opaque_02b96850 {
    unsigned char value;
};

extern "C" void fn_02b96850(Opaque_02b96850* object, unsigned int bits);
extern "C" bool fn_02b9781c(void* p, unsigned mask);
extern "C" void fn_02b99eb8(void* p, unsigned char mask);
extern "C" int fn_02b9ad50(void* self);
extern "C" int fn_02b9ad64(void* self);
extern "C" void* fn_02c0378c(void* link);
extern "C" int fn_02d3da10(void* accessor);
extern "C" int fn_02d3f130(void* accessor);
extern "C" void fn_02e5b5a8(void* accessor);

struct Opaque_02b9aeb0_Target {
    unsigned char unknown_000[1960];
    float distance;
};

struct Opaque_02b9aeb0 {
    unsigned char unknown_000[16];
    unsigned char link[280];
    float distance;
    unsigned char unknown_12c[180];
    Opaque_02b96850 flags;
};

namespace {
struct CheckedAccessor {
    ProcAccessor accessor;
    bool checked;
};
}

extern "C" void fn_02b9aeb0(Opaque_02b9aeb0* self) {
    if (fn_02b9781c(&self->flags, 2)) {
        if (fn_02b9ad64(self))
            fn_02b96850(&self->flags, 2);
        return;
    }
    if (fn_02b9ad50(self)) {
        fn_02b99eb8(&self->flags, 2);
        return;
    }
    CheckedAccessor state = {{false, 0}, false};
    fn_02e5b5a8(&state);
    if (!state.accessor.proc || fn_02d3da10(&state) || fn_02d3f130(&state)) {
        fn_02b99eb8(&self->flags, 2);
    } else {
        Opaque_02b9aeb0_Target* target = static_cast<Opaque_02b9aeb0_Target*>(fn_02c0378c(self->link));
        if (target && target->distance < self->distance)
            fn_02b99eb8(&self->flags, 2);
    }
    fn_031f9d70(&state.accessor, 2);
}
