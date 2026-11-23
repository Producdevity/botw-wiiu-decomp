#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048d0e0;
extern "C" RuntimeTag data_1048d0e4;
extern "C" const RuntimeVTable data_1013b730;
extern "C" unsigned data_1048d0d8;
extern "C" RuntimeTag data_1048d0dc;
extern "C" const RuntimeVTable data_1013b720;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1013b710;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1013b700;

typedef Pointer<&data_1048d0e0, &data_1048d0e4, &data_1013b730> Type0;
typedef Pointer<&data_1048d0d8, &data_1048d0dc, &data_1013b720> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_1013b710> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1013b700> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0280c500(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
