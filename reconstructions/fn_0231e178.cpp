#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10489dc8;
extern "C" RuntimeTag data_10489dcc;
extern "C" const RuntimeVTable data_10085288;
extern "C" unsigned data_10489dc0;
extern "C" RuntimeTag data_10489dc4;
extern "C" const RuntimeVTable data_10085278;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10085268;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10085258;

typedef Pointer<&data_10489dc8, &data_10489dcc, &data_10085288> Type0;
typedef Pointer<&data_10489dc0, &data_10489dc4, &data_10085278> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10085268> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10085258> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0231e178(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
