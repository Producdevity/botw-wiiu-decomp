#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10493c14;
extern "C" RuntimeTag data_10493f8c;
extern "C" const RuntimeVTable data_102cf688;
extern "C" unsigned data_10485f08;
extern "C" RuntimeTag data_1048b0d8;
extern "C" const RuntimeVTable data_102cf678;
extern "C" unsigned data_10485eec;
extern "C" RuntimeTag data_104868ec;
extern "C" const RuntimeVTable data_102cf668;
extern "C" unsigned data_10485ee8;
extern "C" RuntimeTag data_10486a8c;
extern "C" const RuntimeVTable data_102cf658;

typedef Pointer<&data_10493c14, &data_10493f8c, &data_102cf688> Type0;
typedef Pointer<&data_10485f08, &data_1048b0d8, &data_102cf678> Type1;
typedef Pointer<&data_10485eec, &data_104868ec, &data_102cf668> Type2;
typedef Pointer<&data_10485ee8, &data_10486a8c, &data_102cf658> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_034eb0ac(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
